#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Bookmarks_Form
	/// </summary>
	public ref class Bookmarks_Form : public System::Windows::Forms::Form
	{
	public:
		Bookmarks_Form(void)
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
		~Bookmarks_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonSort;
	private: System::Windows::Forms::ListBox^ listBoxBookmark;
	private: System::Windows::Forms::Button^ buttonRemove;
	private: System::Windows::Forms::Button^ buttonCleen;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������ToolStripMenuItem;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Bookmarks_Form::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonSort = (gcnew System::Windows::Forms::Button());
			this->listBoxBookmark = (gcnew System::Windows::Forms::ListBox());
			this->buttonRemove = (gcnew System::Windows::Forms::Button());
			this->buttonCleen = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������ToolStripMenuItem,
					this->����������������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1257, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(135, 27);
			this->����������ToolStripMenuItem->Text = L"����� � ����";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Bookmarks_Form::����������ToolStripMenuItem_Click);
			// 
			// ����������������������ToolStripMenuItem
			// 
			this->����������������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->����������������������ToolStripMenuItem->Name = L"����������������������ToolStripMenuItem";
			this->����������������������ToolStripMenuItem->Size = System::Drawing::Size(244, 27);
			this->����������������������ToolStripMenuItem->Text = L"������� � �������� ������";
			this->����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Bookmarks_Form::����������������������ToolStripMenuItem_Click);
			// 
			// buttonSort
			// 
			this->buttonSort->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonSort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSort->Location = System::Drawing::Point(1016, 43);
			this->buttonSort->Name = L"buttonSort";
			this->buttonSort->Size = System::Drawing::Size(217, 80);
			this->buttonSort->TabIndex = 1;
			this->buttonSort->Text = L"���������� ������ ��������";
			this->buttonSort->UseVisualStyleBackColor = false;
			this->buttonSort->Click += gcnew System::EventHandler(this, &Bookmarks_Form::buttonSort_Click);
			// 
			// listBoxBookmark
			// 
			this->listBoxBookmark->BackColor = System::Drawing::SystemColors::Control;
			this->listBoxBookmark->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBoxBookmark->FormattingEnabled = true;
			this->listBoxBookmark->ItemHeight = 26;
			this->listBoxBookmark->Location = System::Drawing::Point(13, 43);
			this->listBoxBookmark->Name = L"listBoxBookmark";
			this->listBoxBookmark->Size = System::Drawing::Size(978, 602);
			this->listBoxBookmark->TabIndex = 2;
			this->listBoxBookmark->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Bookmarks_Form::listBoxBookmark_MouseDoubleClick);
			// 
			// buttonRemove
			// 
			this->buttonRemove->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonRemove->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRemove->Location = System::Drawing::Point(1016, 129);
			this->buttonRemove->Name = L"buttonRemove";
			this->buttonRemove->Size = System::Drawing::Size(217, 80);
			this->buttonRemove->TabIndex = 3;
			this->buttonRemove->Text = L"������� ��������� ��������";
			this->buttonRemove->UseVisualStyleBackColor = false;
			this->buttonRemove->Click += gcnew System::EventHandler(this, &Bookmarks_Form::buttonRemove_Click);
			// 
			// buttonCleen
			// 
			this->buttonCleen->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonCleen->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCleen->Location = System::Drawing::Point(1016, 215);
			this->buttonCleen->Name = L"buttonCleen";
			this->buttonCleen->Size = System::Drawing::Size(217, 80);
			this->buttonCleen->TabIndex = 4;
			this->buttonCleen->Text = L"�������� ������ ��������";
			this->buttonCleen->UseVisualStyleBackColor = false;
			this->buttonCleen->Click += gcnew System::EventHandler(this, &Bookmarks_Form::buttonCleen_Click);
			// 
			// Bookmarks_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1257, 679);
			this->Controls->Add(this->buttonCleen);
			this->Controls->Add(this->buttonRemove);
			this->Controls->Add(this->listBoxBookmark);
			this->Controls->Add(this->buttonSort);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1275, 726);
			this->MinimumSize = System::Drawing::Size(1275, 726);
			this->Name = L"Bookmarks_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������ ��������";
			this->Load += gcnew System::EventHandler(this, &Bookmarks_Form::Bookmarks_Form_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Bookmarks_Form_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listBoxBookmark_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void buttonRemove_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonCleen_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSort_Click(System::Object^ sender, System::EventArgs^ e);
};
}
