#include "Soft_Instructions_Form.h"
#include "MenuForm.h"

System::Void ProjectSprv::Soft_Instructions_Form::выходВМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //Создаем форму
    this->Hide();   //Закрываем текущую форму
    form->Show();   //Открываем новую

    //return System::Void();
}
