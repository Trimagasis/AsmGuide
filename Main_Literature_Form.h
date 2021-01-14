#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Main_Literature_Form
	/// </summary>
	public ref class Main_Literature_Form : public System::Windows::Forms::Form
	{
	public:
		Main_Literature_Form(void)
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
		~Main_Literature_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ назад¬ћенюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открыть∆урнал—“еориейToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ item1;
	private: System::Windows::Forms::ToolStripMenuItem^ item2;
	private: System::Windows::Forms::ToolStripMenuItem^ item3;
	private: System::Windows::Forms::ToolStripMenuItem^ item4;







	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem11;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem13;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem14;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem15;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem16;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem17;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ bookmarkImage;







	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_Literature_Form::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->открыть∆урнал—“еориейToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->item1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->item2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->item3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->item4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->назад¬ћенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bookmarkImage = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bookmarkImage))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->открыть∆урнал—“еориейToolStripMenuItem,
					this->назад¬ћенюToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(866, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// открыть∆урнал—“еориейToolStripMenuItem
			// 
			this->открыть∆урнал—“еориейToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5
			});
			this->открыть∆урнал—“еориейToolStripMenuItem->Name = L"открыть∆урнал—“еориейToolStripMenuItem";
			this->открыть∆урнал—“еориейToolStripMenuItem->Size = System::Drawing::Size(210, 24);
			this->открыть∆урнал—“еориейToolStripMenuItem->Text = L"ќткрыть журнал с теорией";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem6,
					this->item3, this->item4
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem2->Text = L"1";
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->item1,
					this->item2
			});
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(111, 26);
			this->toolStripMenuItem6->Text = L"1.1";
			// 
			// item1
			// 
			this->item1->Name = L"item1";
			this->item1->Size = System::Drawing::Size(122, 26);
			this->item1->Text = L"1.1.1";
			this->item1->Click += gcnew System::EventHandler(this, &Main_Literature_Form::item1_Click);
			// 
			// item2
			// 
			this->item2->Name = L"item2";
			this->item2->Size = System::Drawing::Size(122, 26);
			this->item2->Text = L"1.1.2";
			this->item2->Click += gcnew System::EventHandler(this, &Main_Literature_Form::item2_Click);
			// 
			// item3
			// 
			this->item3->Name = L"item3";
			this->item3->Size = System::Drawing::Size(111, 26);
			this->item3->Text = L"1.2";
			this->item3->Click += gcnew System::EventHandler(this, &Main_Literature_Form::item3_Click);
			// 
			// item4
			// 
			this->item4->Name = L"item4";
			this->item4->Size = System::Drawing::Size(111, 26);
			this->item4->Text = L"1.3";
			this->item4->Click += gcnew System::EventHandler(this, &Main_Literature_Form::item4_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem11,
					this->toolStripMenuItem12, this->toolStripMenuItem13
			});
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem3->Text = L"1";
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(111, 26);
			this->toolStripMenuItem11->Text = L"2.1";
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(111, 26);
			this->toolStripMenuItem12->Text = L"2.2";
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(111, 26);
			this->toolStripMenuItem13->Text = L"2.3";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem14,
					this->toolStripMenuItem15
			});
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem4->Text = L"1";
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(111, 26);
			this->toolStripMenuItem14->Text = L"3.1";
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(111, 26);
			this->toolStripMenuItem15->Text = L"3.2";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem16,
					this->toolStripMenuItem17
			});
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem5->Text = L"1";
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(111, 26);
			this->toolStripMenuItem16->Text = L"4.1";
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(111, 26);
			this->toolStripMenuItem17->Text = L"4.2";
			// 
			// назад¬ћенюToolStripMenuItem
			// 
			this->назад¬ћенюToolStripMenuItem->Name = L"назад¬ћенюToolStripMenuItem";
			this->назад¬ћенюToolStripMenuItem->Size = System::Drawing::Size(121, 24);
			this->назад¬ћенюToolStripMenuItem->Text = L"Ќазад в меню";
			this->назад¬ћенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::назад¬ћенюToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(15, 21);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(752, 478);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Main_Literature_Form::richTextBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Location = System::Drawing::Point(30, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(779, 519);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// bookmarkImage
			// 
			this->bookmarkImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bookmarkImage.Image")));
			this->bookmarkImage->Location = System::Drawing::Point(803, 31);
			this->bookmarkImage->Name = L"bookmarkImage";
			this->bookmarkImage->Size = System::Drawing::Size(56, 50);
			this->bookmarkImage->TabIndex = 6;
			this->bookmarkImage->TabStop = false;
			this->bookmarkImage->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main_Literature_Form::bookmarkImage_MouseDown);
			// 
			// Main_Literature_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(866, 562);
			this->Controls->Add(this->bookmarkImage);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Main_Literature_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ќсновной теоретический материал";
			this->Load += gcnew System::EventHandler(this, &Main_Literature_Form::Main_Literature_Form_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bookmarkImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void назад¬ћенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void item1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void item2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void item3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void item4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void bookmarkImage_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void Main_Literature_Form_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
