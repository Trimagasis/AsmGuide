#pragma once
#include "FunctionsStruct.h"

//using namespace System;

char* del_char(const char* src, char* res, char c);		//удаление флагов из строки (\n)
void InTeor(Teoria*& headT);		//загрузка вопросов из файла в структуру
void InPunct();		//загрузка пунктов из файла в структуру
void checkbook(int& punct, bool& checkbookmark); //проверка на наличие закладки в файле
void OFstream(int& punct, bool& checkbookmark);	//добавление закладки в файл
void InBookmark();	//ЧТЕНИЕ СПИСКА ЗАКЛАДОК ИЗ ФАЙЛА
void PodMenu_x_x_x(int& punct, Teoria*& tmp);	//ВЫЗОВ БЛОКА ТЕОРИИ
//void PodMenu1_1(char& h, int& punct, std::string& directory);
//void Menu1(char& h, int& punct, std::string& directory);
//void Menu2(char& h, int& punct, std::string& directory);
//void Menu3(char& h, int& punct, std::string& directory);
void clearLib();	//очистка памяти от списка закладок при закрытии приложения
void SaveFile();	//СОХРАНЕНИЕ СПИСКА ЗАКЛАДОК В ФАЙЛ
void CleenBookmark(bool& checkCleen);	//очистка списка закладок
void OutFullBookmark(Punct*& currentP1, bool& flag);
void OutBookmark(Punct*& currentP1, int& punct);	//ВЫВОД ОДНОЙ ЗАКЛАДКИ
void DeleteBookmark(int& punct);	//УДАЛЕНИЕ 1-ОЙ ЗАКЛАДКИ
void SortBookmark(bool& sort, bool& numberBookmarks);	//СОРТИРОВКА ЗАКЛАДОК
//void Bookmark(char& h, int& n, std::string& directory, book*& start);	//СПИСОК ЗАКЛАДОК
//void GlobalMenu();	//ГЛОБАЛЬНОЕ МЕНЮ
void directorFy(int& punct, int& predpunct);
void SearchItem(book*& stert, int& predpunct);
