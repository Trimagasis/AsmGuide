#include "Functions.h"


struct book* head = NULL, * curent, * tail;
struct Teoria* headT, * tailT;
struct Punct* headP1, * currentP1;
struct Block* headBlock, *tmpBlock;


std::ifstream& operator>>(std::ifstream& is, book* mass) //оператор чтения из файла
{
	is >> mass->block >> mass->a >> mass->b >> mass->c;
	return is;
}

//удаление флагов из строки (\n)
char* del_char(const char* src, char* res, char c)
{
	bool flag = false;
	char* tmp = res;
	do
		if (flag == false)
			if (*src != c)
				*res++ = *src; //если не нашли
			else
				flag = true;   //если переход на новую строку нашли
		else *res++ = *src;    //если не нашли
	while (*src++);
	return tmp;
}

//загрузка вопросов из файла в структуру
void InTeor(Teoria*& headT) {
	std::ifstream fsTeor("baseTeor.txt", std::ios::in | std::ios::binary);
	if (!fsTeor) return; //Если ошибка открытия файла, то завершаем программу

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
	fsTeor.getline(headT->opredelenie, len - 1, '&'); //Считываем строки в массив
	tailT = headT;
	headT->next = 0;
	tailT->next = 0;
	for (int r = 1; r < n; r++)
	{
		tailT->next = new Teoria;
		tailT = tailT->next;
		fsTeor.getline(tailT->buf, len - 1, '&');
		fsTeor.getline(tailT->opredelenie, len - 1, '&'); //Считываем строки в массив
		tailT->next = 0;
	}
	fsTeor.close(); //Закрываем файл
}

//загрузка пунктов из файла в структуру
void InPunct() {
	std::ifstream fsTeor("baseTeor.txt", std::ios::in | std::ios::binary);
	if (!fsTeor) return; //Если ошибка открытия файла, то завершаем программу

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
	fsTeor.getline(headP1->p1, len - 1, '@'); //Считываем строки в массив
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
	fsTeor.close(); //Закрываем файл
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

//добавление закладки в файл
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
		//std::cout << "Вкладка успешно добавлена в закладки!";
	}
//	else std::cout << "Ошибка добавления в закладки!";
	OFfile.close();
	Ffile.close();
	//system("pause>>nul");
	//system("cls");
}

//ЧТЕНИЕ СПИСКА ЗАКЛАДОК ИЗ ФАЙЛА
void InBookmark() {
	std::ifstream INfile("Booklet");
	int n = 0;
	if (INfile.is_open()) {
		if (INfile.peek() == EOF) {
			//std::cout << "Список закладок пуст!\n";
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
		//std::cout << "Ошибка открытия файла!";
		//system("pause>>nul");
		return;
	}
	INfile.close();
}


//ВЫЗОВ БЛОКА ТЕОРИИ
void PodMenu_x_x_x(int& punct, Teoria*& tmp) {
	//system("cls");
		//if (h == 'z') return;
		for (int j = 0; j < punct; j++) { //поиск выбранного рандомом студента
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
		std::cout << "\tРежимы адресации\n1. Прямая адресация\n2. Косвенная адресация\n3. Косвенная регистровая\n" <<
			"4. Непосредственная адресация\n5. Регистровая адресация\n";
		std::cout << "\nВыберете пункт для подробной информации\n\n<<--Exit(z)\n<--Back(x)\n> ";
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
		std::cout << "Раздел АДРЕСАЦИЯ\n\t1) Режимы адресации\n\t2) Что такое режим адресации?\n\t3) Что такое операнд?\n\n<<--Exit(z)\n<--Back(x)\n> ";
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
		std::cout << "Раздел КОП\n\t1) Что такое КОП?\n\t2) Определение сущности команд микропроцессора\n\t" <<
			"3) Что такое АЧ - адресная часть?\n\t4) Из чего состоит команда микропроцессора?\n\t" <<
			"5) Форматы различных команд микропроцессора(рис.)\n\t6) Мнемоническая форма записи команд\n\t" <<
			"7) Методы адресации МП\n\t8) Форматы команд\n\t9) Длина команды\n\tq) Разрядность поля кода операции\n\t" <<
			"w) Разрядность адресной части\n\te) Количество адресов в команде\n\n<<--Exit(z)\n<--Back(x)\n> ";
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
		std::cout << "Раздел СТЕК\n\t1) Что такое СТЕК?\n\t2) Для чего используется СТЕК?\n\t" <<
			"3) Особенности работы со стеком\n\t4) Организация стека (рис.)\n\t" <<
			"5) Работа со стеком\n\n<<--Exit(z)\n<--Back(x)\n> ";
		switch (h = _getch()) {
		case'z': return;
		case'x': return;

		default: std::cout << "Error!"; system("pause>>nul");  system("cls");
		}
	}
}
*/
//СОХРАНЕНИЕ СПИСКА ЗАКЛАДОК В ФАЙЛ
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
	else std::cout << "Ошибка открытия файла!\n";
	record.close();
}

//очистка памяти от списка закладок при закрытии приложения
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

//очистка списка закладок
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
//ВЫВОД СПИСКА ЗАКЛАДОК
void OutFullBookmark(Punct*& currentP1, bool& flag) {
	InBookmark();	//ЧТЕНИЕ СПИСКА ЗАКЛАДОК ИЗ ФАЙЛА
	InPunct();		//ЧТЕНИЕ НАЗВАНИЙ ПУНКТОВ ИЗ ФАЙЛА
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

//ВЫВОД ОДНОЙ ЗАКЛАДКИ
void OutBookmark(Punct*& currentP1, int& punct) {
	//InBookmark(n, start);	//ЧТЕНИЕ СПИСКА ЗАКЛАДОК ИЗ ФАЙЛА
	InPunct();
	//if (head == NULL) return;
	//if (run == false) std::cout << "Список закладок:\n";
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

//УДАЛЕНИЕ 1-ОЙ ЗАКЛАДКИ
void DeleteBookmark(int& punct) {
	/*
	int key = 0;
	std::cout << "Введите номер удаляемого элемента: ";

	do {
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
		std::cin >> key;
		if (std::cin.fail()) {
			std::cout << "Номер введи, а не символ :)\n> ";
		}
	} while (std::cin.fail());				//проверка на ввод численного значения

	if (key > n || key <= 0) {
		std::cout << "Данный пункт отсутствует!";	system("pause>>nul"); return;
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
		if (q->next == NULL) { //если такой элемент один
			if (q->prev == head) {
				tail = head;
				tail->next = 0;
				head->next = 0;
				free(del);
				break;
			}
		}
		if (del->next == NULL) { //если элемент последний
			tail = q->prev;
			tail->next = 0;
			free(del);
			break;
		}
		else {//если элемент от головы до хвоста
			q = del->next;
			q->prev = del->prev;
			q->prev->next = q;
			free(del);
			break;
		}
	}
	//std::cout << "Закладка №" << key << " успешно удалена!\n";
	SaveFile();
	//system("pause>>nul");
}
//СОРТИРОВКА ЗАКЛАДОК
void SortBookmark(bool& sort, bool & numberBookmarks) {
	//if (sort == true) {
		//std::cout << "Список закладок уже был отсортирован!";
		//system("pause>>nul");
		//return;
	//}
	InBookmark();
	if (head == NULL) return;
	if (head->next == NULL)
	{
		numberBookmarks = true;
		//std::cout << "В списке всего 1 пункт. Что Вы собрались сортировать?...";
		//system("pause>>nul");
		return;
	}
	book* start;
	//СОРТИРОВКА ПО БЛОКУ (punct)
	book* tek;
	start = head; //метод вставки
	while (start && start->next) //цикл по отсортированной части
	{
		tek = start->next; //следующий за отсортированной частью элемент
		book* k = head, * predk = k;
		while (k != tek && k->block < tek->block)
		{
			predk = k; // запоминаем место вставки после predk
			k = k->next; // перед k
		}
		if (k != tek) //вставка нужна (если не дошли до текущего)
		{
			start->next = tek->next;//изъяли текущий
			tek->next = k;//втавляем перед k-тым
			if (k == head) head = tek; //вставляем в начало очереди
			else predk->next = tek; //вставляем после predk перед k
		}
		else
			start = tek;
	}

	//std::cout << "Список закладок успешно отсортирован!";
	sort = true;
	SaveFile();
	//system("pause>>nul");
}
/*
//СПИСОК ЗАКЛАДОК
void Bookmark(char& h, int& n, std::string& directory, book*& start) {
	system("cls");
	n = 0;
	bool sort = false;		//флаг проверки статуса сортировки
	bool run = false;		//флаг, определяющий, выводится ли сейчас список на консоль
							//или пользователь хочет перейти к выбранной закладке
	bool runnew = false;
	while (1) {
		if (h == 'z' || h == 'x') return;
		OutBookmark(run, n, start, h);	//ВЫВОД ЗАКЛАДОК
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
						std::cout << "\nДля перехода введите номер из списка\n<<--Exit(z)\t<--Back(x)\n" <<
							"Сортировка списка закладок(s)\tУдаление закладки(d)\tОчистка списка закладок(c)\n> ";
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
			runnew = true;	//флаг срабатывания меню
			break;
		}
	}
	system("pause>>nul");
}

//ГЛОБАЛЬНОЕ МЕНЮ
void GlobalMenu() {
	system("cls");
	InTeor();
	int n = 0, punct = 0;
	book* start;
	InBookmark(n, start);	//ЧТЕНИЕ СПИСКА ЗАКЛАДОК ИЗ ФАЙЛА
	std::string directory = "-";
	char h = 100;
	while (true) {
		if (h == 'z') return;
		std::cout << "Выбор раздела глоссария\n\t1)Адресация\n\t2)Команды микропроцессора\n\t3)Стек\n\tc)Закладки\n\n<<--Exit(z)\n> ";
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

//для передачи значения
void directorFy(int& punct,int& predpunct) {
	punct = predpunct;
}

//ПОИСК ПУНКТА БЛОКА ТЕОРИИ ПО ЕЁ АДРЕСУ a b c
void SearchItem(book*& start, int& predpunct) {
	if (headBlock == NULL) InPunct();
	tmpBlock = headBlock;
	while (tmpBlock->a != start->a || tmpBlock->b != start->b || tmpBlock->c != start->c) {
		tmpBlock = tmpBlock->next;
	}
	predpunct = tmpBlock->block;
}