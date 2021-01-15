#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для OutTheoryBookmark
	/// </summary>
	public ref class OutTheoryBookmark : public System::Windows::Forms::Form
	{
	public:
		OutTheoryBookmark(void)
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
		~OutTheoryBookmark()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ назадКСпискуЗакладокToolStripMenuItem;

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
			this->назадКСпискуЗакладокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->назадКСпискуЗакладокToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(773, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// назадКСпискуЗакладокToolStripMenuItem
			// 
			this->назадКСпискуЗакладокToolStripMenuItem->Name = L"назадКСпискуЗакладокToolStripMenuItem";
			this->назадКСпискуЗакладокToolStripMenuItem->Size = System::Drawing::Size(192, 24);
			this->назадКСпискуЗакладокToolStripMenuItem->Text = L"Назад к списку закладок";
			this->назадКСпискуЗакладокToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutTheoryBookmark::назадКСпискуЗакладокToolStripMenuItem_Click);
			// 
			// OutTheoryBookmark
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 515);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"OutTheoryBookmark";
			this->Text = L"OutTheoryBookmark";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void назадКСпискуЗакладокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
