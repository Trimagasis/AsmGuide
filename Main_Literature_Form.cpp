#include "Main_Literature_Form.h"
#include "MenuForm.h"
#include "Functions.h"


System::Void ProjectSprv::Main_Literature_Form::назадВМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //Создаем форму
    this->Hide();   //Закрываем текущую форму
    form->Show();   //Открываем новую

    //return System::Void();
}

std::string directory;
int punct = 0;
int predpunct = 0;
std::string preddirectory;

//Функция считывания теории в textbox и считывания адреса по пунктам в groupbox
void Conclusion_Theory(book*&start, System::String^& clistr, System::String^& clistr2, int& predpunct) {
    Teoria* headT;
    InTeor(headT);              //считывание теории из файла

    Teoria* tmp = headT;
    directorFy(directory, punct, preddirectory, predpunct); //переводы
    PodMenu_x_x_x(punct, tmp);              //поиск блока теории
    std::string stroka, ukazatel = " -->> ";

    clistr = gcnew System::String(tmp->opredelenie, 0, len);    //перевод строки из char* в String^
    int n = 0;
    Punct* currentP1;
    OutBookmark(n, start, currentP1);

    stroka = currentP1->p1 + ukazatel + currentP1->p2.headP2->p2;   //перевод char* в строку адрес по пунктам
    if (currentP1->p2.headP2->p3.headP3->p3 != NULL)                //если существует подподпункт
        stroka += ukazatel + currentP1->p2.headP2->p3.headP3->p3;
    clistr2 = gcnew System::String(stroka.c_str());  //перевод из string в String^

                                 //вывод адреса на groupbox
}

System::Void ProjectSprv::Main_Literature_Form::item1_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 1;
    preddirectory = "1 1 1";
    book* start = new book;
    start->a = 1; start->b = 1; start->c = 1;
    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(start, clistr, clistr2, predpunct);
    
    richTextBox1->Text = clistr;    //вывод текста теории
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::item2_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 2;
    preddirectory = "1 1 2";
    book* start = new book;
    start->a = 1; start->b = 1; start->c = 2;
    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(start, clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //вывод текста теории
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::item3_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::item4_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

//добавление и удаление закладки по клику на флажок закладки
System::Void ProjectSprv::Main_Literature_Form::bookmarkImage_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    this->bookmarkImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage; //выравнивание картинки по размеру pictherbox
    bool checkbookmark = false; //флаг проверки существования закладки
    InBookmark();   //считывание закладок из файла
    if (punct != 0) {
        checkbook(punct, checkbookmark);    //проверка на существование закладки
        if (checkbookmark == false) {
            OFstream(directory, punct, checkbookmark);  //добавление закладки в файл
            bookmarkImage->Image = Image::FromFile("bookmarkAktiv.png");    //флажок = красный
        }
        else {
            DeleteBookmark(punct);  //удаление закладки из файла
            bookmarkImage->Image = Image::FromFile("bookmarkNoAktiv.png");  //флажок = серый
        }
    }
    return System::Void();
}

//загрузка флажка закладки при открытии формы
System::Void ProjectSprv::Main_Literature_Form::Main_Literature_Form_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->bookmarkImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
        bookmarkImage->Image = Image::FromFile("bookmarkNoAktiv.png");

    return System::Void();
}

//изменение состояния флажка закладки при изменении поля для теории
System::Void ProjectSprv::Main_Literature_Form::richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    this->bookmarkImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
    InBookmark();
    bool checkbookmark = false;
    checkbook(punct, checkbookmark);
    if (checkbookmark == true)
        bookmarkImage->Image = Image::FromFile("bookmarkAktiv.png");
    else
        bookmarkImage->Image = Image::FromFile("bookmarkNoAktiv.png");

    return System::Void();
}
