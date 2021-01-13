#include "Main_Literature_Form.h"
#include "MenuForm.h"
#include "Functions.h"


System::Void ProjectSprv::Main_Literature_Form::íàçàäÂÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MenuForm^ form = gcnew MenuForm();  //Ñîçäàåì ôîðìó
    this->Hide();   //Çàêðûâàåì òåêóùóþ ôîðìó
    form->Show();   //Îòêðûâàåì íîâóþ

    //return System::Void();
}

System::Void ProjectSprv::Main_Literature_Form::item1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Teoria* headT;
    InTeor(headT);
    int punct = 1; 
    Teoria* tmp = headT;
    std::string directory = "1 1 1"; 
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
