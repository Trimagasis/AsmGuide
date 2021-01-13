#include "Bookmarks_Form.h"
#include "MenuForm.h"

System::Void ProjectSprv::Bookmarks_Form::назадВМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //Создаем форму
    this->Hide();   //Закрываем текущую форму
    form->Show();   //Открываем новую

    //return System::Void();
}
