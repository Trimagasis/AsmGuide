#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::Button^ Soft;
	private: System::Windows::Forms::Button^ MainLit;
	private: System::Windows::Forms::Button^ Bookmarks;
	private: System::Windows::Forms::Button^ AddMat;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonPrimeri;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;






	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Soft = (gcnew System::Windows::Forms::Button());
			this->MainLit = (gcnew System::Windows::Forms::Button());
			this->Bookmarks = (gcnew System::Windows::Forms::Button());
			this->AddMat = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonPrimeri = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�����ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(582, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->�����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(67, 26);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::�����ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->����������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(118, 26);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::����������ToolStripMenuItem_Click);
			// 
			// Soft
			// 
			this->Soft->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Soft->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Soft->Location = System::Drawing::Point(130, 82);
			this->Soft->Name = L"Soft";
			this->Soft->Size = System::Drawing::Size(304, 72);
			this->Soft->TabIndex = 1;
			this->Soft->Text = L"���������";
			this->Soft->UseVisualStyleBackColor = false;
			this->Soft->Click += gcnew System::EventHandler(this, &MenuForm::Soft_Click);
			// 
			// MainLit
			// 
			this->MainLit->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MainLit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainLit->Location = System::Drawing::Point(130, 183);
			this->MainLit->Name = L"MainLit";
			this->MainLit->Size = System::Drawing::Size(304, 74);
			this->MainLit->TabIndex = 2;
			this->MainLit->Text = L"�������� ������������� ��������";
			this->MainLit->UseVisualStyleBackColor = false;
			this->MainLit->Click += gcnew System::EventHandler(this, &MenuForm::MainLit_Click);
			// 
			// Bookmarks
			// 
			this->Bookmarks->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Bookmarks->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Bookmarks->Location = System::Drawing::Point(130, 285);
			this->Bookmarks->Name = L"Bookmarks";
			this->Bookmarks->Size = System::Drawing::Size(304, 80);
			this->Bookmarks->TabIndex = 3;
			this->Bookmarks->Text = L"������ ��������";
			this->Bookmarks->UseVisualStyleBackColor = false;
			this->Bookmarks->Click += gcnew System::EventHandler(this, &MenuForm::Bookmarks_Click);
			// 
			// AddMat
			// 
			this->AddMat->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->AddMat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddMat->Location = System::Drawing::Point(130, 389);
			this->AddMat->Name = L"AddMat";
			this->AddMat->Size = System::Drawing::Size(304, 73);
			this->AddMat->TabIndex = 4;
			this->AddMat->Text = L"���. ���������� ���������";
			this->AddMat->UseVisualStyleBackColor = false;
			this->AddMat->Click += gcnew System::EventHandler(this, &MenuForm::AddMat_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(12, 595);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 19);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Early Access Alpha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(445, 595);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 19);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Version: 0.3.2";
			// 
			// buttonPrimeri
			// 
			this->buttonPrimeri->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPrimeri->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPrimeri->Location = System::Drawing::Point(130, 485);
			this->buttonPrimeri->Name = L"buttonPrimeri";
			this->buttonPrimeri->Size = System::Drawing::Size(304, 73);
			this->buttonPrimeri->TabIndex = 7;
			this->buttonPrimeri->Text = L"������� ��������";
			this->buttonPrimeri->UseVisualStyleBackColor = false;
			this->buttonPrimeri->Click += gcnew System::EventHandler(this, &MenuForm::buttonPrimeri_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(582, 668);
			this->Controls->Add(this->buttonPrimeri);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AddMat);
			this->Controls->Add(this->Bookmarks);
			this->Controls->Add(this->MainLit);
			this->Controls->Add(this->Soft);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(400, 600);
			this->Name = L"MenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Soft_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MainLit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Bookmarks_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddMat_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonPrimeri_Click(System::Object^ sender, System::EventArgs^ e);
};
}
