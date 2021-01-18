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

    stroka = currentP1->p1;   //������� char* � ������ ����� �� �������
    if (currentP1->p2.headP2 != NULL) {
        stroka += ukazatel + currentP1->p2.headP2->p2;
        if (currentP1->p2.headP2->p3.headP3 != NULL)                //���� ���������� �����������
            stroka += ukazatel + currentP1->p2.headP2->p3.headP3->p3;
    }
    clistr2 = gcnew System::String(stroka.c_str());  //������� �� string � String^

                                 //����� ������ �� groupbox
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
        std::ifstream filestream("tempBkmrk.txt");
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
            else strNumPunct = "100";
            filestream.close();
            
        }
        book* start = new book;
        start->a = atoi(std::string({ (char)strNumPunct[0] }).c_str());
        if (atoi(std::string({ (char)strNumPunct[1] }).c_str()) != '\0')
            start->b = atoi(std::string({ (char)strNumPunct[1] }).c_str());
        else start->b = 0;
        if(atoi(std::string({ (char)strNumPunct[2] }).c_str()) != '\0')
            start->c = atoi(std::string({ (char)strNumPunct[2] }).c_str());
        else start->c = 0;

        SearchItem(start, predpunct);

        System::String^ clistr;
        System::String^ clistr2;

        Conclusion_Theory(clistr, clistr2, predpunct);

        richTextBox1->Text = clistr;    //����� ������ ������
        groupBox1->Text = clistr2;

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

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 1;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 2;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::item3_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 3;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::item4_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 4;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 5;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 6;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������������������IOPLToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 7;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 8;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 9;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 10;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}
//�������� ������
System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem11_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 11;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem12_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 12;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem13_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 13;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 14;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 15;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 16;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 17;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 18;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

//�� �������� ������!!!
System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 19;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem14_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 20;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem15_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 21;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 22;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

//�� �������� �������!!!
System::Void ProjectSprv::Main_Literature_Form::������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 23;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 24;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 25;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 26;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 27;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem16_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 28;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 29;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 30;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem17_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 31;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}
//�� �������� ������!!!
System::Void ProjectSprv::Main_Literature_Form::�����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 32;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������LOOPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 33;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������LOOPELOOPZ�LOOPNELOOPNZToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 34;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

//�� �������� ������!!!
System::Void ProjectSprv::Main_Literature_Form::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 35;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 36;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������LEAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 37;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 38;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 39;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 40;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 41;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 42;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 43;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 44;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 45;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 46;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 47;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 48;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 49;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

//�� �������� ������!!
System::Void ProjectSprv::Main_Literature_Form::������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 50;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�����������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 51;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 52;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 53;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::���������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 54;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::���������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 55;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::���������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 56;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�����������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 57;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 58;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 59;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::����������������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 60;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 61;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 62;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 63;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::���������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 64;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 65;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 66;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::�������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 67;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 68;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::��������������������LEAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 69;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 70;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 71;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //����� ������ ������
    groupBox1->Text = clistr2;

    return System::Void();
}
