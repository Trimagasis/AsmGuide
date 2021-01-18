#include "Main_Literature_Form.h"
#include "MenuForm.h"
#include "Functions.h"
#include "Bookmarks_Form.h"



System::Void ProjectSprv::Main_Literature_Form::íàçàäÂÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //Ñîçäàåì ôîðìó
    this->Hide();   //Çàêðûâàåì òåêóùóþ ôîðìó
    form->Show();   //Îòêðûâàåì íîâóþ

    //return System::Void();
}

int punct = 0;
int predpunct = 0;

//Ôóíêöèÿ ñ÷èòûâàíèÿ òåîðèè â textbox è ñ÷èòûâàíèÿ àäðåñà ïî ïóíêòàì â groupbox
void Conclusion_Theory(System::String^& clistr, System::String^& clistr2, int& predpunct) {
    Teoria* headT;
    InTeor(headT);              //ñ÷èòûâàíèå òåîðèè èç ôàéëà

    Teoria* tmp = headT;
    directorFy(punct, predpunct); //ïåðåâîäû
    PodMenu_x_x_x(punct, tmp);              //ïîèñê áëîêà òåîðèè
    std::string stroka, ukazatel = " -->> ";

    clistr = gcnew System::String(tmp->opredelenie, 0, len);    //ïåðåâîä ñòðîêè èç char* â String^
    Punct* currentP1;
    OutBookmark(currentP1, punct);

    stroka = currentP1->p1;   //ïåðåâîä char* â ñòðîêó àäðåñ ïî ïóíêòàì
    if (currentP1->p2.headP2 != NULL) {
        stroka += ukazatel + currentP1->p2.headP2->p2;
        if (currentP1->p2.headP2->p3.headP3 != NULL)                //åñëè ñóùåñòâóåò ïîäïîäïóíêò
            stroka += ukazatel + currentP1->p2.headP2->p3.headP3->p3;
    }
    clistr2 = gcnew System::String(stroka.c_str());  //ïåðåâîä èç string â String^

                                 //âûâîä àäðåñà íà groupbox
}

//äîáàâëåíèå è óäàëåíèå çàêëàäêè ïî êëèêó íà ôëàæîê çàêëàäêè
System::Void ProjectSprv::Main_Literature_Form::bookmarkImage_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    this->bookmarkImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage; //âûðàâíèâàíèå êàðòèíêè ïî ðàçìåðó pictherbox
    bool checkbookmark = false; //ôëàã ïðîâåðêè ñóùåñòâîâàíèÿ çàêëàäêè
    InBookmark();   //ñ÷èòûâàíèå çàêëàäîê èç ôàéëà
    if (punct != 0) {
        checkbook(punct, checkbookmark);    //ïðîâåðêà íà ñóùåñòâîâàíèå çàêëàäêè
        if (checkbookmark == false) {
            OFstream(punct, checkbookmark);  //äîáàâëåíèå çàêëàäêè â ôàéë
            bookmarkImage->Image = Image::FromFile("bookmarkAktiv.png");    //ôëàæîê = êðàñíûé
        }
        else {
            DeleteBookmark(punct);  //óäàëåíèå çàêëàäêè èç ôàéëà
            bookmarkImage->Image = Image::FromFile("bookmarkNoAktiv.png");  //ôëàæîê = ñåðûé
        }
    }
    return System::Void();
}


//çàãðóçêà ôëàæêà çàêëàäêè ïðè îòêðûòèè ôîðìû
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

        richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
        groupBox1->Text = clistr2;

    return System::Void();
}


//èçìåíåíèå ñîñòîÿíèÿ ôëàæêà çàêëàäêè ïðè èçìåíåíèè ïîëÿ äëÿ òåîðèè
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

System::Void ProjectSprv::Main_Literature_Form::ïåðåéòèÊÑïèñêóÇàêëàäîêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Bookmarks_Form^ form = gcnew Bookmarks_Form();  //Ñîçäàåì ôîðìó
    this->Hide();   //Çàêðûâàåì òåêóùóþ ôîðìó
    form->Show();   //Îòêðûâàåì íîâóþ

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 1;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 2;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::item3_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 3;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::item4_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 4;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ôëàãèÑîñòîÿíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 5;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::óïðàâëÿþùèéÔëàãToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 6;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ñèñòåìíûåÔëàãèÈÏîëåIOPLToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 7;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ñåãìåíòíûåÐåãèñòðûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 8;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::èñïîëüçîâàíèåÑòåêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 9;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 10;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}
//èçìåíèòü íèæíèé
System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem11_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 11;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem12_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 12;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem13_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 13;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîììåíòàðèèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 14;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::äèðåêòèâàÝêâèâàëåíòíîñòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 15;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::äèðåêòèâûÎïðåäåëåíèÿÄàííûõToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 16;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîìàíäûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 17;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::îïåðàíäûÊîìàíäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 18;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

//ÍÅ ÌÇÌÅÍßÒÜ ÍÈÆÍÈÉ!!!
System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 19;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem14_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 20;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem15_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 21;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîìàíäûÑëîæåíèÿÈÂû÷èòàíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 22;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

//ÍÅ ÈÇÌÅÍßÒÜ ÍÈÆÍÈÉÉ!!!
System::Void ProjectSprv::Main_Literature_Form::êîìàíäûÓìíîæåíèÿÈÄåëåíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 23;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîìàíäûÓìíîæåíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 24;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîìàíäûÄåëåíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 25;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::èçìåíåíèåÐàçìåðà×èñëàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 26;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 27;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem16_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 28;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ïðÿìîéÏåðåõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 29;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîñâåííûéÏåðåõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 30;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::toolStripMenuItem17_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 31;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}
//ÍÅ ÈÇÌÅÍßÒÜ ÍÈÆÍÈÉ!!!
System::Void ProjectSprv::Main_Literature_Form::êîìàíäûÓïðàâëåíèÿÖèêëîìToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 32;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîìàíäàLOOPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 33;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîìàíäûLOOPELOOPZÈLOOPNELOOPNZToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 34;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

//ÍÅ ÈÇÌÅÍßÒÜ ÍÈÆÍÈÉ!!!
System::Void ProjectSprv::Main_Literature_Form::ìàññèâûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 35;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ìîäèôèêàöèÿÀäðåñîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 36;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîìàíäàLEAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 37;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::îáðàáîòêàÌàññèâîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 38;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ïîðàçðÿäíûåÎïåðàöèèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 39;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ëîãè÷åñêèåÊîìàíäûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 40;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîìàíäûÑäâèãàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 41;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ëîãè÷åñêèåÑäâèãèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 42;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::àðèôìåòè÷åñêèåÑäâèãèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 43;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::öèêëè÷åñêèåÑäâèãèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 44;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ðàñøèðåííûåÑäâèãèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 45;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::óìíîæåíèåÈÄåëåíèåÑÏîìîùüþÏîðàçðÿäíûõÎïåðàöèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 46;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::óìíîæåíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 47;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::äåëåíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 48;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ïîëó÷åíèåÎñòàòêàÎòÄåëåíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 49;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

//ÍÅ ÈÇÌÅÍßÒÜ ÍÈÆÍÈÉ!!
System::Void ProjectSprv::Main_Literature_Form::ïðîãðàììàÏðîöåäóðûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 50;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ñòðóêòóðàÏðîãðàììûÍàßçûêåÀññåìáëåðàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 51;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::êîìàíäûÐàáîòûÑîÑòåêîìToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 52;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ñèíòàêñèñÏðîöåäóðûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 53;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::âûçîâÏðîöåäóðûÈÂîçâðàòÈçÏðîöåäóðûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 54;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ïåðåäà÷àÏàðàìåòðîâÏðîöåäóðûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 55;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ïåðåäà÷àÐåçóëüòàòàÏðîöåäóðûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 56;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ñîõðàíåíèåÐåãèñòðîâÂÏðîöåäóðåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 57;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ëîêàëüíûåÄàííûåÏðîöåäóðToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 58;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ðåêóðñèâíûåÏðîöåäóðûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 59;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::îïòèìèçàöèÿÏðîãðàììÍàïèñàííûõÍàßçûêåÀññåìáëåðàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 60;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::âûñîêîóðîâíåâàÿÎïòèìèçàöèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 61;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::îïòèìèçàöèÿÑðåäíåãîÓðîâíÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 62;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::âû÷èñëåíèåÊîíñòàíòÂíåÖèêëàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 63;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ïåðåíîñÏðîâåðêèÓñëîâèÿÂÊîíåöÖèêëàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 64;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::âûïîëíåíèåÖèêëàÇàäîìÍàïåð¸äToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 65;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::ðàçâîðà÷èâàíèåÖèêëîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 66;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::íèçêîóðîâíåâàÿÎïòèìèçàöèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 67;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::îñíîâíûåÏðèíöèïûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 68;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::èñïîëüçîâàíèåÊîìàíäûLEAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 69;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::çàìåíàÊîìàíäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 70;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::âûðàâíèâàíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    predpunct = 71;

    System::String^ clistr;
    System::String^ clistr2;

    Conclusion_Theory(clistr, clistr2, predpunct);

    richTextBox1->Text = clistr;    //âûâîä òåêñòà òåîðèè
    groupBox1->Text = clistr2;

    return System::Void();
}
