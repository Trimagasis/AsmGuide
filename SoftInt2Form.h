#pragma once
#include "MenuForm.h"
#include "Soft_Instructions_Form.h"

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SoftInt2Form
	/// </summary>
	public ref class SoftInt2Form : public System::Windows::Forms::Form
	{
	public:
		SoftInt2Form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SoftInt2Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ вЗадToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ToolStripMenuItem^ кВыборуТуториалаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вМенюToolStripMenuItem;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SoftInt2Form::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вЗадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->кВыборуТуториалаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вМенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(12, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(758, 510);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(6, 2371);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(728, 480);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 2351);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Должно вывести:";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(6, 1702);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(558, 603);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 1580);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(561, 119);
			this->label5->TabIndex = 8;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 1301);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(591, 247);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 1213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(219, 85);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Написание программы\r\n\r\nПример для вывода Hello, world!\r\n\r\nВписываем этот код:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 777);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(728, 409);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 326);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(728, 413);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(305, 204);
			this->label3->TabIndex = 3;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(3, 102);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(127, 17);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Visual Studio Code";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SoftInt2Form::linkLabel1_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(377, 102);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Visual Studio Code\r\n\r\nVisual Studio Code можно скачать с офицального сайта:\r\nОткр"
				L"ойте Интернет-браузер\r\nВбиваем в поиск Visual Studio Code\r\nПереходим на сайт:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->вЗадToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(782, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вЗадToolStripMenuItem
			// 
			this->вЗадToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->кВыборуТуториалаToolStripMenuItem,
					this->вМенюToolStripMenuItem
			});
			this->вЗадToolStripMenuItem->Name = L"вЗадToolStripMenuItem";
			this->вЗадToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->вЗадToolStripMenuItem->Text = L"Назад";
			// 
			// кВыборуТуториалаToolStripMenuItem
			// 
			this->кВыборуТуториалаToolStripMenuItem->Name = L"кВыборуТуториалаToolStripMenuItem";
			this->кВыборуТуториалаToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->кВыборуТуториалаToolStripMenuItem->Text = L"К выбору Туториала";
			this->кВыборуТуториалаToolStripMenuItem->Click += gcnew System::EventHandler(this, &SoftInt2Form::кВыборуТуториалаToolStripMenuItem_Click);
			// 
			// вМенюToolStripMenuItem
			// 
			this->вМенюToolStripMenuItem->Name = L"вМенюToolStripMenuItem";
			this->вМенюToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->вМенюToolStripMenuItem->Text = L"В меню";
			this->вМенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &SoftInt2Form::вМенюToolStripMenuItem_Click);
			// 
			// SoftInt2Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SoftInt2Form";
			this->Text = L"Туториал №2";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		Diagnostics::Process::Start("https://code.visualstudio.com");
	}
private: System::Void кВыборуТуториалаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Soft_Instructions_Form^ form = gcnew Soft_Instructions_Form();
	this->Hide();
	form->Show();
}
private: System::Void вМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuForm^ form1 = gcnew MenuForm();
	this->Hide();
	form1->Show();
}
};
}
