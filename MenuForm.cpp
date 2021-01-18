#include "MenuForm.h"

#include "Soft_Instructions_Form.h"
#include "Main_Literature_Form.h"
#include "Bookmarks_Form.h"
#include "MainForm.h"
#include "ExamplesAsmForm.h"

#include "Functions.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ProjectSprv::MenuForm form;
	Application::Run(%form);
}

System::Void ProjectSprv::MenuForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();

}

System::Void ProjectSprv::MenuForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Разработали:\nTrimagasis (при участии Archimedes68) в Январе 2021.", "О программе");

	return System::Void();
}

System::Void ProjectSprv::MenuForm::Soft_Click(System::Object^ sender, System::EventArgs^ e)
{
	Soft_Instructions_Form^ form = gcnew Soft_Instructions_Form();	//создаем форму
	this->Hide();	//закрываем текущую форму
	form->Show();	//открываем новую форму

	return System::Void();
}

System::Void ProjectSprv::MenuForm::MainLit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Main_Literature_Form^ form = gcnew Main_Literature_Form();	//создаем форму
	this->Hide();	//закрываем текущую форму
	form->Show();	//открываем новую форму

	return System::Void();
}

System::Void ProjectSprv::MenuForm::Bookmarks_Click(System::Object^ sender, System::EventArgs^ e)
{
	Bookmarks_Form^ form = gcnew Bookmarks_Form();	//создаем форму
	this->Hide();	//закрываем текущую форму
	form->Show();	//открываем новую форму

	return System::Void();
}

System::Void ProjectSprv::MenuForm::AddMat_Click(System::Object^ sender, System::EventArgs^ e)
{
	MainForm^ form = gcnew MainForm();	//создаем форму
	this->Hide();	//закрываем текущую форму
	form->Show();	//открываем новую форму

	return System::Void();
}

System::Void ProjectSprv::MenuForm::buttonPrimeri_Click(System::Object^ sender, System::EventArgs^ e)
{
	ExamplesAsmForm^ form = gcnew ExamplesAsmForm();
	this->Hide();
	form->Show();

	return System::Void();
}
