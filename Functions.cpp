#include "Functions.h"


struct book* head = NULL, * curent, * tail;
struct Teoria* headT, * tailT;
struct Punct* headP1, * currentP1;
struct Block* headBlock, *tmpBlock;


std::ifstream& operator>>(std::ifstream& is, book* mass) //�������� ������ �� �����
{
	is >> mass->block >> mass->a >> mass->b >> mass->c;
	return is;
}

//�������� ������ �� ������ (\n)
char* del_char(const char* src, char* res, char c)
{
	bool flag = false;
	char* tmp = res;
	do
		if (flag == false)
			if (*src != c)
				*res++ = *src; //���� �� �����
			else
				flag = true;   //���� ������� �� ����� ������ �����
		else *res++ = *src;    //���� �� �����
	while (*src++);
	return tmp;
}

//�������� �������� �� ����� � ���������
void InTeor(Teoria*& headT) {
	std::ifstream fsTeor("baseTeor.txt", std::ios::in | std::ios::binary);
	if (!fsTeor) return; //���� ������ �������� �����, �� ��������� ���������

	char* strk = new char[1024];
	int n = 0;
	std::ifstream base("baseTeor.txt");
	while (!base.eof())
	{
		base.getline(strk, 1024, '\n');
		n++;
	}
	base.close();

	headT = new Teoria;
	fsTeor.getline(headT->buf, len - 1, '&');
	fsTeor.getline(headT->opredelenie, len - 1, '&'); //��������� ������ � ������
	tailT = headT;
	headT->next = 0;
	tailT->next = 0;
	for (int r = 1; r < n; r++)
	{
		tailT->next = new Teoria;
		tailT = tailT->next;
		fsTeor.getline(tailT->buf, len - 1, '&');
		fsTeor.getline(tailT->opredelenie, len - 1, '&'); //��������� ������ � ������
		tailT->next = 0;
	}
	fsTeor.close(); //��������� ����
}

//�������� ������� �� ����� � ���������
void InPunct() {
	std::ifstream fsTeor("baseTeor.txt", std::ios::in | std::ios::binary);
	if (!fsTeor) return; //���� ������ �������� �����, �� ��������� ���������

	char* strk = new char[1024];
	int n = 0, block = 1;
	std::ifstream base("baseTeor.txt");
	while (!base.eof())
	{
		base.getline(strk, 1024, '\n');
		if (strk[0] == '%') break;
		n++;
	}
	base.close();
	headP1 = new Punct;
	fsTeor.getline(headP1->buf, len - 1, '@');
	fsTeor.getline(headP1->p1, len - 1, '@'); //��������� ������ � ������
	headBlock = new Block;
	headBlock->block = block;
	headBlock->a = 1;
	headBlock->next = 0;
	tmpBlock = headBlock;

	headP1->next = 0;

	headP1->p2.headP2 = NULL;
	currentP1 = headP1;

	int A = 1, B = 0, C = 0;
	for (int r = 1; r < n; r++)
	{
		fsTeor.getline(currentP1->buf, len - 1, '@');
		fsTeor.getline(currentP1->buf, len - 1, '@');
		if ((currentP1->buf[0]) == '1') {
			currentP1->next = new Punct;
			currentP1 = currentP1->next;
			fsTeor.getline(currentP1->p1, len - 1, '@');

			tmpBlock->next = new Block;
			tmpBlock = tmpBlock->next;
			tmpBlock->next = NULL;
			++block;
			tmpBlock->block = block;
			++A;
			tmpBlock->a = A;

			currentP1->p2.headP2 = NULL;
		}
		else if ((currentP1->buf[0]) == '2') {
			if (currentP1->p2.headP2 == NULL)
			{
				currentP1->p2.headP2 = new P2;
				fsTeor.getline(currentP1->p2.headP2->p2, len - 1, '@');

				currentP1->p2.headP2->next = NULL;
				currentP1->p2.headP2->p3.headP3 = NULL;
				currentP1->p2.currentP2 = currentP1->p2.headP2;

				B = 1;
				tmpBlock->b = B;
			}
			else {
				tmpBlock->next = new Block;
				tmpBlock = tmpBlock->next;
				tmpBlock->next = NULL;
				++block; ++B;
				tmpBlock->block = block;
				tmpBlock->a = A;
				tmpBlock->b = B;

				currentP1->p2.currentP2->next = new P2;
				currentP1->p2.currentP2 = currentP1->p2.currentP2->next;
				fsTeor.getline(currentP1->p2.currentP2->p2, len - 1, '@');
				currentP1->p2.currentP2->p3.headP3 = NULL;
			}
		}
		else if ((currentP1->buf[0]) == '3') {
			if (currentP1->p2.currentP2->p3.headP3 == NULL)
			{
				C = 1;
				tmpBlock->c = C;

				currentP1->p2.currentP2->p3.headP3 = new P3;
				fsTeor.getline(currentP1->p2.currentP2->p3.headP3->p3, len - 1, '@');

				currentP1->p2.currentP2->p3.headP3->next = NULL;
				currentP1->p2.currentP2->p3.currentP3 = currentP1->p2.currentP2->p3.headP3;
			}
			else {
				tmpBlock->next = new Block;
				tmpBlock = tmpBlock->next;
				tmpBlock->next = NULL;
				++block; ++C;
				tmpBlock->block = block;
				tmpBlock->a = A;
				tmpBlock->b = B;
				tmpBlock->c = C;

				currentP1->p2.currentP2->p3.currentP3->next = new P3;
				currentP1->p2.currentP2->p3.currentP3 = currentP1->p2.currentP2->p3.currentP3->next;
				fsTeor.getline(currentP1->p2.currentP2->p3.currentP3->p3, len - 1, '@');
			}
		}
	}
	std::ofstream filestream("baseBlock.txt");
	tmpBlock = headBlock;
	do {		
		filestream << std::to_string(tmpBlock->block) << " " << std::to_string(tmpBlock->a) 
			<< " " << std::to_string(tmpBlock->b) << " " << std::to_string(tmpBlock->c);
		tmpBlock = tmpBlock->next;
		if (tmpBlock != NULL) filestream << "\n";
	} while (tmpBlock != NULL);
	filestream.close();
	fsTeor.close(); //��������� ����
}

void checkbook(int& punct, bool& checkbookmark) {
	book* current = head;
	while (current != NULL) {
		if (punct != current->block)
			current = current->next;
		else {
			checkbookmark = true;

			//system("pause>>nul");
			return;
		}
	}
}

//���������� �������� � ����
void OFstream(int& punct, bool& checkbookmark) {
	std::ofstream OFfile("Booklet", std::ios::app);
	std::fstream Ffile("Booklet");
	if (OFfile.is_open()) {
		book* current = head;
		checkbook(punct, checkbookmark);
		tmpBlock = headBlock;
		while (tmpBlock->block != punct) {
			tmpBlock = tmpBlock->next;
		}
		if (Ffile.peek() == EOF) {
			OFfile << punct << " " << std::to_string(tmpBlock->a) << " " << std::to_string(tmpBlock->b) << " "
				<< std::to_string(tmpBlock->c);
		}
		else {
			OFfile << "\n" << punct << " " << std::to_string(tmpBlock->a) << " " << std::to_string(tmpBlock->b) << " "
				<< std::to_string(tmpBlock->c);
		}
		//std::cout << "������� ������� ��������� � ��������!";
	}
//	else std::cout << "������ ���������� � ��������!";
	OFfile.close();
	Ffile.close();
	//system("pause>>nul");
	//system("cls");
}

//������ ������ �������� �� �����
void InBookmark() {
	std::ifstream INfile("Booklet");
	int n = 0;
	if (INfile.is_open()) {
		if (INfile.peek() == EOF) {
			//std::cout << "������ �������� ����!\n";
			return;
		}
		tail = new book;
		char* strk = new char[1024];
		std::ifstream base("Booklet");
		while (!base.eof())
		{
			base.getline(strk, 1024, '\n');
			n++;
		}
		base.close();
		head = new book;
		INfile >> head;
		tail = head;
		head->prev = 0;
		tail->next = 0;
		head->next = 0;
		//start = head;
		for (int i = 1; i < n; i++) {
			tail->next = new book;
			tail->next->prev = tail;
			tail = tail->next;
			INfile >> tail;
			tail->next = 0;
		}
	}
	else {
		//std::cout << "������ �������� �����!";
		//system("pause>>nul");
		return;
	}
	INfile.close();
}


//����� ����� ������
void PodMenu_x_x_x(int& punct, Teoria*& tmp) {
	//system("cls");
		//if (h == 'z') return;
		for (int j = 0; j < punct; j++) { //����� ���������� �������� ��������
			if (punct == j + 1) break;
			else
				tmp = tmp->next;
		}
		char buf[2512];
		/*
		std::cout << del_char(tmp->opredelenie, buf, '\n') << std::endl;

		switch (h = _getch()) {
		case'z': return;
		case'b': if (directory != "-") {
			OFstream(directory, punct);
			book* start;
			int n = 0;
			InBookmark(n, start);
		}
		case'x': return;
		default: return;
		}
		*/
}
/*
void PodMenu1_1(char& h, int& punct, std::string& directory) {
	system("cls");
	while (1) {
		if (h == 'z') return;
		std::cout << "\t������ ���������\n1. ������ ���������\n2. ��������� ���������\n3. ��������� �����������\n" <<
			"4. ���������������� ���������\n5. ����������� ���������\n";
		std::cout << "\n�������� ����� ��� ��������� ����������\n\n<<--Exit(z)\n<--Back(x)\n> ";
		switch (h = _getch()) {
		case'z': return;
		case'x': return;
		case'1': punct = 1; directory = "1 1 1"; PodMenu_x_x_x(punct);	system("cls"); break;
		case'2': punct = 2; directory = "1 1 2"; PodMenu_x_x_x(punct);	system("cls"); break;
		case'3': punct = 3; directory = "1 1 3"; PodMenu_x_x_x(punct);	system("cls"); break;
		case'4': punct = 4; directory = "1 1 4"; PodMenu_x_x_x(punct);	system("cls"); break;
		case'5': punct = 5; directory = "1 1 5"; PodMenu_x_x_x(punct);	system("cls"); break;
		default: std::cout << "Error!"; system("pause>>nul");  system("cls");
		}
	}
}

void Menu1(char& h, int& punct, std::string& directory) {
	system("cls");
	while (1) {
		if (h == 'z') return;
		std::cout << "������ ���������\n\t1) ������ ���������\n\t2) ��� ����� ����� ���������?\n\t3) ��� ����� �������?\n\n<<--Exit(z)\n<--Back(x)\n> ";
		switch (h = _getch()) {
		case'z': return;
		case'x': return;
		case'1': PodMenu1_1(h, punct, directory);	system("cls"); break;
		case'2': punct = 6; directory = "1 2 0"; PodMenu_x_x_x(punct);	system("cls"); break;
		case'3': punct = 7; directory = "1 3 0"; PodMenu_x_x_x(punct);	system("cls"); break;
		default: std::cout << "Error!"; system("pause>>nul");  system("cls");
		}
	}
}

void Menu2(char& h, int& punct, std::string& directory) {
	system("cls");
	while (1) {
		if (h == 'z') return;
		std::cout << "������ ���\n\t1) ��� ����� ���?\n\t2) ����������� �������� ������ ���������������\n\t" <<
			"3) ��� ����� �� - �������� �����?\n\t4) �� ���� ������� ������� ���������������?\n\t" <<
			"5) ������� ��������� ������ ���������������(���.)\n\t6) ������������� ����� ������ ������\n\t" <<
			"7) ������ ��������� ��\n\t8) ������� ������\n\t9) ����� �������\n\tq) ����������� ���� ���� ��������\n\t" <<
			"w) ����������� �������� �����\n\te) ���������� ������� � �������\n\n<<--Exit(z)\n<--Back(x)\n> ";
		switch (h = _getch()) {
		case'z': return;
		case'x': return;
		case'1':punct = 8; directory = "2 1 0"; PodMenu_x_x_x(punct);	system("cls"); break;
		case'2':punct = 9; directory = "2 2 0"; PodMenu_x_x_x(punct);	system("cls"); break;
		default: std::cout << "Error!"; system("pause>>nul");  system("cls");
		}
	}
}

void Menu3(char& h, int& punct, std::string& directory) {
	system("cls");
	while (1) {
		if (h == 'z') return;
		std::cout << "������ ����\n\t1) ��� ����� ����?\n\t2) ��� ���� ������������ ����?\n\t" <<
			"3) ����������� ������ �� ������\n\t4) ����������� ����� (���.)\n\t" <<
			"5) ������ �� ������\n\n<<--Exit(z)\n<--Back(x)\n> ";
		switch (h = _getch()) {
		case'z': return;
		case'x': return;

		default: std::cout << "Error!"; system("pause>>nul");  system("cls");
		}
	}
}
*/
//���������� ������ �������� � ����
void SaveFile() {
	std::ofstream record("Booklet", std::ios::out);
	book* q = head;
	if (record) {
		while (q != NULL) {
			record << q->block << " " << q->a << " " << q->b << " " << q->c;
			q = q->next;
			if (q != NULL) record << std::endl;
		}
	}
	else std::cout << "������ �������� �����!\n";
	record.close();
}

//������� ������ �� ������ �������� ��� �������� ����������
void clearLib()
{
	book* current;
	book* tmp;
	current = head;
	while (current)
	{
		tmp = current->next;
		delete current;
		current = tmp;
	}
	head = NULL;
}

//������� ������ ��������
void CleenBookmark(bool & checkCleen) {
	if (head == NULL) {
		checkCleen = true;
		return;
	}
	clearLib();
	std::ofstream record("Booklet", std::ios::out);
	record.clear();
	record.close();
}

book* start;
//����� ������ ��������
void OutFullBookmark(Punct*& currentP1, bool& flag) {
	InBookmark();	//������ ������ �������� �� �����
	InPunct();		//������ �������� ������� �� �����
	if(flag == false)
		book* start = new book;
	if (head == NULL) return;
	else if (flag == false) {
		start = head;
		flag = true;
	}
	else if (start->next != NULL) start = start->next;
	else {
		flag = false;
		return;
	}
	currentP1 = headP1;
	int NumPunct = 1;
	while (start->a != NumPunct)
	{
		currentP1 = currentP1->next;
		NumPunct++;
	}

	NumPunct = 1;
	while (start->b != NumPunct)
	{
		currentP1->p2.headP2 = currentP1->p2.headP2->next;
		NumPunct++;
	}
	if (start->c != 0) {
		NumPunct = 1;
		while (start->c != NumPunct)
		{
			currentP1->p2.headP2->p3.headP3 = currentP1->p2.headP2->p3.headP3->next;
			NumPunct++;
		}
	}
	else currentP1->p2.headP2->p3.headP3 = NULL;
}

//����� ����� ��������
void OutBookmark(Punct*& currentP1, int& punct) {
	//InBookmark(n, start);	//������ ������ �������� �� �����
	InPunct();
	//if (head == NULL) return;
	//if (run == false) std::cout << "������ ��������:\n";
	//std::string strelka = " -->> ";
	//for (int i = 0; i < n; i++) {
	book* start = new book;
	tmpBlock = headBlock;
	while (tmpBlock->block != punct) {
		tmpBlock = tmpBlock->next;
	}
	start->a = tmpBlock->a;
	start->b = tmpBlock->b;
	start->c = tmpBlock->c;
	currentP1 = headP1;
	//std::cout << i + 1 << ") ";
	int NumPunct = 1;
	while (start->a != NumPunct)
	{
		currentP1 = currentP1->next;
		NumPunct++;
	}
	//std::cout << currentP1->p1 << strelka;

	NumPunct = 1;
	while (start->b != NumPunct)
	{
		currentP1->p2.headP2 = currentP1->p2.headP2->next;
		NumPunct++;
	}
	if (start->c != 0) {
		//std::cout << _currentP2->p2 << strelka;
		NumPunct = 1;
		while (start->c != NumPunct)
		{
			currentP1->p2.headP2->p3.headP3 = currentP1->p2.headP2->p3.headP3->next;
			NumPunct++;
		}
		//std::cout << _currentP3->p3 << std::endl;
	}
	//else std::cout << _currentP2->p2 << std::endl;
/*
else if ((atoi(std::string({ (char)h }).c_str())) == i + 1) {
	int punct = start->block;
	std::string directory = "-";
	Teoria* tmp = headT;
	PodMenu_x_x_x(punct, tmp);
	break;
}*/
//start = start->next;
//}
}

//�������� 1-�� ��������
void DeleteBookmark(int& punct) {
	/*
	int key = 0;
	std::cout << "������� ����� ���������� ��������: ";

	do {
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
		std::cin >> key;
		if (std::cin.fail()) {
			std::cout << "����� �����, � �� ������ :)\n> ";
		}
	} while (std::cin.fail());				//�������� �� ���� ���������� ��������

	if (key > n || key <= 0) {
		std::cout << "������ ����� �����������!";	system("pause>>nul"); return;
	}
	*/
	book* q = 0;
	book* del = tail;
	q = head;
	while (q != NULL)
	{
		while (q != NULL) {
			if (punct == q->block) break;
			else q = q->next;
		}
		del = q;
		if (del == head) {
			head = del->next;
			free(del);
			break;
		}
		if (q->next == NULL) { //���� ����� ������� ����
			if (q->prev == head) {
				tail = head;
				tail->next = 0;
				head->next = 0;
				free(del);
				break;
			}
		}
		if (del->next == NULL) { //���� ������� ���������
			tail = q->prev;
			tail->next = 0;
			free(del);
			break;
		}
		else {//���� ������� �� ������ �� ������
			q = del->next;
			q->prev = del->prev;
			q->prev->next = q;
			free(del);
			break;
		}
	}
	//std::cout << "�������� �" << key << " ������� �������!\n";
	SaveFile();
	//system("pause>>nul");
}
//���������� ��������
void SortBookmark(bool& sort, bool & numberBookmarks) {
	//if (sort == true) {
		//std::cout << "������ �������� ��� ��� ������������!";
		//system("pause>>nul");
		//return;
	//}
	InBookmark();
	if (head == NULL) return;
	if (head->next == NULL)
	{
		numberBookmarks = true;
		//std::cout << "� ������ ����� 1 �����. ��� �� ��������� �����������?...";
		//system("pause>>nul");
		return;
	}
	book* start;
	//���������� �� ����� (punct)
	book* tek;
	start = head; //����� �������
	while (start && start->next) //���� �� ��������������� �����
	{
		tek = start->next; //��������� �� ��������������� ������ �������
		book* k = head, * predk = k;
		while (k != tek && k->block < tek->block)
		{
			predk = k; // ���������� ����� ������� ����� predk
			k = k->next; // ����� k
		}
		if (k != tek) //������� ����� (���� �� ����� �� ��������)
		{
			start->next = tek->next;//������ �������
			tek->next = k;//�������� ����� k-���
			if (k == head) head = tek; //��������� � ������ �������
			else predk->next = tek; //��������� ����� predk ����� k
		}
		else
			start = tek;
	}

	//std::cout << "������ �������� ������� ������������!";
	sort = true;
	SaveFile();
	//system("pause>>nul");
}
/*
//������ ��������
void Bookmark(char& h, int& n, std::string& directory, book*& start) {
	system("cls");
	n = 0;
	bool sort = false;		//���� �������� ������� ����������
	bool run = false;		//����, ������������, ��������� �� ������ ������ �� �������
							//��� ������������ ����� ������� � ��������� ��������
	bool runnew = false;
	while (1) {
		if (h == 'z' || h == 'x') return;
		OutBookmark(run, n, start, h);	//����� ��������
		while (1) {
			if (runnew == true)
			{
				run = false;
				runnew = false;
				start = head;
				system("cls");
				break;
			}
			if (run == false) {
				start = head;
				while (1) {
					if (run == true) break;
					if (h == 'z') return;
					if (head != NULL) {
						std::cout << "\n��� �������� ������� ����� �� ������\n<<--Exit(z)\t<--Back(x)\n" <<
							"���������� ������ ��������(s)\t�������� ��������(d)\t������� ������ ��������(c)\n> ";
						h = _getch();
					}
					else {
						std::cout << "\n<<--Exit(z)\t<--Back(Any key)\n> ";
						h = _getch();
						if (h != 'z') return;
					}
					switch (h) {
					case'z': return;
					case'x': return;
					case's': SortBookmark(sort, n, start); start = head; system("cls"); OutBookmark(run, n, start, h); break;
					case'd': DeleteBookmark(n); system("cls");  OutBookmark(run, n, start, h); break;
					case'c': CleenBookmark(); system("cls");  OutBookmark(run, n, start, h); break;
					default: run = true; start = head; break;  system("cls");
					}
				}
			}
			runnew = true;	//���� ������������ ����
			break;
		}
	}
	system("pause>>nul");
}

//���������� ����
void GlobalMenu() {
	system("cls");
	InTeor();
	int n = 0, punct = 0;
	book* start;
	InBookmark(n, start);	//������ ������ �������� �� �����
	std::string directory = "-";
	char h = 100;
	while (true) {
		if (h == 'z') return;
		std::cout << "����� ������� ���������\n\t1)���������\n\t2)������� ���������������\n\t3)����\n\tc)��������\n\n<<--Exit(z)\n> ";
		switch (h = _getch()) {
		case'z': return;
		case'1': Menu1(h, punct, directory);	 system("cls"); break;
		case'2': Menu2(h, punct, directory);	 system("cls"); break;
		case'3': Menu3(h, punct, directory);	 system("cls"); break;
		case'c': Bookmark(h, n, directory, start);	 system("cls"); break;
		default: std::cout << "Error!"; system("pause>>nul");  system("cls");
		}
	}
}
*/

//��� �������� ��������
void directorFy(int& punct,int& predpunct) {
	punct = predpunct;
}

//����� ������ ����� ������ �� Ũ ������ a b c
void SearchItem(book*& start, int& predpunct) {
	if (headBlock == NULL) InPunct();
	tmpBlock = headBlock;
	while (tmpBlock->a != start->a || tmpBlock->b != start->b || tmpBlock->c != start->c) {
		tmpBlock = tmpBlock->next;
	}
	predpunct = tmpBlock->block;
}