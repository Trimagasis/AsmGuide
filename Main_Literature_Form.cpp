#include "Main_Literature_Form.h"
#include "MenuForm.h"
#include "Functions.h"
#include "Bookmarks_Form.h"



System::Void ProjectSprv::Main_Literature_Form::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //������� �����
    this->Hide();   //��������� ������� �����
    form->Show();   //��������� �����

    //return System::Void();
}

int punct = 0;
int predpunct = 0;

//������� ���������� ������ � textbox � ���������� ������ �� ������� � groupbox
void Conclusion_Theory(System::String^& clistr, System::String^& clistr2, int& predpunct) {
    Teoria* headT;
    InTeor(headT);              //���������� ������ �� �����

    Teoria* tmp = headT;
    directorFy(punct, predpunct); //��������
    PodMenu_x_x_x(punct, tmp);              //����� ����� ������
    std::string stroka, ukazatel = " -->> ";

    clistr = gcnew System::String(tmp->opredelenie, 0, len);    //������� ������ �� char* � String^
    Punct* currentP1;
    OutBookmark(currentP1, punct);

    stroka = currentP1->p1 + ukazatel + currentP1->p2.headP2->p2;   //������� char* � ������ ����� �� �������
    if (currentP1->p2.headP2->p3.headP3->p3 != NULL)                //���� ���������� �����������
        stroka += ukazatel + currentP1->p2.headP2->p3.headP3->p3;
    clistr2 = gcnew System::String(stroka.c_str());  //������� �� string � String^

                                 //����� ������ �� groupbox
}

System::Void ProjectSprv::Main_Literature_Form::item1_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 1;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);
    
    richTextBox1->Text = clistr;    //����� ������ ������
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

//���������� � �������� �������� �� ����� �� ������ ��������
System::Void ProjectSprv::Main_Literature_Form::bookmarkImage_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    this->bookmarkImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage; //������������ �������� �� ������� pictherbox
    bool checkbookmark = false; //���� �������� ������������� ��������
    InBookmark();   //���������� �������� �� �����
    if (punct != 0) {
        checkbook(punct, checkbookmark);    //�������� �� ������������� ��������
        if (checkbookmark == false) {
            OFstream(punct, checkbookmark);  //���������� �������� � ����
            bookmarkImage->Image = Image::FromFile("bookmarkAktiv.png");    //������ = �������
        }
        else {
            DeleteBookmark(punct);  //�������� �������� �� �����
            bookmarkImage->Image = Image::FromFile("bookmarkNoAktiv.png");  //������ = �����
        }
    }
    return System::Void();
}


//�������� ������ �������� ��� �������� �����
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


//��������� ��������� ������ �������� ��� ��������� ���� ��� ������
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

System::Void ProjectSprv::Main_Literature_Form::����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Bookmarks_Form^ form = gcnew Bookmarks_Form();  //������� �����
    this->Hide();   //��������� ������� �����
    form->Show();   //��������� �����

    return System::Void();
}
