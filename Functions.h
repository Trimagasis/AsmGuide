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
void CleenBookmark(bool& checkCleen);	//������� ������ ��������
void OutFullBookmark(Punct*& currentP1, bool& flag);
void OutBookmark(Punct*& currentP1, int& punct);	//����� ����� ��������
void DeleteBookmark(int& punct);	//�������� 1-�� ��������
void SortBookmark(bool& sort, bool& numberBookmarks);	//���������� ��������
//void Bookmark(char& h, int& n, std::string& directory, book*& start);	//������ ��������
//void GlobalMenu();	//���������� ����
void directorFy(int& punct, int& predpunct);
void SearchItem(book*& stert, int& predpunct);
