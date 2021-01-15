#include "Bookmarks_Form.h"
#include "MenuForm.h"
#include "OutTheoryBookmark.h"
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
    book* start = new book;
    start->a = 1; start->b = 1; start->c = 1;
    Punct* currentP1;
    std::string stroka, ukazatel = " -->> ";
    do
    {
        OutFullBookmark(start, currentP1, flag);
        if (flag == true) {
            stroka = currentP1->p1 + ukazatel + currentP1->p2.headP2->p2;
            if (currentP1->p2.headP2->p3.headP3->p3 != NULL)
                stroka += ukazatel + currentP1->p2.headP2->p3.headP3->p3;
            System::String^ clistr = gcnew System::String(stroka.c_str());
            listBoxBookmark->Items->Add(clistr);
        }
    } while (flag == true);
    return System::Void();
}

std::string SelectItem;

System::Void ProjectSprv::Bookmarks_Form::listBoxBookmark_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    //listBoxBookmark->ClearSelected();
    if (listBoxBookmark->SelectedItem != nullptr)
    {
        std::string predSelectItem;
        System::String^ std = gcnew System::String(listBoxBookmark->SelectedItem->ToString());


        using namespace Runtime::InteropServices;
        const char* chars =
            (const char*)(Marshal::StringToHGlobalAnsi(std)).ToPointer();
        predSelectItem = chars;

        Marshal::FreeHGlobal(IntPtr((void*)chars));
        OutTheoryBookmark^ form = gcnew OutTheoryBookmark();
        this->Hide();   //Закрываем текущую форму
        form->Show();   //Открываем новую
        //MessageBox::Show(listBoxBookmark->SelectedItem->ToString());
    }
    //else
        //listBoxBookmark->SelectedIndex = -1;

    return System::Void();
}
