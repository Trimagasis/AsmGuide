#pragma once
#include "FunctionsStruct.h"

//using namespace System;

char* del_char(const char* src, char* res, char c);		//�������� ������ �� ������ (\n)
void InTeor(Teoria*& headT);		//�������� �������� �� ����� � ���������
void InPunct();		//�������� ������� �� ����� � ���������
void checkbook(int& punct, bool& checkbookmark); //�������� �� ������� �������� � �����
void OFstream(int& punct, bool& checkbookmark);	//���������� �������� � ����
void InBookmark();	//������ ������ �������� �� �����
void PodMenu_x_x_x(int& punct, Teoria*& tmp);	//����� ����� ������
//void PodMenu1_1(char& h, int& punct, std::string& directory);
//void Menu1(char& h, int& punct, std::string& directory);
//void Menu2(char& h, int& punct, std::string& directory);
//void Menu3(char& h, int& punct, std::string& directory);
void clearLib();	//������� ������ �� ������ �������� ��� �������� ����������
void SaveFile();	//���������� ������ �������� � ����
void CleenBookmark();	//������� ������ ��������
void OutFullBookmark(Punct*& currentP1, bool& flag);
void OutBookmark(Punct*& currentP1, int& punct);	//����� ����� ��������
void DeleteBookmark(int& punct);	//�������� 1-�� ��������
void SortBookmark(bool& sort, int& n, book*& start);	//���������� ��������
//void Bookmark(char& h, int& n, std::string& directory, book*& start);	//������ ��������
//void GlobalMenu();	//���������� ����
void directorFy(int& punct, int& predpunct);

/*std::string& Convert_String_to_string(String^ s, std::string& os); 
String^ Convert_string_to_String(std::string& os, String^ s);
std::string& Cinvert_String_to_string(String^ s);
String^ Convert_string_to_String(std::string& os);*/
System::String^ Convert_char_to_String(char* ch);
/*
char* Convert_String_to_char(System::String^ string);*/