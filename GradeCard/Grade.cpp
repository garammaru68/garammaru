#include "Grade.h"

void Menu()
{
	printf("\n출력(1)\t추가(2)\t수정(3)\t삭제(4)\t저장(5)\t로드(6)\t종료(0) : ");
}

void Screen()
{
	printf("================================================================");
	printf("\n============================ 성적표 ============================");
	printf("\n================================================================");
	printf("\n성명\t나이\t국어\t영어\t수학\t총점\t평균\n");
	
	for (Student* pScreen = nHead->m_Next; pScreen != NULL; pScreen = pScreen->m_Next)
	{
		printf("%s\t%d\t%d\t%d\t%d\t%d\t%3.3f\n",
			pScreen->m_name,
			pScreen->m_age,
			pScreen->m_kor,
			pScreen->m_eng,
			pScreen->m_mat,
			pScreen->m_total,
			pScreen->m_avg);
	}
}

void Add()
{
	Student* newData = 0;
	newData = new Student;
	memset(newData, 0, sizeof(Student));
	printf("\n이름 : "); scanf("%s", newData->m_name);
	printf("\n나이 : "); scanf("%d", &newData->m_age);
	printf("\n국어 : "); scanf("%d", &newData->m_kor);
	printf("\n영어 : "); scanf("%d", &newData->m_eng);
	printf("\n수학 : "); scanf("%d", &newData->m_mat);
	newData->m_total = newData->m_kor + newData->m_eng + newData->m_mat;
	newData->m_avg = newData->m_total / 3.0f;
	Link(newData);
}

void Updata()
{

}

void Delete()
{

}

void Save()
{
	FILE* fSave = NULL;
	fSave = fopen("grade.txt", "w");

	for (Student* sGroup = nHead->m_Next; sGroup != NULL; sGroup = sGroup->m_Next)
	{
		fwrite(sGroup, 1, sizeof(Student), fSave);
	}
	fclose(fSave);
}

void Load()
{
	FILE* fLoad = NULL;
	fLoad = fopen("grade.txt", "r");

	for (Student* lGroup = nHead->m_Next; lGroup != NULL; lGroup = lGroup->m_Next)
	{
		lGroup = new Student;
		size_t size = fread(lGroup, 1, sizeof(Student), fLoad);
	}
	fclose(fLoad);
}

void Initialize()
{
	nHead = new Student;
	memset(nHead, 0, sizeof(Student));
	nTail = nHead;
}

void Clear()
{
	delete nHead;
	nHead = 0;
}

void Link(Student* newNode)
{
	Student* nTemp = nHead->m_Next;
	nHead->m_Next = newNode;
	newNode->m_Next = nTemp;
}

void DelLink(Student* delNode)
{

}

void main()
{
	Initialize();

	int Select;

	while (1)
	{
		//Screen();
		Menu();
		scanf("%d", &Select);
		if (Select == 0) break;
		system("cls");

		switch (Select)
		{
			case SCREEN:
			{
				Screen();
				printf("\n");
			}break;
			case ADD:
			{
				Add();
			}break;
			case UPDATA:
			{
				Updata();
			}break;
			case SAVE:
			{
				Save();
			}break;
			case LOAD:
			{
				Load();
			}break;
		}
	}
	Clear();
}