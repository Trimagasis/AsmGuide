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

System::Void ProjectSprv::Main_Literature_Form::item1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Teoria* headT;
    InTeor(headT);
    predpunct = 1; 
    Teoria* tmp = headT;
    preddirectory = "1 1 1"; 
    directorFy(directory, punct, preddirectory, predpunct);
    PodMenu_x_x_x(punct, tmp);
    System::String^ clistr = gcnew System::String(tmp->opredelenie, 0, len);
    richTextBox1->Text = clistr;
    int n = 0;
    book* start = new book;
    start->a = 1; start->b = 1; start->c = 1;
    Punct* currentP1;
    OutBookmark(n, start, currentP1);
    clistr = gcnew System::String(currentP1->p1, 0, len);
    groupBox1->Text = clistr;
    clistr = gcnew System::String(currentP1->p2.headP2->p2, 0, len);
    groupBox1->Text += " -->> " + clistr;
    clistr = gcnew System::String(currentP1->p2.headP2->p3.headP3->p3, 0, len);
    groupBox1->Text += " -->>" + clistr;
    
    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::item2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Teoria* headT;
    InTeor(headT);
    predpunct = 2;
    Teoria* tmp = headT;
    preddirectory = "1 1 2";
    directorFy(directory, punct, preddirectory, predpunct);
    PodMenu_x_x_x(punct, tmp);
    System::String^ clistr = gcnew System::String(tmp->opredelenie, 0, len);
    richTextBox1->Text = clistr;
    int n = 0;
    book* start = new book;
    start->a = 1; start->b = 1; start->c = 2;
    Punct* currentP1;
    OutBookmark(n, start, currentP1);
    clistr = gcnew System::String(currentP1->p1, 0, len);
    groupBox1->Text = clistr;
    clistr = gcnew System::String(currentP1->p2.headP2->p2, 0, len);
    groupBox1->Text += " -->> " + clistr;
    clistr = gcnew System::String(currentP1->p2.headP2->p3.headP3->p3, 0, len);
    groupBox1->Text += " -->>" + clistr;

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
    this->bookmarkImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
    bool checkbookmark = false;
    InBookmark();
    if (punct != 0) {
        checkbook(punct, checkbookmark);
        if (checkbookmark == false) {
            OFstream(directory, punct, checkbookmark);
            bookmarkImage->Image = Image::FromFile("bookmarkAktiv.png");
        }
        else {
            DeleteBookmark(punct);
            bookmarkImage->Image = Image::FromFile("bookmarkNoAktiv.png");
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
