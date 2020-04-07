#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>

struct Students
{
	char	m_Name[10];
	int		m_Age;
	int		m_Kor;
	int		m_Eng;
	int		m_Mat;
	int		m_Sci;
	int		m_Total;
	float	m_Avr;
	Students* m_Next;
	Students* m_Prev;
};

Students* pHead = 0;
Students* pTail = 0;
Students* pPrev = 0;

int gNumber = 0;

void Link(Students* info);
void DelLink(Students* info);
void AllDelLink();
Students* FindIndex(char* iInfo);

int Ascending(Students* infoA, Students* infoB);
int(*SORTFUNCTION) (Students* pA, Students* pB);

enum SELECT
{
	SCREEN = 1,
	ADD,
	UPDATA,
	DEL,
	SAVE,
	LOAD
};


// 화면
int Screen();
// 메뉴
void Menu();
// 추가
int Add();
// 수정
int Update();
// 삭제
void Delete();
// 저장
int Save();
// 로드
int Load();

int Screen()
{
	printf("================================================================");
	printf("\n============================ 성적표 ============================");
	printf("\n================================================================");

	for (Students* sPrint = pHead; sPrint != NULL; sPrint = sPrint->m_Next)
	{
		printf("\n%s\t%d\t%d\t%d\t%d\t%d\t%d\t%4.3",
			sPrint->m_Name,
			sPrint->m_Age,
			sPrint->m_Kor,
			sPrint->m_Eng,
			sPrint->m_Mat,
			sPrint->m_Sci,
			sPrint->m_Total,
			sPrint->m_Avr);
	}
	return 1;
}

void Menu()
{
	printf("\n출력(1)\t추가(2)\t삭제(4)\t저장(5)\t로드(6) : ");
}

int Add()
{
	Students newData;
	memset(&newData, 0, sizeof(Students));
	printf("\n이름 : "); scanf("%s", newData.m_Name);
	printf("\n나이 : "); scanf("%d", &newData.m_Age);
	printf("\n국어 : "); scanf("%d", &newData.m_Kor);
	printf("\n영어 : "); scanf("%d", &newData.m_Eng);
	printf("\n수학 : "); scanf("%d", &newData.m_Mat);
	printf("\n과학 : "); scanf("%d", &newData.m_Sci);
	newData.m_Total = newData.m_Kor + newData.m_Eng + newData.m_Mat + newData.m_Sci;
	newData.m_Avr = newData.m_Total / 4.0f;

	FILE* fAdd = fopen("grade.txt", "r+");
	if (fAdd == nullptr)
	{
		fAdd = fopen("grade.txt", "w");
		fclose(fAdd);
		fAdd = fopen("grade.txt", "r+");
	}
	gNumber++;
	fprintf(fAdd, "%d", gNumber);
	fseek(fAdd, 0, SEEK_END);
	fprintf(fAdd, "\n %s %d %d %d %d %d %d %f",
		newData.m_Name,
		newData.m_Age,
		newData.m_Kor,
		newData.m_Eng,
		newData.m_Mat,
		newData.m_Sci,
		newData.m_Total,
		newData.m_Avr);
	fclose(fAdd);

	Load();
	return 1;
}

void Delete()
{
	char Name[10];
	printf("\n 이름 입력 : "); scanf("%s", Name);
	DelLink(FindIndex(Name));
}

int Save()
{
	if (pHead == 0) return -1;
	FILE* fSave = fopen("grade.txt", "r+");

	fprintf(fSave, "%d", gNumber);
	for (Students* group = pHead; group != NULL; group = group->m_Next)
	{
		fprintf(fSave, "\n %s %d %d %d %d %d %d %4.3f",
			group->m_Name,
			group->m_Age,
			group->m_Kor,
			group->m_Eng,
			group->m_Mat,
			group->m_Sci,
			group->m_Total,
			group->m_Avr);
	}
	fclose(fSave);
	return 0;
}

int Load()
{
	AllDelLink();

	FILE* fLoad = fopen("grade.txt", "r");
	if (fLoad == NULL) return -1;
	fscanf(fLoad, "%d", &gNumber);

	for (int Data = 0; Data < gNumber; Data++)
	{
		Students* LoadData = new Students;
		fscanf(fLoad, "\n %s %d %d %d %d %d %d %f",
			LoadData->m_Name,
			&LoadData->m_Age,
			&LoadData->m_Kor,
			&LoadData->m_Eng,
			&LoadData->m_Mat,
			&LoadData->m_Sci,
			&LoadData->m_Total,
			&LoadData->m_Avr);
		Link(LoadData);

	}
	fclose(fLoad);
	return 1;
}

void Link(Students* info)
{
	pHead->m_Next = info;
	info->m_Next = NULL;
}

void SortLink(Students* info)
{
	if (pHead == NULL)
	{
		pHead = info;
		pTail = pHead;
		return;
	}
}

void DelLink(Students* target)
{
	if (target == NULL) return;
	Students* dLink = target->m_Next;
	if (dLink != NULL)
	{
		Students* temp = dLink->m_Next;
		free(dLink);
		target->m_Next = temp;
	}
}

void AllDelLink()
{
	Students* adLink = pHead;
	while (adLink != NULL && adLink->m_Next != NULL)
	{
		DelLink(adLink);
	}
	free(pHead);
	pHead = NULL;
	pPrev = NULL;
}

Students* FindIndex(char* iInfo)
{
	Students* pFind = 0;

	for (Students* pNode = pHead; pNode->m_Next != NULL; pNode = pNode->m_Next)
	{
		if (strcmp(iInfo,pNode->m_Next->m_Name) == 0)
		{
			printf("Find");
			pFind = pNode;
			break;
		}
	}
	if (pFind == 0) return NULL;
	return pFind;
}

Students* FindPrevIndex(Students* newInfo)
{
	if (pHead == NULL || SORTFUNCTION(pHead, newInfo))
	{
		return NULL;
	}

	for (Students* pNode = pHead; pNode != NULL; pNode = pNode->m_Next)
	{
		if (pNode->m_Next == NULL) break;
		if (SORTFUNCTION(pNode->m_Next, newInfo))
		{
			return pNode;
		}
	}
	return NULL;
}

int Ascending(Students* infoA, Students* infoB)
{
	if (infoA->m_Total > infoB->m_Total)
	{
		return 1;
	}
	return 0;
}

int Descending(Students* infoA, Students* infoB)
{
	if (infoA->m_Total < infoB->m_Total)
	{
		return 1;
	}
	return 0;
}