#pragma once
#include "FunctionsStruct.h"

//using namespace System;


char* del_char(const char* src, char* res, char c);		//�������� ������ �� ������ (\n)
void InTeor(Teoria*& headT);		//�������� �������� �� ����� � ���������
void InPunct();		//�������� ������� �� ����� � ���������
void OFstream(std::string& directory, int& punct);	//���������� �������� � ����
void InBookmark(int& n, book*& start);	//������ ������ �������� �� �����
void PodMenu_x_x_x(int& punct, Teoria*& tmp);	//����� ����� ������
//void PodMenu1_1(char& h, int& punct, std::string& directory);
//void Menu1(char& h, int& punct, std::string& directory);
//void Menu2(char& h, int& punct, std::string& directory);
//void Menu3(char& h, int& punct, std::string& directory);
void clearLib();	//������� ������ �� ������ �������� ��� �������� ����������
void SaveFile();	//���������� ������ �������� � ����
void CleenBookmark();	//������� ������ ��������
void OutBookmark(int& n, book*& start, Punct*& currentP1);	//����� ��������
void DeleteBookmark(int& n);	//�������� 1-�� ��������
void SortBookmark(bool& sort, int& n, book*& start);	//���������� ��������
//void Bookmark(char& h, int& n, std::string& directory, book*& start);	//������ ��������
//void GlobalMenu();	//���������� ����


/*std::string& Convert_String_to_string(String^ s, std::string& os); 
String^ Convert_string_to_String(std::string& os, String^ s);
std::string& Cinvert_String_to_string(String^ s);
String^ Convert_string_to_String(std::string& os);*/
System::String^ Convert_char_to_String(char* ch);
/*
char* Convert_String_to_char(System::String^ string);*/