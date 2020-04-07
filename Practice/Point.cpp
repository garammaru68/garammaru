#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
	//// ----------------PART 1----------------
	//printf("\n=========================\n");
	//int *pPoint = (int*)malloc(sizeof(int));
	//*pPoint = 100;

	//printf("%016x번지 : %d\n", pPoint + 0, *(pPoint + 0));

	//free(pPoint);

	//// ----------------PART 2----------------
	//printf("\n=========================\n");
	//int *pPointArray = (int*)malloc(sizeof(int) * 10);
	//for (int iCnt = 0; iCnt < 10; iCnt++)
	//{
	//	pPointArray[iCnt] = iCnt * 10;
	//	printf("\n0x%08x번지 : %d", &pPointArray[iCnt], *(pPointArray + iCnt));
	//}
	//free(pPointArray);

	//// ----------------PART 3----------------
	//printf("\n=========================\n");
	//char* pCharPoint = 0;
	//int iCount = 0;
	//pCharPoint = (char*)malloc(sizeof(char) * 100);
	//do {
	//	int ivalue = _getch();

	//	if (ivalue != 0 && ivalue != 0x00E0)
	//	{
	//		pCharPoint[iCount++] = ivalue;
	//		printf("*");
	//	}
	//} while (pCharPoint[iCount - 1] != '\r');

	//pCharPoint[iCount - 1] = 0;
	//printf("\n0x%08x번지 : %s", pCharPoint, pCharPoint);
	//for (int iCnt = 0; iCnt < iCount; iCnt++)
	//{
	//	printf("\n0x%08X번지 : %c", pCharPoint + iCnt, *(pCharPoint + iCnt));
	//}
	//free(pCharPoint);

	//printf("\n=========================\n");
	//int *pPoint = (int*)malloc(sizeof(int)*2);
	//pPoint[0] = 100;
	//pPoint[1] = 50;

	//printf("%016x번지 : %d\n", pPoint + 0, *(pPoint + 0));
	//printf("%016x번지 : %d\n", pPoint + 1, pPoint[1]);

	//free(pPoint);

	//// ----------------PART 4----------------
	//printf("\n=========================\n");
	//int *lpPoint[10];
	//for (int iCnt = 0; iCnt < 10; iCnt++)
	//{
	//	lpPoint[iCnt] = (int*)malloc(sizeof(int));
	//	*lpPoint[iCnt] = iCnt * 10;
	//	printf("\n0x%08X번지 : %d", lpPoint + iCnt, *lpPoint[iCnt]);
	//}
	//for (int iCnt = 0; iCnt < 10; iCnt++)
	//{
	//	free(lpPoint[iCnt]);
	//}

	//// ----------------PART 5----------------
	//int iValue[3][2] = { { 10,20 },{ 30,40 },{ 50,60 } };
	//for (int iCnt = 0; iCnt < 3; iCnt++)
	//{
	//	printf("\n*(iValue+%d): %p=%d", iCnt, *(iValue + iCnt), *(*(iValue + iCnt) + 0));
	//	printf("\t\tiValue[%d]: %p", iCnt, iValue[iCnt]);
	//}
	//printf("\n");

	//int* pData = iValue[1];
	//*pData++ = *pData + 100;	// 130
	//*pData++ = *pData + 100;	// 140

	//for (int iCnt = 0; iCnt < 3; iCnt++)
	//{
	//	printf("\n*(iValue+%d): %p", iCnt, *(iValue + iCnt));
	//	printf("\t\tiValue[%d]: %p", iCnt, iValue[iCnt]);
	//}
	//printf("\n");

	//pData = iValue[0];
	//int** ppData = &pData;
	//ppData[0][0] = *(*(ppData + 0) + 0) + 200;
	//ppData[0][1] = *(*(ppData + 0) + 1) + 200;

	//for (int iCnt = 0; iCnt < 3; iCnt++)
	//{
	//	printf("\n*(iValue+%d): %p", iCnt, *(iValue + iCnt));
	//	printf("\t\tiValue[%d]: %p", iCnt, iValue[iCnt]);
	//}
	//printf("\n");

	//for (int iCnt = 0; iCnt < 3; iCnt++)
	//{
	//	for (int jCnt = 0; jCnt < 2; jCnt++)
	//	{
	//		printf("\n*(*(iValue+%d)+%d) : %d", iCnt, jCnt, *(*(iValue + iCnt) + jCnt));
	//		printf("\t\t *(iValue[%d]+%d) : %d", iCnt, jCnt, *(iValue[iCnt] + jCnt));
	//	}
	//}

	//// ----------------PART 6----------------
	//printf("\n=======================\n");
	//printf("\n=======이중포인터=========\n");
	//system("cls");
	//int *pPtr;
	//int **ppPtr;
	//int num = 10;
	//pPtr = &num;+		ppPoint	0x00000242bdf9b740 {0x00000242bdf9d9b0 {0}}	int * *

	//ppPtr = &pPtr;
	//printf("%d\n", **ppPtr);

//	// ----------------PART 7----------------
//	unsigned char *array[50];
//	unsigned int size = sizeof(array);
//#ifdef _WIN64
//	printf("\n%d", size);
//	printf("\n64 - bit Size=%d", sizeof(array));
//#else
//	printf("\n32 - bit Size=%d", sizeof(array));
//#endif

	//// ----------------PART 8----------------
	//int **ppPoint = 0;
	//ppPoint = (int **)malloc(sizeof(intptr_t) * 3); //( 1byte = 8bit ) intptr_t = 64bit = 8byte
	//for (int iCnt = 0; iCnt < 3; iCnt++)
	//{
	//	ppPoint[iCnt] = (int *)malloc(sizeof(int) * 3); //12byte
	//}
	//for (int iCnt = 0; iCnt < 3; iCnt++)
	//{
	//	for (int jCnt = 0; jCnt < 3; jCnt++)
	//	{
	//		ppPoint[iCnt][jCnt] = iCnt * 3 + jCnt;
	//	}
	//}

	//for (int iCnt = 0; iCnt < 3; iCnt++)
	//{
	//	printf("\n");
	//	for (int jCnt = 0; jCnt < 3; jCnt++)
	//	{
	//		printf("[%d,%d]=%d:%d\t", iCnt, jCnt, ppPoint[iCnt][jCnt], *(ppPoint[iCnt] + jCnt));
	//	}
	//}

	//for (int iCnt = 0; iCnt < 3; iCnt++)
	//{
	//	free(ppPoint[iCnt]);
	//}
	//free(ppPoint);

	// ----------------PART 9----------------
	char *pArray[6];
	for (int iCnt = 0; iCnt < 6; iCnt++)
	{
		pArray[iCnt] = (char*)malloc(sizeof(char) * 4);
	}

	for (int iCnt = 0; iCnt < 6; iCnt++)
	{
		for (int jCnt = 0; jCnt < 3; jCnt++)
		{
			pArray[iCnt][jCnt] = 65 + iCnt * 3 + jCnt;
		}
		pArray[iCnt][3] = 0;
	}

	for (int iCnt = 0; iCnt < 6; iCnt++)
	{
		printf("\n");
		printf("[%d]=%s", iCnt, pArray[iCnt]);
	}

	for (int iCnt = 0; iCnt < 6; iCnt++)
	{
		free(pArray[iCnt]);
	}
	_getch();

}