#include "Example1Form.h"
#include "MenuForm.h"
#include "ExamplesAsmForm.h"

System::Void ProjectSprv::Example1Form::êÏðèìåðàìToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    ExamplesAsmForm^ form = gcnew ExamplesAsmForm();
    this->Hide();
    form->Show();

    return System::Void();
}

System::Void ProjectSprv::Example1Form::âÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form1 = gcnew MenuForm();
    this->Hide();
    form1->Show();

    return System::Void();
}

System::Void ProjectSprv::Example1Form::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Diagnostics::Process::Start("data\\PR.01.exe");

    return System::Void();
}
