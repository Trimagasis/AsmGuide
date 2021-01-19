#include "Bookmarks_Form.h"
#include "MenuForm.h"
#include "Main_Literature_Form.h"
#include "Functions.h"

using namespace System::Runtime::InteropServices;

System::Void ProjectSprv::Bookmarks_Form::назадВМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //Создаем форму
    this->Hide();   //Закрываем текущую форму
    form->Show();   //Открываем новую


    //return System::Void();
}

System::Void ProjectSprv::Bookmarks_Form::Bookmarks_Form_Load(System::Object^ sender, System::EventArgs^ e)
{
    bool flag = false; //флаг для считывания всего списка закладок
    Punct* currentP1;
    std::string stroka, ukazatel = " -->> ";
    do
    {
        OutFullBookmark(currentP1, flag);
        if (flag == true) {
            stroka = currentP1->p1;
            if (currentP1->p2.headP2 != NULL) {
                stroka += ukazatel + currentP1->p2.headP2->p2;
                if (currentP1->p2.headP2->p3.headP3 != NULL)
                    stroka += ukazatel + currentP1->p2.headP2->p3.headP3->p3;
            }
            System::String^ clistr = gcnew System::String(stroka.c_str());
            listBoxBookmark->Items->Add(clistr);
        }
    } while (flag == true);
    return System::Void();
}


System::Void ProjectSprv::Bookmarks_Form::listBoxBookmark_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    //listBoxBookmark->ClearSelected();
    if (listBoxBookmark->SelectedItem != nullptr)
    {
        std::string SelectItem;
        System::String^ std = gcnew System::String(listBoxBookmark->SelectedItem->ToString());

        using namespace Runtime::InteropServices;
        const char* chars =
            (const char*)(Marshal::StringToHGlobalAnsi(std)).ToPointer();
        SelectItem = chars;
        Marshal::FreeHGlobal(IntPtr((void*)chars));

        std::ofstream filestream("data\\tempBkmrk.txt", std::ios_base::trunc);
        if (filestream) {
            filestream << SelectItem;
            filestream.close();
            Main_Literature_Form^ form = gcnew Main_Literature_Form();
            this->Hide();   //Закрываем текущую форму
            form->Show();   //Открываем новую
        }
        else {
            MessageBox::Show("Файл tempBkmrk.txt отсутствует!", "Ошибка!");
            filestream.close();
        }
        //MessageBox::Show(listBoxBookmark->SelectedItem->ToString());
    }
    //else
        //listBoxBookmark->SelectedIndex = -1;

    return System::Void();
}

System::Void ProjectSprv::Bookmarks_Form::buttonRemove_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxBookmark->SelectedItem != nullptr)
    {
        std::string SelectItem;
        System::String^ std = gcnew System::String(listBoxBookmark->SelectedItem->ToString());

        using namespace Runtime::InteropServices;
        const char* chars =
            (const char*)(Marshal::StringToHGlobalAnsi(std)).ToPointer();
        SelectItem = chars;
        Marshal::FreeHGlobal(IntPtr((void*)chars));

        std::ofstream filestream("data\\tempBkmrk.txt", std::ios_base::trunc);
        if (filestream) {
            filestream << SelectItem;
            filestream.close();
            Main_Literature_Form^ form = gcnew Main_Literature_Form();

            //выборка цифр из считанной строки
            int punct, predpunct;
            std::ifstream filestream("data\\tempBkmrk.txt");
            std::string str, strNumPunct;
            if (filestream) {
                char tmp[100];
                filestream.getline(tmp, 100 - 1);
                str = tmp;
                if (str[0] != '\0') {
                    int b;
                    for (int i = 0; i < str.size(); i++)
                        if (str[i] >= 48 && str[i] <= 57)
                        {
                            strNumPunct += str[i];
                        }
                }
                else strNumPunct = "111";
                filestream.close();

            }
            book* start = new book;
            //переводы char to int
            start->a = atoi(std::string({ (char)strNumPunct[0] }).c_str());
            start->b = atoi(std::string({ (char)strNumPunct[1] }).c_str());;
            if (atoi(std::string({ (char)strNumPunct[2] }).c_str()) != '\0')
                start->c = atoi(std::string({ (char)strNumPunct[2] }).c_str());
            else start->c = 0;

            SearchItem(start, predpunct);   //поиск блока теории (punct) по адресу a b c

            directorFy(punct, predpunct); //переводы

            DeleteBookmark(punct);  //удаление закладки

            Bookmarks_Form^ form1 = gcnew Bookmarks_Form();
            this->Hide();
            form1->Show();
        }
        else {
            MessageBox::Show("Файл tempBkmrk.txt отсутствует!", "Ошибка!");
            filestream.close();
        }
        //MessageBox::Show(listBoxBookmark->SelectedItem->ToString());
    }

    return System::Void();
}

System::Void ProjectSprv::Bookmarks_Form::buttonCleen_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool checkCleen = false;
    CleenBookmark(checkCleen);    //вызов функции очистки списка закладок
    if (checkCleen == false) {
        Bookmarks_Form^ form2 = gcnew Bookmarks_Form();
        this->Hide();
        form2->Show();
    }

    return System::Void();
}

System::Void ProjectSprv::Bookmarks_Form::перейтиКСборникуТеорииToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Main_Literature_Form^ form3 = gcnew Main_Literature_Form();
    this->Hide();
    form3->Show();

    return System::Void();
}

System::Void ProjectSprv::Bookmarks_Form::buttonSort_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool sort = false;
    bool numberBookmarks = false;
    SortBookmark(sort, numberBookmarks);
    if (numberBookmarks)
        MessageBox::Show("В списки всего 1 пункт! Что вы собрались сортировать?..","Ошибка!");
    else {
        Bookmarks_Form^ form4 = gcnew Bookmarks_Form();
        this->Hide();
        form4->Show();
    }
    return System::Void();
}
