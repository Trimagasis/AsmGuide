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
            stroka = currentP1->p1 + ukazatel + currentP1->p2.headP2->p2;
            if (currentP1->p2.headP2->p3.headP3 != NULL)
                stroka += ukazatel + currentP1->p2.headP2->p3.headP3->p3;
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

        std::ofstream filestream("tempBkmrk.txt", std::ios_base::trunc);
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
