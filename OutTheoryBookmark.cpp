#include "OutTheoryBookmark.h"
#include "Bookmarks_Form.h"

System::Void ProjectSprv::OutTheoryBookmark::��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Bookmarks_Form^ form = gcnew Bookmarks_Form();
    this->Hide();	//��������� ������� �����
    form->Show();	//��������� ����� �����

    return System::Void();
}
