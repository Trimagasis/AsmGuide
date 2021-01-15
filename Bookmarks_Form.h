#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Bookmarks_Form
	/// </summary>
	public ref class Bookmarks_Form : public System::Windows::Forms::Form
	{
	public:
		Bookmarks_Form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ назад¬ћенюToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonSort;
	private: System::Windows::Forms::ListBox^ listBoxBookmark;
	private: System::Windows::Forms::Button^ buttonRemove;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->назад¬ћенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonSort = (gcnew System::Windows::Forms::Button());
			this->listBoxBookmark = (gcnew System::Windows::Forms::ListBox());
			this->buttonRemove = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->назад¬ћенюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(721, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// назад¬ћенюToolStripMenuItem
			// 
			this->назад¬ћенюToolStripMenuItem->Name = L"назад¬ћенюToolStripMenuItem";
			this->назад¬ћенюToolStripMenuItem->Size = System::Drawing::Size(121, 24);
			this->назад¬ћенюToolStripMenuItem->Text = L"Ќазад в меню";
			this->назад¬ћенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &Bookmarks_Form::назад¬ћенюToolStripMenuItem_Click);
			// 
			// buttonSort
			// 
			this->buttonSort->Location = System::Drawing::Point(538, 32);
			this->buttonSort->Name = L"buttonSort";
			this->buttonSort->Size = System::Drawing::Size(171, 58);
			this->buttonSort->TabIndex = 1;
			this->buttonSort->Text = L"—ортировка списка закладок";
			this->buttonSort->UseVisualStyleBackColor = true;
			// 
			// listBoxBookmark
			// 
			this->listBoxBookmark->FormattingEnabled = true;
			this->listBoxBookmark->ItemHeight = 16;
			this->listBoxBookmark->Location = System::Drawing::Point(13, 32);
			this->listBoxBookmark->Name = L"listBoxBookmark";
			this->listBoxBookmark->Size = System::Drawing::Size(469, 468);
			this->listBoxBookmark->TabIndex = 2;
			this->listBoxBookmark->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Bookmarks_Form::listBoxBookmark_MouseDoubleClick);
			// 
			// buttonRemove
			// 
			this->buttonRemove->Location = System::Drawing::Point(538, 96);
			this->buttonRemove->Name = L"buttonRemove";
			this->buttonRemove->Size = System::Drawing::Size(171, 58);
			this->buttonRemove->TabIndex = 3;
			this->buttonRemove->Text = L"”далить выбранную закладку";
			this->buttonRemove->UseVisualStyleBackColor = true;
			this->buttonRemove->Click += gcnew System::EventHandler(this, &Bookmarks_Form::buttonRemove_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(538, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 58);
			this->button1->TabIndex = 4;
			this->button1->Text = L"ќчистить список закладок";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Bookmarks_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 519);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonRemove);
			this->Controls->Add(this->listBoxBookmark);
			this->Controls->Add(this->buttonSort);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Bookmarks_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"—писок закладок";
			this->Load += gcnew System::EventHandler(this, &Bookmarks_Form::Bookmarks_Form_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void назад¬ћенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Bookmarks_Form_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listBoxBookmark_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void buttonRemove_Click(System::Object^ sender, System::EventArgs^ e);
};
}
