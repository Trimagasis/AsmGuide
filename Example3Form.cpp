#include "Example3Form.h"
#include "MenuForm.h"
#include "ExamplesAsmForm.h"

System::Void ProjectSprv::Example3Form::êÏðèìåðàìToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    ExamplesAsmForm^ form = gcnew ExamplesAsmForm();
    this->Hide();
    form->Show();

    return System::Void();
}

System::Void ProjectSprv::Example3Form::âÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form1 = gcnew MenuForm();
    this->Hide();
    form1->Show();

    return System::Void();
}

System::Void ProjectSprv::Example3Form::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Diagnostics::Process::Start("PR.03.exe");

    return System::Void();
}
