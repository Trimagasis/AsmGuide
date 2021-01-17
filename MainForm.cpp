#include "MainForm.h"
#include "MenuForm.h"

System::Void ProjectSprv::MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->textBox1->Text = File::ReadAllText(L"ASCII_01.txt");
	this->textBox2->Text = File::ReadAllText(L"ASCII_02.txt");
	this->textBox3->Text = File::ReadAllText(L"ASCII_03.txt");
	this->textBox4->Text = File::ReadAllText(L"ConditionalBranching.txt");
	this->textBox5->Text = File::ReadAllText(L"DOSInt21h.txt");

	return System::Void();
}

System::Void ProjectSprv::MainForm::âÃëàâíîåÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MenuForm^ form = gcnew MenuForm();
	this->Hide();
	form->Show();

	return System::Void();
}
