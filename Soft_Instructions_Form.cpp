#include "Soft_Instructions_Form.h"
#include "MenuForm.h"
#include "SoftInt1Form.h"
#include "SoftInt2Form.h"

System::Void ProjectSprv::Soft_Instructions_Form::âûõîäÂÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //Ñîçäàåì ôîðìó
    this->Hide();   //Çàêðûâàåì òåêóùóþ ôîðìó
    form->Show();   //Îòêðûâàåì íîâóþ

    //return System::Void();
}

System::Void ProjectSprv::Soft_Instructions_Form::buttonSoftInt1_Click(System::Object^ sender, System::EventArgs^ e)
{
    SoftInt1Form^ form1 = gcnew SoftInt1Form();
    this->Hide();
    form1->Show();

    return System::Void();
}

System::Void ProjectSprv::Soft_Instructions_Form::buttonSoftInt2_Click(System::Object^ sender, System::EventArgs^ e)
{
    SoftInt2Form^ form2 = gcnew SoftInt2Form();
    this->Hide();
    form2->Show();

    return System::Void();
}
