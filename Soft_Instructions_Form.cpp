#include "Soft_Instructions_Form.h"
#include "MenuForm.h"

System::Void ProjectSprv::Soft_Instructions_Form::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //������� �����
    this->Hide();   //��������� ������� �����
    form->Show();   //��������� �����

    //return System::Void();
}
