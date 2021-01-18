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

System::Void ProjectSprv::MenuForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();

}

System::Void ProjectSprv::MenuForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�����������:\nTrimagasis (��� ������� Archimedes68) � ������ 2021.", "� ���������");

	return System::Void();
}

System::Void ProjectSprv::MenuForm::Soft_Click(System::Object^ sender, System::EventArgs^ e)
{
	Soft_Instructions_Form^ form = gcnew Soft_Instructions_Form();	//������� �����
	this->Hide();	//��������� ������� �����
	form->Show();	//��������� ����� �����

	return System::Void();
}

System::Void ProjectSprv::MenuForm::MainLit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Main_Literature_Form^ form = gcnew Main_Literature_Form();	//������� �����
	this->Hide();	//��������� ������� �����
	form->Show();	//��������� ����� �����

	return System::Void();
}

System::Void ProjectSprv::MenuForm::Bookmarks_Click(System::Object^ sender, System::EventArgs^ e)
{
	Bookmarks_Form^ form = gcnew Bookmarks_Form();	//������� �����
	this->Hide();	//��������� ������� �����
	form->Show();	//��������� ����� �����

	return System::Void();
}

System::Void ProjectSprv::MenuForm::AddMat_Click(System::Object^ sender, System::EventArgs^ e)
{
	MainForm^ form = gcnew MainForm();	//������� �����
	this->Hide();	//��������� ������� �����
	form->Show();	//��������� ����� �����

	return System::Void();
}

System::Void ProjectSprv::MenuForm::buttonPrimeri_Click(System::Object^ sender, System::EventArgs^ e)
{
	ExamplesAsmForm^ form = gcnew ExamplesAsmForm();
	this->Hide();
	form->Show();

	return System::Void();
}
