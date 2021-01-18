#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Soft_Instructions_Form
	/// </summary>
	public ref class Soft_Instructions_Form : public System::Windows::Forms::Form
	{
	public:
		Soft_Instructions_Form(void)
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
		~Soft_Instructions_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonSoftInt1;
	private: System::Windows::Forms::Button^ buttonSoftInt2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Soft_Instructions_Form::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonSoftInt1 = (gcnew System::Windows::Forms::Button());
			this->buttonSoftInt2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(402, 31);
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
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Soft_Instructions_Form::����������ToolStripMenuItem_Click);
			// 
			// buttonSoftInt1
			// 
			this->buttonSoftInt1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonSoftInt1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSoftInt1->Location = System::Drawing::Point(80, 159);
			this->buttonSoftInt1->Name = L"buttonSoftInt1";
			this->buttonSoftInt1->Size = System::Drawing::Size(241, 91);
			this->buttonSoftInt1->TabIndex = 1;
			this->buttonSoftInt1->Text = L"��������� �������";
			this->buttonSoftInt1->UseVisualStyleBackColor = false;
			this->buttonSoftInt1->Click += gcnew System::EventHandler(this, &Soft_Instructions_Form::buttonSoftInt1_Click);
			// 
			// buttonSoftInt2
			// 
			this->buttonSoftInt2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonSoftInt2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSoftInt2->Location = System::Drawing::Point(80, 279);
			this->buttonSoftInt2->Name = L"buttonSoftInt2";
			this->buttonSoftInt2->Size = System::Drawing::Size(241, 101);
			this->buttonSoftInt2->TabIndex = 2;
			this->buttonSoftInt2->Text = L"����������� �������";
			this->buttonSoftInt2->UseVisualStyleBackColor = false;
			this->buttonSoftInt2->Click += gcnew System::EventHandler(this, &Soft_Instructions_Form::buttonSoftInt2_Click);
			// 
			// Soft_Instructions_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(402, 553);
			this->Controls->Add(this->buttonSoftInt2);
			this->Controls->Add(this->buttonSoftInt1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(420, 600);
			this->MinimumSize = System::Drawing::Size(420, 600);
			this->Name = L"Soft_Instructions_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSoftInt1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSoftInt2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
