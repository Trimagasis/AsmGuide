#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Main_Literature_Form
	/// </summary>
	public ref class Main_Literature_Form : public System::Windows::Forms::Form
	{
	public:
		Main_Literature_Form(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;


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
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������IOPLToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������LOOPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������LEAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������LEAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;







	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_Literature_Form::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->item3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->item4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������IOPLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������LOOPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������LEAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������LEAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->���������������������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->����������������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1482, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->�������ToolStripMenuItem, this->�������������������ToolStripMenuItem,
					this->������������������ToolStripMenuItem, this->����������������������������������������������ToolStripMenuItem
			});
			this->���������������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->���������������������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"���������������������ToolStripMenuItem.Image")));
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(257, 27);
			this->���������������������ToolStripMenuItem->Text = L"������� ������ � �������";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem6,
					this->item3, this->item4, this->������������������ToolStripMenuItem, this->������������������ToolStripMenuItem
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(426, 28);
			this->toolStripMenuItem2->Text = L"1. ��������";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(349, 28);
			this->toolStripMenuItem6->Text = L"1. �������� ������ ����������";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem6_Click);
			// 
			// item3
			// 
			this->item3->Name = L"item3";
			this->item3->Size = System::Drawing::Size(349, 28);
			this->item3->Text = L"2. ��������� ������";
			this->item3->Click += gcnew System::EventHandler(this, &Main_Literature_Form::item3_Click);
			// 
			// item4
			// 
			this->item4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������������ToolStripMenuItem,
					this->���������������ToolStripMenuItem, this->�������������������IOPLToolStripMenuItem
			});
			this->item4->Name = L"item4";
			this->item4->Size = System::Drawing::Size(349, 28);
			this->item4->Text = L"3. ������� ������";
			this->item4->Click += gcnew System::EventHandler(this, &Main_Literature_Form::item4_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(351, 28);
			this->��������������ToolStripMenuItem->Text = L"1. ����� ���������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������ToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(351, 28);
			this->���������������ToolStripMenuItem->Text = L"2. ����������� ����";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::���������������ToolStripMenuItem_Click);
			// 
			// �������������������IOPLToolStripMenuItem
			// 
			this->�������������������IOPLToolStripMenuItem->Name = L"�������������������IOPLToolStripMenuItem";
			this->�������������������IOPLToolStripMenuItem->Size = System::Drawing::Size(351, 28);
			this->�������������������IOPLToolStripMenuItem->Text = L"3. ��������� ����� � ���� IOPL";
			this->�������������������IOPLToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������������������IOPLToolStripMenuItem_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(349, 28);
			this->������������������ToolStripMenuItem->Text = L"4. ���������� ��������";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::������������������ToolStripMenuItem_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(349, 28);
			this->������������������ToolStripMenuItem->Text = L"5. ������������� �����";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::������������������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem11,
					this->toolStripMenuItem12, this->toolStripMenuItem13, this->�����������ToolStripMenuItem, this->������������������������ToolStripMenuItem,
					this->��������������������������ToolStripMenuItem, this->�������ToolStripMenuItem, this->��������������ToolStripMenuItem
			});
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(426, 28);
			this->toolStripMenuItem3->Text = L"2. �������� ������� ����� ����������";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(371, 28);
			this->toolStripMenuItem11->Text = L"1. ��������������";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem11_Click);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(371, 28);
			this->toolStripMenuItem12->Text = L"2. ����� �����";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(371, 28);
			this->toolStripMenuItem13->Text = L"3. ���������� ������";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem13_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(371, 28);
			this->�����������ToolStripMenuItem->Text = L"4. �����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�����������ToolStripMenuItem_Click);
			// 
			// ������������������������ToolStripMenuItem
			// 
			this->������������������������ToolStripMenuItem->Name = L"������������������������ToolStripMenuItem";
			this->������������������������ToolStripMenuItem->Size = System::Drawing::Size(371, 28);
			this->������������������������ToolStripMenuItem->Text = L"5. ��������� ���������������";
			this->������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::������������������������ToolStripMenuItem_Click);
			// 
			// ��������������������������ToolStripMenuItem
			// 
			this->��������������������������ToolStripMenuItem->Name = L"��������������������������ToolStripMenuItem";
			this->��������������������������ToolStripMenuItem->Size = System::Drawing::Size(371, 28);
			this->��������������������������ToolStripMenuItem->Text = L"6. ��������� ����������� ������";
			this->��������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(371, 28);
			this->�������ToolStripMenuItem->Text = L"7. �������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(371, 28);
			this->��������������ToolStripMenuItem->Text = L"8. �������� ������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem14,
					this->toolStripMenuItem15, this->�������������������������ToolStripMenuItem, this->������������������������ToolStripMenuItem,
					this->���������������������ToolStripMenuItem
			});
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(426, 28);
			this->toolStripMenuItem4->Text = L"3. ��������� � �������������� �������";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(373, 28);
			this->toolStripMenuItem14->Text = L"1. ������� ��������� � ������";
			this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem14_Click);
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(373, 28);
			this->toolStripMenuItem15->Text = L"2. �������� �������� ����";
			this->toolStripMenuItem15->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem15_Click);
			// 
			// �������������������������ToolStripMenuItem
			// 
			this->�������������������������ToolStripMenuItem->Name = L"�������������������������ToolStripMenuItem";
			this->�������������������������ToolStripMenuItem->Size = System::Drawing::Size(373, 28);
			this->�������������������������ToolStripMenuItem->Text = L"3. ������� �������� � ���������";
			this->�������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������������������������ToolStripMenuItem_Click);
			// 
			// ������������������������ToolStripMenuItem
			// 
			this->������������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->������������������������ToolStripMenuItem->Name = L"������������������������ToolStripMenuItem";
			this->������������������������ToolStripMenuItem->Size = System::Drawing::Size(373, 28);
			this->������������������������ToolStripMenuItem->Text = L"4. ������� ��������� � �������";
			this->������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::������������������������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(280, 28);
			this->����������������ToolStripMenuItem->Text = L"1. ������� ���������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::����������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(280, 28);
			this->��������������ToolStripMenuItem->Text = L"2. ������� �������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������ToolStripMenuItem_Click);
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(373, 28);
			this->���������������������ToolStripMenuItem->Text = L"5. ��������� ������� �����";
			this->���������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::���������������������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem16,
					this->toolStripMenuItem17, this->�����������������������ToolStripMenuItem
			});
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(426, 28);
			this->toolStripMenuItem5->Text = L"4. �������� � �����";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem,
					this->����������������ToolStripMenuItem
			});
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(453, 28);
			this->toolStripMenuItem16->Text = L"1. ����������� �������";
			this->toolStripMenuItem16->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem16_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->�������������ToolStripMenuItem->Text = L"1. ������ �������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->����������������ToolStripMenuItem->Text = L"2. ��������� �������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::����������������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(453, 28);
			this->toolStripMenuItem17->Text = L"2. ������� ��������� � ��������� ��������";
			this->toolStripMenuItem17->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem17_Click);
			// 
			// �����������������������ToolStripMenuItem
			// 
			this->�����������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������LOOPToolStripMenuItem,
					this->�������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem
			});
			this->�����������������������ToolStripMenuItem->Name = L"�����������������������ToolStripMenuItem";
			this->�����������������������ToolStripMenuItem->Size = System::Drawing::Size(453, 28);
			this->�����������������������ToolStripMenuItem->Text = L"3. ������� ���������� ������";
			this->�����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�����������������������ToolStripMenuItem_Click);
			// 
			// �������LOOPToolStripMenuItem
			// 
			this->�������LOOPToolStripMenuItem->Name = L"�������LOOPToolStripMenuItem";
			this->�������LOOPToolStripMenuItem->Size = System::Drawing::Size(459, 28);
			this->�������LOOPToolStripMenuItem->Text = L"1. ������� LOOP";
			this->�������LOOPToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������LOOPToolStripMenuItem_Click);
			// 
			// �������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem
			// 
			this->�������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem->Name = L"�������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem";
			this->�������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem->Size = System::Drawing::Size(459, 28);
			this->�������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem->Text = L"2. ������� LOOPE/LOOPZ � LOOPNE/LOOPNZ";
			this->�������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->������������������ToolStripMenuItem,
					this->�������LEAToolStripMenuItem, this->�����������������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(426, 28);
			this->�������ToolStripMenuItem->Text = L"5. �������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������ToolStripMenuItem_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(293, 28);
			this->������������������ToolStripMenuItem->Text = L"1. ����������� �������";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::������������������ToolStripMenuItem_Click);
			// 
			// �������LEAToolStripMenuItem
			// 
			this->�������LEAToolStripMenuItem->Name = L"�������LEAToolStripMenuItem";
			this->�������LEAToolStripMenuItem->Size = System::Drawing::Size(293, 28);
			this->�������LEAToolStripMenuItem->Text = L"2. ������� LEA";
			this->�������LEAToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������LEAToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(293, 28);
			this->�����������������ToolStripMenuItem->Text = L"3. ��������� ��������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�����������������ToolStripMenuItem_Click);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�����������������ToolStripMenuItem,
					this->�������������ToolStripMenuItem, this->��������������������������������������������ToolStripMenuItem
			});
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(426, 28);
			this->�������������������ToolStripMenuItem->Text = L"6. ����������� ��������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������������������ToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(464, 28);
			this->�����������������ToolStripMenuItem->Text = L"1. ���������� �������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�����������������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����������������ToolStripMenuItem,
					this->��������������������ToolStripMenuItem, this->�����������������ToolStripMenuItem, this->�����������������ToolStripMenuItem
			});
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(464, 28);
			this->�������������ToolStripMenuItem->Text = L"2. ������� ������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->����������������ToolStripMenuItem->Text = L"1. ���������� ������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::����������������ToolStripMenuItem_Click);
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->��������������������ToolStripMenuItem->Text = L"2. �������������� ������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������������ToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->�����������������ToolStripMenuItem->Text = L"3. ����������� ������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�����������������ToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->�����������������ToolStripMenuItem->Text = L"4. ����������� ������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�����������������ToolStripMenuItem_Click);
			// 
			// ��������������������������������������������ToolStripMenuItem
			// 
			this->��������������������������������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->���������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�������������������������ToolStripMenuItem
			});
			this->��������������������������������������������ToolStripMenuItem->Name = L"��������������������������������������������ToolStripMenuItem";
			this->��������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(464, 28);
			this->��������������������������������������������ToolStripMenuItem->Text = L"3. \"*\" � \"/\" � ������� ����������� ��������";
			this->��������������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������������������������������������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(354, 28);
			this->���������ToolStripMenuItem->Text = L"1. ���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::���������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(354, 28);
			this->�������ToolStripMenuItem->Text = L"2. �������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������ToolStripMenuItem_Click);
			// 
			// �������������������������ToolStripMenuItem
			// 
			this->�������������������������ToolStripMenuItem->Name = L"�������������������������ToolStripMenuItem";
			this->�������������������������ToolStripMenuItem->Size = System::Drawing::Size(354, 28);
			this->�������������������������ToolStripMenuItem->Text = L"3. ��������� ������� �� �������";
			this->�������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������������������������ToolStripMenuItem_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->�����������������������������������ToolStripMenuItem,
					this->���������������������ToolStripMenuItem, this->������������������ToolStripMenuItem, this->���������������������������������ToolStripMenuItem,
					this->���������������������������ToolStripMenuItem, this->���������������������������ToolStripMenuItem, this->�����������������������������ToolStripMenuItem,
					this->�����������������������ToolStripMenuItem, this->��������������������ToolStripMenuItem
			});
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(426, 28);
			this->������������������ToolStripMenuItem->Text = L"7. ���������. ���������";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::������������������ToolStripMenuItem_Click);
			// 
			// �����������������������������������ToolStripMenuItem
			// 
			this->�����������������������������������ToolStripMenuItem->Name = L"�����������������������������������ToolStripMenuItem";
			this->�����������������������������������ToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->�����������������������������������ToolStripMenuItem->Text = L"1. ��������� ��������� �� ����� ����������";
			this->�����������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�����������������������������������ToolStripMenuItem_Click);
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->���������������������ToolStripMenuItem->Text = L"2. ������� ������ �� ������";
			this->���������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::���������������������ToolStripMenuItem_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->������������������ToolStripMenuItem->Text = L"3. ��������� ���������";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::������������������ToolStripMenuItem_Click);
			// 
			// ���������������������������������ToolStripMenuItem
			// 
			this->���������������������������������ToolStripMenuItem->Name = L"���������������������������������ToolStripMenuItem";
			this->���������������������������������ToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->���������������������������������ToolStripMenuItem->Text = L"4. ����� ��������� � ������� �� ���������";
			this->���������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::���������������������������������ToolStripMenuItem_Click);
			// 
			// ���������������������������ToolStripMenuItem
			// 
			this->���������������������������ToolStripMenuItem->Name = L"���������������������������ToolStripMenuItem";
			this->���������������������������ToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->���������������������������ToolStripMenuItem->Text = L"5. �������� ���������� ���������";
			this->���������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::���������������������������ToolStripMenuItem_Click);
			// 
			// ���������������������������ToolStripMenuItem
			// 
			this->���������������������������ToolStripMenuItem->Name = L"���������������������������ToolStripMenuItem";
			this->���������������������������ToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->���������������������������ToolStripMenuItem->Text = L"6. �������� ���������� ���������";
			this->���������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::���������������������������ToolStripMenuItem_Click);
			// 
			// �����������������������������ToolStripMenuItem
			// 
			this->�����������������������������ToolStripMenuItem->Name = L"�����������������������������ToolStripMenuItem";
			this->�����������������������������ToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->�����������������������������ToolStripMenuItem->Text = L"7. ���������� ��������� � ���������";
			this->�����������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�����������������������������ToolStripMenuItem_Click);
			// 
			// �����������������������ToolStripMenuItem
			// 
			this->�����������������������ToolStripMenuItem->Name = L"�����������������������ToolStripMenuItem";
			this->�����������������������ToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->�����������������������ToolStripMenuItem->Text = L"8. ��������� ������ ��������";
			this->�����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�����������������������ToolStripMenuItem_Click);
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->��������������������ToolStripMenuItem->Text = L"9. ����������� ���������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������������ToolStripMenuItem_Click);
			// 
			// ����������������������������������������������ToolStripMenuItem
			// 
			this->����������������������������������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������������������������ToolStripMenuItem,
					this->�������������������������ToolStripMenuItem, this->�������������������������ToolStripMenuItem
			});
			this->����������������������������������������������ToolStripMenuItem->Name = L"����������������������������������������������ToolStripMenuItem";
			this->����������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(426, 28);
			this->����������������������������������������������ToolStripMenuItem->Text = L"8. ����������� ��������";
			this->����������������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::����������������������������������������������ToolStripMenuItem_Click);
			// 
			// ��������������������������ToolStripMenuItem
			// 
			this->��������������������������ToolStripMenuItem->Name = L"��������������������������ToolStripMenuItem";
			this->��������������������������ToolStripMenuItem->Size = System::Drawing::Size(363, 28);
			this->��������������������������ToolStripMenuItem->Text = L"1. ��������������� �����������";
			this->��������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������������������ToolStripMenuItem_Click);
			// 
			// �������������������������ToolStripMenuItem
			// 
			this->�������������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->��������������������������ToolStripMenuItem,
					this->���������������������������������ToolStripMenuItem, this->��������������������������ToolStripMenuItem, this->��������������������ToolStripMenuItem
			});
			this->�������������������������ToolStripMenuItem->Name = L"�������������������������ToolStripMenuItem";
			this->�������������������������ToolStripMenuItem->Size = System::Drawing::Size(363, 28);
			this->�������������������������ToolStripMenuItem->Text = L"2. ����������� �������� ������";
			this->�������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������������������������ToolStripMenuItem_Click);
			// 
			// ��������������������������ToolStripMenuItem
			// 
			this->��������������������������ToolStripMenuItem->Name = L"��������������������������ToolStripMenuItem";
			this->��������������������������ToolStripMenuItem->Size = System::Drawing::Size(446, 28);
			this->��������������������������ToolStripMenuItem->Text = L"1. ���������� �������� ��� �����";
			this->��������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������������������ToolStripMenuItem_Click);
			// 
			// ���������������������������������ToolStripMenuItem
			// 
			this->���������������������������������ToolStripMenuItem->Name = L"���������������������������������ToolStripMenuItem";
			this->���������������������������������ToolStripMenuItem->Size = System::Drawing::Size(446, 28);
			this->���������������������������������ToolStripMenuItem->Text = L"2. ������� �������� ������� � ����� �����";
			this->���������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::���������������������������������ToolStripMenuItem_Click);
			// 
			// ��������������������������ToolStripMenuItem
			// 
			this->��������������������������ToolStripMenuItem->Name = L"��������������������������ToolStripMenuItem";
			this->��������������������������ToolStripMenuItem->Size = System::Drawing::Size(446, 28);
			this->��������������������������ToolStripMenuItem->Text = L"3. ���������� ����� ����� ������";
			this->��������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������������������ToolStripMenuItem_Click);
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(446, 28);
			this->��������������������ToolStripMenuItem->Text = L"4. �������������� ������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������������ToolStripMenuItem_Click);
			// 
			// �������������������������ToolStripMenuItem
			// 
			this->�������������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����������������ToolStripMenuItem,
					this->��������������������LEAToolStripMenuItem, this->������������ToolStripMenuItem, this->������������ToolStripMenuItem
			});
			this->�������������������������ToolStripMenuItem->Name = L"�������������������������ToolStripMenuItem";
			this->�������������������������ToolStripMenuItem->Size = System::Drawing::Size(363, 28);
			this->�������������������������ToolStripMenuItem->Text = L"3. �������������� �����������";
			this->�������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::�������������������������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(344, 28);
			this->����������������ToolStripMenuItem->Text = L"1. �������� ��������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::����������������ToolStripMenuItem_Click);
			// 
			// ��������������������LEAToolStripMenuItem
			// 
			this->��������������������LEAToolStripMenuItem->Name = L"��������������������LEAToolStripMenuItem";
			this->��������������������LEAToolStripMenuItem->Size = System::Drawing::Size(344, 28);
			this->��������������������LEAToolStripMenuItem->Text = L"2. ������������� ������� LEA";
			this->��������������������LEAToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::��������������������LEAToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(344, 28);
			this->������������ToolStripMenuItem->Text = L"3. ������ ������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::������������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(344, 28);
			this->������������ToolStripMenuItem->Text = L"4. ������������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(135, 27);
			this->����������ToolStripMenuItem->Text = L"����� � ����";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::����������ToolStripMenuItem_Click);
			// 
			// ����������������������ToolStripMenuItem
			// 
			this->����������������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->����������������������ToolStripMenuItem->Name = L"����������������������ToolStripMenuItem";
			this->����������������������ToolStripMenuItem->Size = System::Drawing::Size(236, 27);
			this->����������������������ToolStripMenuItem->Text = L"������� � ������ ��������";
			this->����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::����������������������ToolStripMenuItem_Click);
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
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(15, 33);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(1335, 820);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Main_Literature_Form::richTextBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1376, 879);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// bookmarkImage
			// 
			this->bookmarkImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bookmarkImage.Image")));
			this->bookmarkImage->Location = System::Drawing::Point(1394, 46);
			this->bookmarkImage->Name = L"bookmarkImage";
			this->bookmarkImage->Size = System::Drawing::Size(65, 59);
			this->bookmarkImage->TabIndex = 6;
			this->bookmarkImage->TabStop = false;
			this->bookmarkImage->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main_Literature_Form::bookmarkImage_MouseDown);
			// 
			// Main_Literature_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1482, 953);
			this->Controls->Add(this->bookmarkImage);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1500, 1000);
			this->MinimumSize = System::Drawing::Size(1500, 1000);
			this->Name = L"Main_Literature_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������� ������������� ��������";
			this->Load += gcnew System::EventHandler(this, &Main_Literature_Form::Main_Literature_Form_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bookmarkImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void bookmarkImage_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void Main_Literature_Form_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e); //1
	private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e); //2
	private: System::Void item3_Click(System::Object^ sender, System::EventArgs^ e);	//3
	private: System::Void item4_Click(System::Object^ sender, System::EventArgs^ e);	//4
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //5
	private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);	//6
	private: System::Void �������������������IOPLToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);	//7
	private: System::Void ������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);	//8
	private: System::Void ������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);	//9//1//
	private: System::Void toolStripMenuItem11_Click(System::Object^ sender, System::EventArgs^ e); //10/////////////
	private: System::Void toolStripMenuItem12_Click(System::Object^ sender, System::EventArgs^ e); //11
	private: System::Void toolStripMenuItem13_Click(System::Object^ sender, System::EventArgs^ e); //12
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //13
	private: System::Void ������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //14
	private: System::Void ��������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //15
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //16
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //17//2//
	private: System::Void toolStripMenuItem14_Click(System::Object^ sender, System::EventArgs^ e); //18
	private: System::Void toolStripMenuItem15_Click(System::Object^ sender, System::EventArgs^ e); //19
	private: System::Void �������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //20
	private: System::Void ����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //21
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //22
	private: System::Void ���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //23
	private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e); //24
	private: System::Void toolStripMenuItem16_Click(System::Object^ sender, System::EventArgs^ e); //25
	private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //26
	private: System::Void ����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //27
	private: System::Void toolStripMenuItem17_Click(System::Object^ sender, System::EventArgs^ e); //28
	private: System::Void �������LOOPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //29
	private: System::Void �������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //30
	private: System::Void ������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //31
	private: System::Void �������LEAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //32
	private: System::Void �����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //33
	private: System::Void �������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //34
	private: System::Void �����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //35
	private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //36
	private: System::Void ����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //37
	private: System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //38
	private: System::Void �����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //39
	private: System::Void �����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //40
	private: System::Void ��������������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //41
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //42
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //43
	private: System::Void �������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //44
	private: System::Void �����������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //45
	private: System::Void ���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //46
	private: System::Void ������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //47
	private: System::Void ���������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //48
	private: System::Void ���������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //49
	private: System::Void ���������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //50
	private: System::Void �����������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //51
	private: System::Void �����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //52
	private: System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //53
	private: System::Void ����������������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //54
	private: System::Void ��������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //55
	private: System::Void �������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //56
	private: System::Void ��������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //57
	private: System::Void ���������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //58
	private: System::Void ��������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //59
	private: System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //60
	private: System::Void �������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //61
	private: System::Void ����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //62
	private: System::Void ��������������������LEAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //63
	private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //64
	private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //65
	private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
