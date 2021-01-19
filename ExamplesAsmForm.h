#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ExamplesAsmForm
	/// </summary>
	public ref class ExamplesAsmForm : public System::Windows::Forms::Form
	{
	public:
		ExamplesAsmForm(void)
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
		~ExamplesAsmForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonExample1;
	protected:
	private: System::Windows::Forms::Button^ buttonExample2;
	private: System::Windows::Forms::Button^ buttonExample3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ назадВМенюToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ExamplesAsmForm::typeid));
			this->buttonExample1 = (gcnew System::Windows::Forms::Button());
			this->buttonExample2 = (gcnew System::Windows::Forms::Button());
			this->buttonExample3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->назадВМенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonExample1
			// 
			this->buttonExample1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExample1->Location = System::Drawing::Point(155, 142);
			this->buttonExample1->Name = L"buttonExample1";
			this->buttonExample1->Size = System::Drawing::Size(265, 80);
			this->buttonExample1->TabIndex = 0;
			this->buttonExample1->Text = L"Пример №1\r\nСтатичные фигуры";
			this->buttonExample1->UseVisualStyleBackColor = true;
			this->buttonExample1->Click += gcnew System::EventHandler(this, &ExamplesAsmForm::buttonExample1_Click);
			// 
			// buttonExample2
			// 
			this->buttonExample2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->buttonExample2->Location = System::Drawing::Point(155, 262);
			this->buttonExample2->Name = L"buttonExample2";
			this->buttonExample2->Size = System::Drawing::Size(265, 80);
			this->buttonExample2->TabIndex = 1;
			this->buttonExample2->Text = L"Пример №2\r\nАнимация фигур\r\n";
			this->buttonExample2->UseVisualStyleBackColor = true;
			this->buttonExample2->Click += gcnew System::EventHandler(this, &ExamplesAsmForm::buttonExample2_Click);
			// 
			// buttonExample3
			// 
			this->buttonExample3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->buttonExample3->Location = System::Drawing::Point(155, 382);
			this->buttonExample3->Name = L"buttonExample3";
			this->buttonExample3->Size = System::Drawing::Size(265, 105);
			this->buttonExample3->TabIndex = 2;
			this->buttonExample3->Text = L"Пример №3\r\nАнимация + перемещение фигуры с помощью клавиатуры";
			this->buttonExample3->UseVisualStyleBackColor = true;
			this->buttonExample3->Click += gcnew System::EventHandler(this, &ExamplesAsmForm::buttonExample3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->назадВМенюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(582, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// назадВМенюToolStripMenuItem
			// 
			this->назадВМенюToolStripMenuItem->Name = L"назадВМенюToolStripMenuItem";
			this->назадВМенюToolStripMenuItem->Size = System::Drawing::Size(121, 24);
			this->назадВМенюToolStripMenuItem->Text = L"Назад в меню";
			this->назадВМенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &ExamplesAsmForm::назадВМенюToolStripMenuItem_Click);
			// 
			// ExamplesAsmForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(582, 653);
			this->Controls->Add(this->buttonExample3);
			this->Controls->Add(this->buttonExample2);
			this->Controls->Add(this->buttonExample1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(600, 700);
			this->MinimumSize = System::Drawing::Size(600, 700);
			this->Name = L"ExamplesAsmForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Примеры программ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void назадВМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonExample1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonExample2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonExample3_Click(System::Object^ sender, System::EventArgs^ e);
};
}
