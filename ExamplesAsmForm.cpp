#include "ExamplesAsmForm.h"
#include "MenuForm.h"

System::Void ProjectSprv::ExamplesAsmForm::íàçàäÂÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();
    this->Hide();
    form->Show();

    return System::Void();
}
