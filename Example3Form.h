#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Example3Form
	/// </summary>
	public ref class Example3Form : public System::Windows::Forms::Form
	{
	public:
		Example3Form(void)
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
		~Example3Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ назадToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ кПримерамToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вМенюToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Example3Form::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->назадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->кПримерамToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вМенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1215, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 96);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Запуск программы";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Example3Form::button1_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 66);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1152, 740);
			this->panel1->TabIndex = 4;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->назадToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1482, 31);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// назадToolStripMenuItem
			// 
			this->назадToolStripMenuItem->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->назадToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->кПримерамToolStripMenuItem,
					this->вМенюToolStripMenuItem
			});
			this->назадToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->назадToolStripMenuItem->Name = L"назадToolStripMenuItem";
			this->назадToolStripMenuItem->Size = System::Drawing::Size(71, 27);
			this->назадToolStripMenuItem->Text = L"Назад";
			// 
			// кПримерамToolStripMenuItem
			// 
			this->кПримерамToolStripMenuItem->Name = L"кПримерамToolStripMenuItem";
			this->кПримерамToolStripMenuItem->Size = System::Drawing::Size(191, 28);
			this->кПримерамToolStripMenuItem->Text = L"К примерам";
			this->кПримерамToolStripMenuItem->Click += gcnew System::EventHandler(this, &Example3Form::кПримерамToolStripMenuItem_Click);
			// 
			// вМенюToolStripMenuItem
			// 
			this->вМенюToolStripMenuItem->Name = L"вМенюToolStripMenuItem";
			this->вМенюToolStripMenuItem->Size = System::Drawing::Size(191, 28);
			this->вМенюToolStripMenuItem->Text = L"В меню";
			this->вМенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &Example3Form::вМенюToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1438, 8650);
			this->label1->TabIndex = 2;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1170, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(278, 95);
			this->label2->TabIndex = 6;
			this->label2->Text = L"                   !!!Временный баг!!!\r\nПриложение может работать некоректно!\r\nЕс"
				L"ли анимация фигур отсутствует, то\r\nстоит перезапускать приложение \r\nдо тех пор, "
				L"пока оно не заработает.\r\n";
			// 
			// Example3Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1482, 838);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1500, 885);
			this->MinimumSize = System::Drawing::Size(1500, 885);
			this->Name = L"Example3Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Анимация + перемещение фигуры с помощью клавиатуры";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void кПримерамToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void вМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
