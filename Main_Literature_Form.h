#pragma once

namespace ProjectSprv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main_Literature_Form
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
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ назадВМенюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьЖурналСТеориейToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ перейтиКСпискуЗакладокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ флагиСостоянияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ управляющийФлагToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ системныеФлагиИПолеIOPLToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сегментныеРегистрыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ использованиеСтекаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ комментарииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ директиваЭквивалентностиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ директивыОпределенияДанныхToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ операндыКомандToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командыСложенияИВычитанияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командыУмноженияИДеленияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командыУмноженияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командыДеленияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ изменениеРазмераЧислаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ прямойПереходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ косвенныйПереходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командыУправленияЦикломToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командаLOOPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ массивыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ модификацияАдресовToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командаLEAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обработкаМассивовToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ поразрядныеОперацииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ логическиеКомандыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командыСдвигаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ логическиеСдвигиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ арифметическиеСдвигиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ циклическиеСдвигиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ расширенныеСдвигиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ умножениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ делениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ получениеОстаткаОтДеленияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ программаПроцедурыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ структураПрограммыНаЯзыкеАссемблераToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ командыРаботыСоСтекомToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ синтаксисПроцедурыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ передачаПараметровПроцедурыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ передачаРезультатаПроцедурыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранениеРегистровВПроцедуреToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ локальныеДанныеПроцедурToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рекурсивныеПроцедурыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ высокоуровневаяОптимизацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оптимизацияСреднегоУровняToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вычислениеКонстантВнеЦиклаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ переносПроверкиУсловияВКонецЦиклаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выполнениеЦиклаЗадомНаперёдToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ разворачиваниеЦикловToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ низкоуровневаяОптимизацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ основныеПринципыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ использованиеКомандыLEAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заменаКомандToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выравниваниеToolStripMenuItem;







	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_Literature_Form::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->открытьЖурналСТеориейToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->item3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->item4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->флагиСостоянияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->управляющийФлагToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->системныеФлагиИПолеIOPLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сегментныеРегистрыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->использованиеСтекаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->комментарииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->директиваЭквивалентностиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->директивыОпределенияДанныхToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->операндыКомандToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командыСложенияИВычитанияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командыУмноженияИДеленияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командыУмноженияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командыДеленияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменениеРазмераЧислаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->прямойПереходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->косвенныйПереходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командыУправленияЦикломToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командаLOOPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->массивыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->модификацияАдресовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командаLEAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обработкаМассивовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поразрядныеОперацииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->логическиеКомандыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командыСдвигаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->логическиеСдвигиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->арифметическиеСдвигиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->циклическиеСдвигиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->расширенныеСдвигиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->умножениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->делениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->получениеОстаткаОтДеленияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->программаПроцедурыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->структураПрограммыНаЯзыкеАссемблераToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->командыРаботыСоСтекомToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синтаксисПроцедурыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->передачаПараметровПроцедурыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->передачаРезультатаПроцедурыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранениеРегистровВПроцедуреToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->локальныеДанныеПроцедурToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рекурсивныеПроцедурыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->высокоуровневаяОптимизацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оптимизацияСреднегоУровняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вычислениеКонстантВнеЦиклаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->переносПроверкиУсловияВКонецЦиклаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выполнениеЦиклаЗадомНаперёдToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->разворачиваниеЦикловToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->низкоуровневаяОптимизацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->основныеПринципыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->использованиеКомандыLEAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заменаКомандToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выравниваниеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->назадВМенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->перейтиКСпискуЗакладокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->открытьЖурналСТеориейToolStripMenuItem,
					this->назадВМенюToolStripMenuItem, this->перейтиКСпискуЗакладокToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1482, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// открытьЖурналСТеориейToolStripMenuItem
			// 
			this->открытьЖурналСТеориейToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->массивыToolStripMenuItem, this->поразрядныеОперацииToolStripMenuItem,
					this->программаПроцедурыToolStripMenuItem, this->оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem
			});
			this->открытьЖурналСТеориейToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->открытьЖурналСТеориейToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"открытьЖурналСТеориейToolStripMenuItem.Image")));
			this->открытьЖурналСТеориейToolStripMenuItem->Name = L"открытьЖурналСТеориейToolStripMenuItem";
			this->открытьЖурналСТеориейToolStripMenuItem->Size = System::Drawing::Size(257, 27);
			this->открытьЖурналСТеориейToolStripMenuItem->Text = L"Открыть журнал с теорией";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem6,
					this->item3, this->item4, this->сегментныеРегистрыToolStripMenuItem, this->использованиеСтекаToolStripMenuItem
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(426, 28);
			this->toolStripMenuItem2->Text = L"1. Регистры";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(349, 28);
			this->toolStripMenuItem6->Text = L"1. Регистры общего назначения";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem6_Click);
			// 
			// item3
			// 
			this->item3->Name = L"item3";
			this->item3->Size = System::Drawing::Size(349, 28);
			this->item3->Text = L"2. Указатель команд";
			this->item3->Click += gcnew System::EventHandler(this, &Main_Literature_Form::item3_Click);
			// 
			// item4
			// 
			this->item4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->флагиСостоянияToolStripMenuItem,
					this->управляющийФлагToolStripMenuItem, this->системныеФлагиИПолеIOPLToolStripMenuItem
			});
			this->item4->Name = L"item4";
			this->item4->Size = System::Drawing::Size(349, 28);
			this->item4->Text = L"3. Регистр флагов";
			this->item4->Click += gcnew System::EventHandler(this, &Main_Literature_Form::item4_Click);
			// 
			// флагиСостоянияToolStripMenuItem
			// 
			this->флагиСостоянияToolStripMenuItem->Name = L"флагиСостоянияToolStripMenuItem";
			this->флагиСостоянияToolStripMenuItem->Size = System::Drawing::Size(351, 28);
			this->флагиСостоянияToolStripMenuItem->Text = L"1. Флаги состояния";
			this->флагиСостоянияToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::флагиСостоянияToolStripMenuItem_Click);
			// 
			// управляющийФлагToolStripMenuItem
			// 
			this->управляющийФлагToolStripMenuItem->Name = L"управляющийФлагToolStripMenuItem";
			this->управляющийФлагToolStripMenuItem->Size = System::Drawing::Size(351, 28);
			this->управляющийФлагToolStripMenuItem->Text = L"2. Управляющий флаг";
			this->управляющийФлагToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::управляющийФлагToolStripMenuItem_Click);
			// 
			// системныеФлагиИПолеIOPLToolStripMenuItem
			// 
			this->системныеФлагиИПолеIOPLToolStripMenuItem->Name = L"системныеФлагиИПолеIOPLToolStripMenuItem";
			this->системныеФлагиИПолеIOPLToolStripMenuItem->Size = System::Drawing::Size(351, 28);
			this->системныеФлагиИПолеIOPLToolStripMenuItem->Text = L"3. Системные флаги и поле IOPL";
			this->системныеФлагиИПолеIOPLToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::системныеФлагиИПолеIOPLToolStripMenuItem_Click);
			// 
			// сегментныеРегистрыToolStripMenuItem
			// 
			this->сегментныеРегистрыToolStripMenuItem->Name = L"сегментныеРегистрыToolStripMenuItem";
			this->сегментныеРегистрыToolStripMenuItem->Size = System::Drawing::Size(349, 28);
			this->сегментныеРегистрыToolStripMenuItem->Text = L"4. Сегментные регистры";
			this->сегментныеРегистрыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::сегментныеРегистрыToolStripMenuItem_Click);
			// 
			// использованиеСтекаToolStripMenuItem
			// 
			this->использованиеСтекаToolStripMenuItem->Name = L"использованиеСтекаToolStripMenuItem";
			this->использованиеСтекаToolStripMenuItem->Size = System::Drawing::Size(349, 28);
			this->использованиеСтекаToolStripMenuItem->Text = L"5. Использование стека";
			this->использованиеСтекаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::использованиеСтекаToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem11,
					this->toolStripMenuItem12, this->toolStripMenuItem13, this->комментарииToolStripMenuItem, this->директиваЭквивалентностиToolStripMenuItem,
					this->директивыОпределенияДанныхToolStripMenuItem, this->командыToolStripMenuItem, this->операндыКомандToolStripMenuItem
			});
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(426, 28);
			this->toolStripMenuItem3->Text = L"2. Основные понятия языка ассемблера";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(371, 28);
			this->toolStripMenuItem11->Text = L"1. Идентификаторы";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem11_Click);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(371, 28);
			this->toolStripMenuItem12->Text = L"2. Целые числа";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(371, 28);
			this->toolStripMenuItem13->Text = L"3. Символьные данные";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem13_Click);
			// 
			// комментарииToolStripMenuItem
			// 
			this->комментарииToolStripMenuItem->Name = L"комментарииToolStripMenuItem";
			this->комментарииToolStripMenuItem->Size = System::Drawing::Size(371, 28);
			this->комментарииToolStripMenuItem->Text = L"4. Комментарии";
			this->комментарииToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::комментарииToolStripMenuItem_Click);
			// 
			// директиваЭквивалентностиToolStripMenuItem
			// 
			this->директиваЭквивалентностиToolStripMenuItem->Name = L"директиваЭквивалентностиToolStripMenuItem";
			this->директиваЭквивалентностиToolStripMenuItem->Size = System::Drawing::Size(371, 28);
			this->директиваЭквивалентностиToolStripMenuItem->Text = L"5. Директива эквивалентности";
			this->директиваЭквивалентностиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::директиваЭквивалентностиToolStripMenuItem_Click);
			// 
			// директивыОпределенияДанныхToolStripMenuItem
			// 
			this->директивыОпределенияДанныхToolStripMenuItem->Name = L"директивыОпределенияДанныхToolStripMenuItem";
			this->директивыОпределенияДанныхToolStripMenuItem->Size = System::Drawing::Size(371, 28);
			this->директивыОпределенияДанныхToolStripMenuItem->Text = L"6. Директивы определения данных";
			this->директивыОпределенияДанныхToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::директивыОпределенияДанныхToolStripMenuItem_Click);
			// 
			// командыToolStripMenuItem
			// 
			this->командыToolStripMenuItem->Name = L"командыToolStripMenuItem";
			this->командыToolStripMenuItem->Size = System::Drawing::Size(371, 28);
			this->командыToolStripMenuItem->Text = L"7. Команды";
			this->командыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командыToolStripMenuItem_Click);
			// 
			// операндыКомандToolStripMenuItem
			// 
			this->операндыКомандToolStripMenuItem->Name = L"операндыКомандToolStripMenuItem";
			this->операндыКомандToolStripMenuItem->Size = System::Drawing::Size(371, 28);
			this->операндыКомандToolStripMenuItem->Text = L"8. Операнды команд";
			this->операндыКомандToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::операндыКомандToolStripMenuItem_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem14,
					this->toolStripMenuItem15, this->командыСложенияИВычитанияToolStripMenuItem, this->командыУмноженияИДеленияToolStripMenuItem,
					this->изменениеРазмераЧислаToolStripMenuItem
			});
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(426, 28);
			this->toolStripMenuItem4->Text = L"3. Пересылка и арифметические команды";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(373, 28);
			this->toolStripMenuItem14->Text = L"1. Команды пересылки и обмена";
			this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem14_Click);
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(373, 28);
			this->toolStripMenuItem15->Text = L"2. Оператор указания типа";
			this->toolStripMenuItem15->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem15_Click);
			// 
			// командыСложенияИВычитанияToolStripMenuItem
			// 
			this->командыСложенияИВычитанияToolStripMenuItem->Name = L"командыСложенияИВычитанияToolStripMenuItem";
			this->командыСложенияИВычитанияToolStripMenuItem->Size = System::Drawing::Size(373, 28);
			this->командыСложенияИВычитанияToolStripMenuItem->Text = L"3. Команды сложения и вычитания";
			this->командыСложенияИВычитанияToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командыСложенияИВычитанияToolStripMenuItem_Click);
			// 
			// командыУмноженияИДеленияToolStripMenuItem
			// 
			this->командыУмноженияИДеленияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->командыУмноженияToolStripMenuItem,
					this->командыДеленияToolStripMenuItem
			});
			this->командыУмноженияИДеленияToolStripMenuItem->Name = L"командыУмноженияИДеленияToolStripMenuItem";
			this->командыУмноженияИДеленияToolStripMenuItem->Size = System::Drawing::Size(373, 28);
			this->командыУмноженияИДеленияToolStripMenuItem->Text = L"4. Команды умножения и деления";
			this->командыУмноженияИДеленияToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командыУмноженияИДеленияToolStripMenuItem_Click);
			// 
			// командыУмноженияToolStripMenuItem
			// 
			this->командыУмноженияToolStripMenuItem->Name = L"командыУмноженияToolStripMenuItem";
			this->командыУмноженияToolStripMenuItem->Size = System::Drawing::Size(280, 28);
			this->командыУмноженияToolStripMenuItem->Text = L"1. Команды умножения";
			this->командыУмноженияToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командыУмноженияToolStripMenuItem_Click);
			// 
			// командыДеленияToolStripMenuItem
			// 
			this->командыДеленияToolStripMenuItem->Name = L"командыДеленияToolStripMenuItem";
			this->командыДеленияToolStripMenuItem->Size = System::Drawing::Size(280, 28);
			this->командыДеленияToolStripMenuItem->Text = L"2. Команды деления";
			this->командыДеленияToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командыДеленияToolStripMenuItem_Click);
			// 
			// изменениеРазмераЧислаToolStripMenuItem
			// 
			this->изменениеРазмераЧислаToolStripMenuItem->Name = L"изменениеРазмераЧислаToolStripMenuItem";
			this->изменениеРазмераЧислаToolStripMenuItem->Size = System::Drawing::Size(373, 28);
			this->изменениеРазмераЧислаToolStripMenuItem->Text = L"5. Изменение размера числа";
			this->изменениеРазмераЧислаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::изменениеРазмераЧислаToolStripMenuItem_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem16,
					this->toolStripMenuItem17, this->командыУправленияЦикломToolStripMenuItem
			});
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(426, 28);
			this->toolStripMenuItem5->Text = L"4. Переходы и циклы";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->прямойПереходToolStripMenuItem,
					this->косвенныйПереходToolStripMenuItem
			});
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(453, 28);
			this->toolStripMenuItem16->Text = L"1. Безусловный переход";
			this->toolStripMenuItem16->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem16_Click);
			// 
			// прямойПереходToolStripMenuItem
			// 
			this->прямойПереходToolStripMenuItem->Name = L"прямойПереходToolStripMenuItem";
			this->прямойПереходToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->прямойПереходToolStripMenuItem->Text = L"1. Прямой переход";
			this->прямойПереходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::прямойПереходToolStripMenuItem_Click);
			// 
			// косвенныйПереходToolStripMenuItem
			// 
			this->косвенныйПереходToolStripMenuItem->Name = L"косвенныйПереходToolStripMenuItem";
			this->косвенныйПереходToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->косвенныйПереходToolStripMenuItem->Text = L"2. Косвенный переход";
			this->косвенныйПереходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::косвенныйПереходToolStripMenuItem_Click);
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(453, 28);
			this->toolStripMenuItem17->Text = L"2. Команды сравнения и условного перехода";
			this->toolStripMenuItem17->Click += gcnew System::EventHandler(this, &Main_Literature_Form::toolStripMenuItem17_Click);
			// 
			// командыУправленияЦикломToolStripMenuItem
			// 
			this->командыУправленияЦикломToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->командаLOOPToolStripMenuItem,
					this->командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem
			});
			this->командыУправленияЦикломToolStripMenuItem->Name = L"командыУправленияЦикломToolStripMenuItem";
			this->командыУправленияЦикломToolStripMenuItem->Size = System::Drawing::Size(453, 28);
			this->командыУправленияЦикломToolStripMenuItem->Text = L"3. Команды управления циклом";
			this->командыУправленияЦикломToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командыУправленияЦикломToolStripMenuItem_Click);
			// 
			// командаLOOPToolStripMenuItem
			// 
			this->командаLOOPToolStripMenuItem->Name = L"командаLOOPToolStripMenuItem";
			this->командаLOOPToolStripMenuItem->Size = System::Drawing::Size(459, 28);
			this->командаLOOPToolStripMenuItem->Text = L"1. Команда LOOP";
			this->командаLOOPToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командаLOOPToolStripMenuItem_Click);
			// 
			// командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem
			// 
			this->командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem->Name = L"командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem";
			this->командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem->Size = System::Drawing::Size(459, 28);
			this->командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem->Text = L"2. Команды LOOPE/LOOPZ и LOOPNE/LOOPNZ";
			this->командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem_Click);
			// 
			// массивыToolStripMenuItem
			// 
			this->массивыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->модификацияАдресовToolStripMenuItem,
					this->командаLEAToolStripMenuItem, this->обработкаМассивовToolStripMenuItem
			});
			this->массивыToolStripMenuItem->Name = L"массивыToolStripMenuItem";
			this->массивыToolStripMenuItem->Size = System::Drawing::Size(426, 28);
			this->массивыToolStripMenuItem->Text = L"5. Массивы";
			this->массивыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::массивыToolStripMenuItem_Click);
			// 
			// модификацияАдресовToolStripMenuItem
			// 
			this->модификацияАдресовToolStripMenuItem->Name = L"модификацияАдресовToolStripMenuItem";
			this->модификацияАдресовToolStripMenuItem->Size = System::Drawing::Size(293, 28);
			this->модификацияАдресовToolStripMenuItem->Text = L"1. Модификация адресов";
			this->модификацияАдресовToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::модификацияАдресовToolStripMenuItem_Click);
			// 
			// командаLEAToolStripMenuItem
			// 
			this->командаLEAToolStripMenuItem->Name = L"командаLEAToolStripMenuItem";
			this->командаLEAToolStripMenuItem->Size = System::Drawing::Size(293, 28);
			this->командаLEAToolStripMenuItem->Text = L"2. Команда LEA";
			this->командаLEAToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командаLEAToolStripMenuItem_Click);
			// 
			// обработкаМассивовToolStripMenuItem
			// 
			this->обработкаМассивовToolStripMenuItem->Name = L"обработкаМассивовToolStripMenuItem";
			this->обработкаМассивовToolStripMenuItem->Size = System::Drawing::Size(293, 28);
			this->обработкаМассивовToolStripMenuItem->Text = L"3. Обработка массивов";
			this->обработкаМассивовToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::обработкаМассивовToolStripMenuItem_Click);
			// 
			// поразрядныеОперацииToolStripMenuItem
			// 
			this->поразрядныеОперацииToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->логическиеКомандыToolStripMenuItem,
					this->командыСдвигаToolStripMenuItem, this->умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem
			});
			this->поразрядныеОперацииToolStripMenuItem->Name = L"поразрядныеОперацииToolStripMenuItem";
			this->поразрядныеОперацииToolStripMenuItem->Size = System::Drawing::Size(426, 28);
			this->поразрядныеОперацииToolStripMenuItem->Text = L"6. Поразрядные операции";
			this->поразрядныеОперацииToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::поразрядныеОперацииToolStripMenuItem_Click);
			// 
			// логическиеКомандыToolStripMenuItem
			// 
			this->логическиеКомандыToolStripMenuItem->Name = L"логическиеКомандыToolStripMenuItem";
			this->логическиеКомандыToolStripMenuItem->Size = System::Drawing::Size(464, 28);
			this->логическиеКомандыToolStripMenuItem->Text = L"1. Логические команды";
			this->логическиеКомандыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::логическиеКомандыToolStripMenuItem_Click);
			// 
			// командыСдвигаToolStripMenuItem
			// 
			this->командыСдвигаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->логическиеСдвигиToolStripMenuItem,
					this->арифметическиеСдвигиToolStripMenuItem, this->циклическиеСдвигиToolStripMenuItem, this->расширенныеСдвигиToolStripMenuItem
			});
			this->командыСдвигаToolStripMenuItem->Name = L"командыСдвигаToolStripMenuItem";
			this->командыСдвигаToolStripMenuItem->Size = System::Drawing::Size(464, 28);
			this->командыСдвигаToolStripMenuItem->Text = L"2. Команды сдвига";
			this->командыСдвигаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командыСдвигаToolStripMenuItem_Click);
			// 
			// логическиеСдвигиToolStripMenuItem
			// 
			this->логическиеСдвигиToolStripMenuItem->Name = L"логическиеСдвигиToolStripMenuItem";
			this->логическиеСдвигиToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->логическиеСдвигиToolStripMenuItem->Text = L"1. Логические сдвиги";
			this->логическиеСдвигиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::логическиеСдвигиToolStripMenuItem_Click);
			// 
			// арифметическиеСдвигиToolStripMenuItem
			// 
			this->арифметическиеСдвигиToolStripMenuItem->Name = L"арифметическиеСдвигиToolStripMenuItem";
			this->арифметическиеСдвигиToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->арифметическиеСдвигиToolStripMenuItem->Text = L"2. Арифметические сдвиги";
			this->арифметическиеСдвигиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::арифметическиеСдвигиToolStripMenuItem_Click);
			// 
			// циклическиеСдвигиToolStripMenuItem
			// 
			this->циклическиеСдвигиToolStripMenuItem->Name = L"циклическиеСдвигиToolStripMenuItem";
			this->циклическиеСдвигиToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->циклическиеСдвигиToolStripMenuItem->Text = L"3. Циклические сдвиги";
			this->циклическиеСдвигиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::циклическиеСдвигиToolStripMenuItem_Click);
			// 
			// расширенныеСдвигиToolStripMenuItem
			// 
			this->расширенныеСдвигиToolStripMenuItem->Name = L"расширенныеСдвигиToolStripMenuItem";
			this->расширенныеСдвигиToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->расширенныеСдвигиToolStripMenuItem->Text = L"4. Расширенные сдвиги";
			this->расширенныеСдвигиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::расширенныеСдвигиToolStripMenuItem_Click);
			// 
			// умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem
			// 
			this->умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->умножениеToolStripMenuItem,
					this->делениеToolStripMenuItem, this->получениеОстаткаОтДеленияToolStripMenuItem
			});
			this->умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem->Name = L"умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem";
			this->умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem->Size = System::Drawing::Size(464, 28);
			this->умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem->Text = L"3. \"*\" и \"/\" с помощью поразрядных операций";
			this->умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem_Click);
			// 
			// умножениеToolStripMenuItem
			// 
			this->умножениеToolStripMenuItem->Name = L"умножениеToolStripMenuItem";
			this->умножениеToolStripMenuItem->Size = System::Drawing::Size(354, 28);
			this->умножениеToolStripMenuItem->Text = L"1. Умножение";
			this->умножениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::умножениеToolStripMenuItem_Click);
			// 
			// делениеToolStripMenuItem
			// 
			this->делениеToolStripMenuItem->Name = L"делениеToolStripMenuItem";
			this->делениеToolStripMenuItem->Size = System::Drawing::Size(354, 28);
			this->делениеToolStripMenuItem->Text = L"2. Деление";
			this->делениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::делениеToolStripMenuItem_Click);
			// 
			// получениеОстаткаОтДеленияToolStripMenuItem
			// 
			this->получениеОстаткаОтДеленияToolStripMenuItem->Name = L"получениеОстаткаОтДеленияToolStripMenuItem";
			this->получениеОстаткаОтДеленияToolStripMenuItem->Size = System::Drawing::Size(354, 28);
			this->получениеОстаткаОтДеленияToolStripMenuItem->Text = L"3. Получение остатка от деления";
			this->получениеОстаткаОтДеленияToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::получениеОстаткаОтДеленияToolStripMenuItem_Click);
			// 
			// программаПроцедурыToolStripMenuItem
			// 
			this->программаПроцедурыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->структураПрограммыНаЯзыкеАссемблераToolStripMenuItem,
					this->командыРаботыСоСтекомToolStripMenuItem, this->синтаксисПроцедурыToolStripMenuItem, this->вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem,
					this->передачаПараметровПроцедурыToolStripMenuItem, this->передачаРезультатаПроцедурыToolStripMenuItem, this->сохранениеРегистровВПроцедуреToolStripMenuItem,
					this->локальныеДанныеПроцедурToolStripMenuItem, this->рекурсивныеПроцедурыToolStripMenuItem
			});
			this->программаПроцедурыToolStripMenuItem->Name = L"программаПроцедурыToolStripMenuItem";
			this->программаПроцедурыToolStripMenuItem->Size = System::Drawing::Size(426, 28);
			this->программаПроцедурыToolStripMenuItem->Text = L"7. Программа. Процедуры";
			this->программаПроцедурыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::программаПроцедурыToolStripMenuItem_Click);
			// 
			// структураПрограммыНаЯзыкеАссемблераToolStripMenuItem
			// 
			this->структураПрограммыНаЯзыкеАссемблераToolStripMenuItem->Name = L"структураПрограммыНаЯзыкеАссемблераToolStripMenuItem";
			this->структураПрограммыНаЯзыкеАссемблераToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->структураПрограммыНаЯзыкеАссемблераToolStripMenuItem->Text = L"1. Структура программы на языке ассемблера";
			this->структураПрограммыНаЯзыкеАссемблераToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::структураПрограммыНаЯзыкеАссемблераToolStripMenuItem_Click);
			// 
			// командыРаботыСоСтекомToolStripMenuItem
			// 
			this->командыРаботыСоСтекомToolStripMenuItem->Name = L"командыРаботыСоСтекомToolStripMenuItem";
			this->командыРаботыСоСтекомToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->командыРаботыСоСтекомToolStripMenuItem->Text = L"2. Команды работы со стеком";
			this->командыРаботыСоСтекомToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::командыРаботыСоСтекомToolStripMenuItem_Click);
			// 
			// синтаксисПроцедурыToolStripMenuItem
			// 
			this->синтаксисПроцедурыToolStripMenuItem->Name = L"синтаксисПроцедурыToolStripMenuItem";
			this->синтаксисПроцедурыToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->синтаксисПроцедурыToolStripMenuItem->Text = L"3. Синтаксис процедуры";
			this->синтаксисПроцедурыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::синтаксисПроцедурыToolStripMenuItem_Click);
			// 
			// вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem
			// 
			this->вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem->Name = L"вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem";
			this->вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem->Text = L"4. Вызов процедуры и возврат из процедуры";
			this->вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem_Click);
			// 
			// передачаПараметровПроцедурыToolStripMenuItem
			// 
			this->передачаПараметровПроцедурыToolStripMenuItem->Name = L"передачаПараметровПроцедурыToolStripMenuItem";
			this->передачаПараметровПроцедурыToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->передачаПараметровПроцедурыToolStripMenuItem->Text = L"5. Передача параметров процедуры";
			this->передачаПараметровПроцедурыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::передачаПараметровПроцедурыToolStripMenuItem_Click);
			// 
			// передачаРезультатаПроцедурыToolStripMenuItem
			// 
			this->передачаРезультатаПроцедурыToolStripMenuItem->Name = L"передачаРезультатаПроцедурыToolStripMenuItem";
			this->передачаРезультатаПроцедурыToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->передачаРезультатаПроцедурыToolStripMenuItem->Text = L"6. Передача результата процедуры";
			this->передачаРезультатаПроцедурыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::передачаРезультатаПроцедурыToolStripMenuItem_Click);
			// 
			// сохранениеРегистровВПроцедуреToolStripMenuItem
			// 
			this->сохранениеРегистровВПроцедуреToolStripMenuItem->Name = L"сохранениеРегистровВПроцедуреToolStripMenuItem";
			this->сохранениеРегистровВПроцедуреToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->сохранениеРегистровВПроцедуреToolStripMenuItem->Text = L"7. Сохранение регистров в процедуре";
			this->сохранениеРегистровВПроцедуреToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::сохранениеРегистровВПроцедуреToolStripMenuItem_Click);
			// 
			// локальныеДанныеПроцедурToolStripMenuItem
			// 
			this->локальныеДанныеПроцедурToolStripMenuItem->Name = L"локальныеДанныеПроцедурToolStripMenuItem";
			this->локальныеДанныеПроцедурToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->локальныеДанныеПроцедурToolStripMenuItem->Text = L"8. Локальные данные процедур";
			this->локальныеДанныеПроцедурToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::локальныеДанныеПроцедурToolStripMenuItem_Click);
			// 
			// рекурсивныеПроцедурыToolStripMenuItem
			// 
			this->рекурсивныеПроцедурыToolStripMenuItem->Name = L"рекурсивныеПроцедурыToolStripMenuItem";
			this->рекурсивныеПроцедурыToolStripMenuItem->Size = System::Drawing::Size(460, 28);
			this->рекурсивныеПроцедурыToolStripMenuItem->Text = L"9. Рекурсивные процедуры";
			this->рекурсивныеПроцедурыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::рекурсивныеПроцедурыToolStripMenuItem_Click);
			// 
			// оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem
			// 
			this->оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->высокоуровневаяОптимизацияToolStripMenuItem,
					this->оптимизацияСреднегоУровняToolStripMenuItem, this->низкоуровневаяОптимизацияToolStripMenuItem
			});
			this->оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem->Name = L"оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem";
			this->оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem->Size = System::Drawing::Size(426, 28);
			this->оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem->Text = L"8. Оптимизация программ";
			this->оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem_Click);
			// 
			// высокоуровневаяОптимизацияToolStripMenuItem
			// 
			this->высокоуровневаяОптимизацияToolStripMenuItem->Name = L"высокоуровневаяОптимизацияToolStripMenuItem";
			this->высокоуровневаяОптимизацияToolStripMenuItem->Size = System::Drawing::Size(363, 28);
			this->высокоуровневаяОптимизацияToolStripMenuItem->Text = L"1. Высокоуровневая оптимизация";
			this->высокоуровневаяОптимизацияToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::высокоуровневаяОптимизацияToolStripMenuItem_Click);
			// 
			// оптимизацияСреднегоУровняToolStripMenuItem
			// 
			this->оптимизацияСреднегоУровняToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->вычислениеКонстантВнеЦиклаToolStripMenuItem,
					this->переносПроверкиУсловияВКонецЦиклаToolStripMenuItem, this->выполнениеЦиклаЗадомНаперёдToolStripMenuItem, this->разворачиваниеЦикловToolStripMenuItem
			});
			this->оптимизацияСреднегоУровняToolStripMenuItem->Name = L"оптимизацияСреднегоУровняToolStripMenuItem";
			this->оптимизацияСреднегоУровняToolStripMenuItem->Size = System::Drawing::Size(363, 28);
			this->оптимизацияСреднегоУровняToolStripMenuItem->Text = L"2. Оптимизация среднего уровня";
			this->оптимизацияСреднегоУровняToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::оптимизацияСреднегоУровняToolStripMenuItem_Click);
			// 
			// вычислениеКонстантВнеЦиклаToolStripMenuItem
			// 
			this->вычислениеКонстантВнеЦиклаToolStripMenuItem->Name = L"вычислениеКонстантВнеЦиклаToolStripMenuItem";
			this->вычислениеКонстантВнеЦиклаToolStripMenuItem->Size = System::Drawing::Size(446, 28);
			this->вычислениеКонстантВнеЦиклаToolStripMenuItem->Text = L"1. Вычисление констант вне цикла";
			this->вычислениеКонстантВнеЦиклаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::вычислениеКонстантВнеЦиклаToolStripMenuItem_Click);
			// 
			// переносПроверкиУсловияВКонецЦиклаToolStripMenuItem
			// 
			this->переносПроверкиУсловияВКонецЦиклаToolStripMenuItem->Name = L"переносПроверкиУсловияВКонецЦиклаToolStripMenuItem";
			this->переносПроверкиУсловияВКонецЦиклаToolStripMenuItem->Size = System::Drawing::Size(446, 28);
			this->переносПроверкиУсловияВКонецЦиклаToolStripMenuItem->Text = L"2. Перенос проверки условия в конец цикла";
			this->переносПроверкиУсловияВКонецЦиклаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::переносПроверкиУсловияВКонецЦиклаToolStripMenuItem_Click);
			// 
			// выполнениеЦиклаЗадомНаперёдToolStripMenuItem
			// 
			this->выполнениеЦиклаЗадомНаперёдToolStripMenuItem->Name = L"выполнениеЦиклаЗадомНаперёдToolStripMenuItem";
			this->выполнениеЦиклаЗадомНаперёдToolStripMenuItem->Size = System::Drawing::Size(446, 28);
			this->выполнениеЦиклаЗадомНаперёдToolStripMenuItem->Text = L"3. Выполнение цикла задом наперёд";
			this->выполнениеЦиклаЗадомНаперёдToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::выполнениеЦиклаЗадомНаперёдToolStripMenuItem_Click);
			// 
			// разворачиваниеЦикловToolStripMenuItem
			// 
			this->разворачиваниеЦикловToolStripMenuItem->Name = L"разворачиваниеЦикловToolStripMenuItem";
			this->разворачиваниеЦикловToolStripMenuItem->Size = System::Drawing::Size(446, 28);
			this->разворачиваниеЦикловToolStripMenuItem->Text = L"4. Разворачивание циклов";
			this->разворачиваниеЦикловToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::разворачиваниеЦикловToolStripMenuItem_Click);
			// 
			// низкоуровневаяОптимизацияToolStripMenuItem
			// 
			this->низкоуровневаяОптимизацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->основныеПринципыToolStripMenuItem,
					this->использованиеКомандыLEAToolStripMenuItem, this->заменаКомандToolStripMenuItem, this->выравниваниеToolStripMenuItem
			});
			this->низкоуровневаяОптимизацияToolStripMenuItem->Name = L"низкоуровневаяОптимизацияToolStripMenuItem";
			this->низкоуровневаяОптимизацияToolStripMenuItem->Size = System::Drawing::Size(363, 28);
			this->низкоуровневаяОптимизацияToolStripMenuItem->Text = L"3. Низкоуровневая оптимизация";
			this->низкоуровневаяОптимизацияToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::низкоуровневаяОптимизацияToolStripMenuItem_Click);
			// 
			// основныеПринципыToolStripMenuItem
			// 
			this->основныеПринципыToolStripMenuItem->Name = L"основныеПринципыToolStripMenuItem";
			this->основныеПринципыToolStripMenuItem->Size = System::Drawing::Size(344, 28);
			this->основныеПринципыToolStripMenuItem->Text = L"1. Основные принципы";
			this->основныеПринципыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::основныеПринципыToolStripMenuItem_Click);
			// 
			// использованиеКомандыLEAToolStripMenuItem
			// 
			this->использованиеКомандыLEAToolStripMenuItem->Name = L"использованиеКомандыLEAToolStripMenuItem";
			this->использованиеКомандыLEAToolStripMenuItem->Size = System::Drawing::Size(344, 28);
			this->использованиеКомандыLEAToolStripMenuItem->Text = L"2. Использование команды LEA";
			this->использованиеКомандыLEAToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::использованиеКомандыLEAToolStripMenuItem_Click);
			// 
			// заменаКомандToolStripMenuItem
			// 
			this->заменаКомандToolStripMenuItem->Name = L"заменаКомандToolStripMenuItem";
			this->заменаКомандToolStripMenuItem->Size = System::Drawing::Size(344, 28);
			this->заменаКомандToolStripMenuItem->Text = L"3. Замена команд";
			this->заменаКомандToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::заменаКомандToolStripMenuItem_Click);
			// 
			// выравниваниеToolStripMenuItem
			// 
			this->выравниваниеToolStripMenuItem->Name = L"выравниваниеToolStripMenuItem";
			this->выравниваниеToolStripMenuItem->Size = System::Drawing::Size(344, 28);
			this->выравниваниеToolStripMenuItem->Text = L"4. Выравнивание";
			this->выравниваниеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::выравниваниеToolStripMenuItem_Click);
			// 
			// назадВМенюToolStripMenuItem
			// 
			this->назадВМенюToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->назадВМенюToolStripMenuItem->Name = L"назадВМенюToolStripMenuItem";
			this->назадВМенюToolStripMenuItem->Size = System::Drawing::Size(135, 27);
			this->назадВМенюToolStripMenuItem->Text = L"Назад в меню";
			this->назадВМенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::назадВМенюToolStripMenuItem_Click);
			// 
			// перейтиКСпискуЗакладокToolStripMenuItem
			// 
			this->перейтиКСпискуЗакладокToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->перейтиКСпискуЗакладокToolStripMenuItem->Name = L"перейтиКСпискуЗакладокToolStripMenuItem";
			this->перейтиКСпискуЗакладокToolStripMenuItem->Size = System::Drawing::Size(236, 27);
			this->перейтиКСпискуЗакладокToolStripMenuItem->Text = L"Перейти к списку закладок";
			this->перейтиКСпискуЗакладокToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_Literature_Form::перейтиКСпискуЗакладокToolStripMenuItem_Click);
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
			this->Text = L"Основной теоретический материал";
			this->Load += gcnew System::EventHandler(this, &Main_Literature_Form::Main_Literature_Form_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bookmarkImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void назадВМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void bookmarkImage_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void Main_Literature_Form_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void перейтиКСпискуЗакладокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e); //1
	private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e); //2
	private: System::Void item3_Click(System::Object^ sender, System::EventArgs^ e);	//3
	private: System::Void item4_Click(System::Object^ sender, System::EventArgs^ e);	//4
	private: System::Void флагиСостоянияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //5
	private: System::Void управляющийФлагToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);	//6
	private: System::Void системныеФлагиИПолеIOPLToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);	//7
	private: System::Void сегментныеРегистрыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);	//8
	private: System::Void использованиеСтекаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);	//9//1//
	private: System::Void toolStripMenuItem11_Click(System::Object^ sender, System::EventArgs^ e); //10/////////////
	private: System::Void toolStripMenuItem12_Click(System::Object^ sender, System::EventArgs^ e); //11
	private: System::Void toolStripMenuItem13_Click(System::Object^ sender, System::EventArgs^ e); //12
	private: System::Void комментарииToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //13
	private: System::Void директиваЭквивалентностиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //14
	private: System::Void директивыОпределенияДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //15
	private: System::Void командыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //16
	private: System::Void операндыКомандToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //17//2//
	private: System::Void toolStripMenuItem14_Click(System::Object^ sender, System::EventArgs^ e); //18
	private: System::Void toolStripMenuItem15_Click(System::Object^ sender, System::EventArgs^ e); //19
	private: System::Void командыСложенияИВычитанияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //20
	private: System::Void командыУмноженияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //21
	private: System::Void командыДеленияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //22
	private: System::Void изменениеРазмераЧислаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //23
	private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e); //24
	private: System::Void toolStripMenuItem16_Click(System::Object^ sender, System::EventArgs^ e); //25
	private: System::Void прямойПереходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //26
	private: System::Void косвенныйПереходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //27
	private: System::Void toolStripMenuItem17_Click(System::Object^ sender, System::EventArgs^ e); //28
	private: System::Void командаLOOPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //29
	private: System::Void командыLOOPELOOPZИLOOPNELOOPNZToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //30
	private: System::Void модификацияАдресовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //31
	private: System::Void командаLEAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //32
	private: System::Void обработкаМассивовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //33
	private: System::Void поразрядныеОперацииToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //34
	private: System::Void логическиеКомандыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //35
	private: System::Void командыСдвигаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //36
	private: System::Void логическиеСдвигиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //37
	private: System::Void арифметическиеСдвигиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //38
	private: System::Void циклическиеСдвигиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //39
	private: System::Void расширенныеСдвигиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //40
	private: System::Void умножениеИДелениеСПомощьюПоразрядныхОперацийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //41
	private: System::Void умножениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //42
	private: System::Void делениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //43
	private: System::Void получениеОстаткаОтДеленияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //44
	private: System::Void структураПрограммыНаЯзыкеАссемблераToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //45
	private: System::Void командыРаботыСоСтекомToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //46
	private: System::Void синтаксисПроцедурыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //47
	private: System::Void вызовПроцедурыИВозвратИзПроцедурыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //48
	private: System::Void передачаПараметровПроцедурыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //49
	private: System::Void передачаРезультатаПроцедурыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //50
	private: System::Void сохранениеРегистровВПроцедуреToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //51
	private: System::Void локальныеДанныеПроцедурToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //52
	private: System::Void рекурсивныеПроцедурыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //53
	private: System::Void оптимизацияПрограммНаписанныхНаЯзыкеАссемблераToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //54
	private: System::Void высокоуровневаяОптимизацияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //55
	private: System::Void оптимизацияСреднегоУровняToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //56
	private: System::Void вычислениеКонстантВнеЦиклаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //57
	private: System::Void переносПроверкиУсловияВКонецЦиклаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //58
	private: System::Void выполнениеЦиклаЗадомНаперёдToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //59
	private: System::Void разворачиваниеЦикловToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //60
	private: System::Void низкоуровневаяОптимизацияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //61
	private: System::Void основныеПринципыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //62
	private: System::Void использованиеКомандыLEAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //63
	private: System::Void заменаКомандToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //64
	private: System::Void выравниваниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); //65
	private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void командыУмноженияИДеленияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void командыУправленияЦикломToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void массивыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void программаПроцедурыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
