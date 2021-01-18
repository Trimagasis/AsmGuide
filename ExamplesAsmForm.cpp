#include "ExamplesAsmForm.h"
#include "MenuForm.h"
#include "Example1Form.h"
#include "Example2Form.h"
#include "Example3Form.h"

System::Void ProjectSprv::ExamplesAsmForm::íàçàäÂÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();
    this->Hide();
    form->Show();

    return System::Void();
}

System::Void ProjectSprv::ExamplesAsmForm::buttonExample1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Example1Form^ form = gcnew Example1Form();
    this->Hide();
    form->Show();

    return System::Void();
}

System::Void ProjectSprv::ExamplesAsmForm::buttonExample2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Example2Form^ form1 = gcnew Example2Form();
    this->Hide();
    form1->Show();

    return System::Void();
}

System::Void ProjectSprv::ExamplesAsmForm::buttonExample3_Click(System::Object^ sender, System::EventArgs^ e)
{
    Example3Form^ form2 = gcnew Example3Form();
    this->Hide();
    form2->Show();

    return System::Void();
}
