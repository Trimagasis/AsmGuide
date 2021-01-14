#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Button^ Soft;
	private: System::Windows::Forms::Button^ MainLit;
	private: System::Windows::Forms::Button^ Bookmarks;
	private: System::Windows::Forms::Button^ AddMat;






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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Soft = (gcnew System::Windows::Forms::Button());
			this->MainLit = (gcnew System::Windows::Forms::Button());
			this->Bookmarks = (gcnew System::Windows::Forms::Button());
			this->AddMat = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->выходToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(382, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::выходToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::оПрограммеToolStripMenuItem_Click);
			// 
			// Soft
			// 
			this->Soft->Location = System::Drawing::Point(89, 91);
			this->Soft->Name = L"Soft";
			this->Soft->Size = System::Drawing::Size(183, 72);
			this->Soft->TabIndex = 1;
			this->Soft->Text = L"Туториалы";
			this->Soft->UseVisualStyleBackColor = true;
			this->Soft->Click += gcnew System::EventHandler(this, &MenuForm::Soft_Click);
			// 
			// MainLit
			// 
			this->MainLit->Location = System::Drawing::Point(89, 187);
			this->MainLit->Name = L"MainLit";
			this->MainLit->Size = System::Drawing::Size(183, 74);
			this->MainLit->TabIndex = 2;
			this->MainLit->Text = L"Основной теоретический материал";
			this->MainLit->UseVisualStyleBackColor = true;
			this->MainLit->Click += gcnew System::EventHandler(this, &MenuForm::MainLit_Click);
			// 
			// Bookmarks
			// 
			this->Bookmarks->Location = System::Drawing::Point(89, 282);
			this->Bookmarks->Name = L"Bookmarks";
			this->Bookmarks->Size = System::Drawing::Size(183, 80);
			this->Bookmarks->TabIndex = 3;
			this->Bookmarks->Text = L"Список закладок";
			this->Bookmarks->UseVisualStyleBackColor = true;
			this->Bookmarks->Click += gcnew System::EventHandler(this, &MenuForm::Bookmarks_Click);
			// 
			// AddMat
			// 
			this->AddMat->Location = System::Drawing::Point(89, 386);
			this->AddMat->Name = L"AddMat";
			this->AddMat->Size = System::Drawing::Size(183, 73);
			this->AddMat->TabIndex = 4;
			this->AddMat->Text = L"Доп. справочные материалы";
			this->AddMat->UseVisualStyleBackColor = true;
			this->AddMat->Click += gcnew System::EventHandler(this, &MenuForm::AddMat_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 553);
			this->Controls->Add(this->AddMat);
			this->Controls->Add(this->Bookmarks);
			this->Controls->Add(this->MainLit);
			this->Controls->Add(this->Soft);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(400, 600);
			this->MinimumSize = System::Drawing::Size(400, 600);
			this->Name = L"MenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справочник v.0.0.7";
			this->Load += gcnew System::EventHandler(this, &MenuForm::MenuForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Soft_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MainLit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Bookmarks_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddMat_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MenuForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
