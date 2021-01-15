#include "Main_Literature_Form.h"
#include "MenuForm.h"
#include "Functions.h"
#include "Bookmarks_Form.h"



System::Void ProjectSprv::Main_Literature_Form::назадВМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //Создаем форму
    this->Hide();   //Закрываем текущую форму
    form->Show();   //Открываем новую

    //return System::Void();
}

int punct = 0;
int predpunct = 0;

//Функция считывания теории в textbox и считывания адреса по пунктам в groupbox
void Conclusion_Theory(System::String^& clistr, System::String^& clistr2, int& predpunct) {
    Teoria* headT;
    InTeor(headT);              //считывание теории из файла

    Teoria* tmp = headT;
    directorFy(punct, predpunct); //переводы
    PodMenu_x_x_x(punct, tmp);              //поиск блока теории
    std::string stroka, ukazatel = " -->> ";

    clistr = gcnew System::String(tmp->opredelenie, 0, len);    //перевод строки из char* в String^
    Punct* currentP1;
    OutBookmark(currentP1, punct);

    stroka = currentP1->p1 + ukazatel + currentP1->p2.headP2->p2;   //перевод char* в строку адрес по пунктам
    if (currentP1->p2.headP2->p3.headP3->p3 != NULL)                //если существует подподпункт
        stroka += ukazatel + currentP1->p2.headP2->p3.headP3->p3;
    clistr2 = gcnew System::String(stroka.c_str());  //перевод из string в String^

                                 //вывод адреса на groupbox
}

System::Void ProjectSprv::Main_Literature_Form::item1_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 1;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);
    
    richTextBox1->Text = clistr;    //вывод текста теории
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::item2_Click(System::Object^ sender, System::EventArgs^ e)
{
  

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
            OFstream(punct, checkbookmark);  //добавление закладки в файл
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



        //using namespace System::IO;
        //StreamReader^ sr1 = gcnew StreamReader("tempBkmrk.txt", System::Text::Encoding::Default);
        std::string filename = "tempBkmrk.txt";
        std::ifstream filestream(filename);
        std::string str, strNumPunct;
        if (filestream) {
            char tmp[100];
            filestream.getline(tmp, 100 - 1);
            str = tmp;
            if (str[0] != '\0') {
                int b;
                for (int i = 0; i < str.size(); i++)
                    if (str[i] >= 48 && str[i] <= 57)
                    {           
                        strNumPunct += str[i];
                    }
            }
            filestream.close();
            
        }
        book* start = new book;
        start->a = strNumPunct[0]; 
        start->b = strNumPunct[1];
        if(strNumPunct[2] != '\0')
            start->c = strNumPunct[2];
        else start->c = 0;

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

System::Void ProjectSprv::Main_Literature_Form::перейтиКСпискуЗакладокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Bookmarks_Form^ form = gcnew Bookmarks_Form();  //Создаем форму
    this->Hide();   //Закрываем текущую форму
    form->Show();   //Открываем новую

    return System::Void();
}
