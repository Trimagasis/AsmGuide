#pragma once
#include "FunctionsStruct.h"

//using namespace System;


char* del_char(const char* src, char* res, char c);		//удаление флагов из строки (\n)
void InTeor(Teoria*& headT);		//загрузка вопросов из файла в структуру
void InPunct();		//загрузка пунктов из файла в структуру
void OFstream(std::string& directory, int& punct);	//добавление закладки в файл
void InBookmark(int& n, book*& start);	//ЧТЕНИЕ СПИСКА ЗАКЛАДОК ИЗ ФАЙЛА
void PodMenu_x_x_x(int& punct, Teoria*& tmp);	//ВЫЗОВ БЛОКА ТЕОРИИ
//void PodMenu1_1(char& h, int& punct, std::string& directory);
//void Menu1(char& h, int& punct, std::string& directory);
//void Menu2(char& h, int& punct, std::string& directory);
//void Menu3(char& h, int& punct, std::string& directory);
void clearLib();	//очистка памяти от списка закладок при закрытии приложения
void SaveFile();	//СОХРАНЕНИЕ СПИСКА ЗАКЛАДОК В ФАЙЛ
void CleenBookmark();	//очистка списка закладок
void OutBookmark(int& n, book*& start, Punct*& currentP1);	//ВЫВОД ЗАКЛАДОК
void DeleteBookmark(int& n);	//УДАЛЕНИЕ 1-ОЙ ЗАКЛАДКИ
void SortBookmark(bool& sort, int& n, book*& start);	//СОРТИРОВКА ЗАКЛАДОК
//void Bookmark(char& h, int& n, std::string& directory, book*& start);	//СПИСОК ЗАКЛАДОК
//void GlobalMenu();	//ГЛОБАЛЬНОЕ МЕНЮ


/*std::string& Convert_String_to_string(String^ s, std::string& os); 
String^ Convert_string_to_String(std::string& os, String^ s);
std::string& Cinvert_String_to_string(String^ s);
String^ Convert_string_to_String(std::string& os);*/
System::String^ Convert_char_to_String(char* ch);
/*
char* Convert_String_to_char(System::String^ string);*/