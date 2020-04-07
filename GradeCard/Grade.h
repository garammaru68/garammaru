#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>

struct Student
{
	char m_name[10];
	int m_age;
	int m_kor;
	int m_eng;
	int m_mat;
	int m_total;
	float m_avg;
	Student* m_Next;
};

Student* nHead = 0;
Student* nTail = 0;
int gNumber = 0;

enum SELECT
{
	SCREEN = 1,
	ADD,
	UPDATA,
	DEL,
	SAVE,
	LOAD
};

void Menu();
void Screen();
void Add();
void Delete();
void Updata();
void Save();
void Load();
void Initialize();
void Clear();
void Link(Student* newNode);
void DelLink(Student* delNode);
