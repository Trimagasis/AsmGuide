#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Example1Form
	/// </summary>
	public ref class Example1Form : public System::Windows::Forms::Form
	{
	public:
		Example1Form(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~Example1Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ íàçàäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êÏğèìåğàìToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âÌåíşToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;

	protected:


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Example1Form::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->íàçàäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êÏğèìåğàìToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âÌåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->íàçàäToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1482, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// íàçàäToolStripMenuItem
			// 
			this->íàçàäToolStripMenuItem->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->íàçàäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->êÏğèìåğàìToolStripMenuItem,
					this->âÌåíşToolStripMenuItem
			});
			this->íàçàäToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->íàçàäToolStripMenuItem->Name = L"íàçàäToolStripMenuItem";
			this->íàçàäToolStripMenuItem->Size = System::Drawing::Size(71, 27);
			this->íàçàäToolStripMenuItem->Text = L"Íàçàä";
			// 
			// êÏğèìåğàìToolStripMenuItem
			// 
			this->êÏğèìåğàìToolStripMenuItem->Name = L"êÏğèìåğàìToolStripMenuItem";
			this->êÏğèìåğàìToolStripMenuItem->Size = System::Drawing::Size(224, 28);
			this->êÏğèìåğàìToolStripMenuItem->Text = L"Ê ïğèìåğàì";
			this->êÏğèìåğàìToolStripMenuItem->Click += gcnew System::EventHandler(this, &Example1Form::êÏğèìåğàìToolStripMenuItem_Click);
			// 
			// âÌåíşToolStripMenuItem
			// 
			this->âÌåíşToolStripMenuItem->Name = L"âÌåíşToolStripMenuItem";
			this->âÌåíşToolStripMenuItem->Size = System::Drawing::Size(224, 28);
			this->âÌåíşToolStripMenuItem->Text = L"Â ìåíş";
			this->âÌåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &Example1Form::âÌåíşToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(34, 85);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1082, 740);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1210, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 96);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Çàïóñê ïğîãğàììû";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Example1Form::button1_Click);
			// 
			// Example1Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1482, 953);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Example1Form";
			this->Text = L"Example1Form";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void êÏğèìåğàìToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âÌåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
