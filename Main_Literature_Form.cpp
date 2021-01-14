#include "Main_Literature_Form.h"
#include "MenuForm.h"
#include "Functions.h"


System::Void ProjectSprv::Main_Literature_Form::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //������� �����
    this->Hide();   //��������� ������� �����
    form->Show();   //��������� �����

    //return System::Void();
}

std::string directory;
int punct = 0;
int predpunct = 0;
std::string preddirectory;

//������� ���������� ������ � textbox � ���������� ������ �� ������� � groupbox
void Conclusion_Theory(book*&start, System::String^& clistr, System::String^& clistr2, int& predpunct) {
    Teoria* headT;
    InTeor(headT);              //���������� ������ �� �����

    Teoria* tmp = headT;
    directorFy(directory, punct, preddirectory, predpunct); //��������
    PodMenu_x_x_x(punct, tmp);              //����� ����� ������
    std::string stroka, ukazatel = " -->> ";

    clistr = gcnew System::String(tmp->opredelenie, 0, len);    //������� ������ �� char* � String^
    int n = 0;
    Punct* currentP1;
    OutBookmark(n, start, currentP1);

    stroka = currentP1->p1 + ukazatel + currentP1->p2.headP2->p2;   //������� char* � ������ ����� �� �������
    if (currentP1->p2.headP2->p3.headP3->p3 != NULL)                //���� ���������� �����������
        stroka += ukazatel + currentP1->p2.headP2->p3.headP3->p3;
    clistr2 = gcnew System::String(stroka.c_str());  //������� �� string � String^

                                 //����� ������ �� groupbox
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
    
    richTextBox1->Text = clistr;    //����� ������ ������
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

    richTextBox1->Text = clistr;    //����� ������ ������
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

//���������� � �������� �������� �� ����� �� ������ ��������
System::Void ProjectSprv::Main_Literature_Form::bookmarkImage_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    this->bookmarkImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage; //������������ �������� �� ������� pictherbox
    bool checkbookmark = false; //���� �������� ������������� ��������
    InBookmark();   //���������� �������� �� �����
    if (punct != 0) {
        checkbook(punct, checkbookmark);    //�������� �� ������������� ��������
        if (checkbookmark == false) {
            OFstream(directory, punct, checkbookmark);  //���������� �������� � ����
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
