#include "OutTheoryBookmark.h"
#include "Bookmarks_Form.h"

System::Void ProjectSprv::OutTheoryBookmark::назад —писку«акладокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Bookmarks_Form^ form = gcnew Bookmarks_Form();
    this->Hide();	//закрываем текущую форму
    form->Show();	//открываем новую форму

    return System::Void();
}
