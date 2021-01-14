#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <string>

const int len = 2600;  //���-�� ��������

struct book { //������ ��������
	int block = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	struct book* prev = 0; //
	struct book* next = 0; //��������� ��� ����������� ����������� ������
};
//struct book* head, * curent, * tail;

struct Teoria	//��������� �������� �������������� ���������
{
	char buf[len];
	char opredelenie[len];
	struct Teoria* next;
};
//struct Teoria* headT, * tailT;

struct P3	//��������� �������� ���� �������������
{
	char p3[len] = { NULL };
	struct P3* next;
	struct P3* headP3, * currentP3;
};

struct P2	//��������� �������� ���� ����������
{
	char p2[len] = { NULL };
	struct P3 p3;
	struct P2* next;
	struct P2* headP2, * currentP2;
};

struct Punct	//��������� �������� ���� �������
{
	char buf[len] = { NULL };
	char p1[len] = { NULL };
	struct P2 p2;
	struct Punct* next;
};
//struct Punct* headP1, * currentP1;

