#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

int largest(int x[], int y)
{
	int biggest = x[0];
	for (int count = 0; count < y; count++)
	{
		if (x[count] > biggest)
			biggest = x[count];
	}
	return biggest;
}

int Compute2(int iValueX, int iValueY)
{
	int iAdd = iValueX + iValueY;
	iValueX = iAdd;
	return iAdd;
}

int Compute(int *iValueX, int *iValueY)
{
	int iAdd = *iValueX + *iValueY;
	*iValueX = iAdd;
	return iAdd;
}

char* StringToUpper(char *strList)
{
	int iCount = 0;

	while (strList[iCount++] != 0);

	char* pString = (char*)malloc(sizeof(char)*(iCount));
	int iCnt = 0;
	for (iCnt = 0; iCnt < iCount - 1; iCnt++)
	{
		pString[iCnt] = toupper(strList[iCnt]);
	}
	pString[iCount - 1] = 0;
	return pString;
}

int com(int& num)
{
	num += 10;
	int add = num;
	return add;
}

void SumArray(int iArray[])
{
	for (int i = 0; i < 10; i++)
	{
		iArray[i] += iArray[i + 1];
		int AddAry = iArray[i];
	}
}

char* Fstrcpy(char *str1, const char *str2)
{
//	int num = strlen(str1) > strlen(str2) ? strlen(str1) : strlen(str2);

	int num = strlen(str2);

	char* pStr = (char*)malloc(sizeof(char)*num);

	for (int Cnt = 0; Cnt < num; Cnt++)
	{
		pStr[Cnt] = str2[Cnt];
		str1[Cnt] = pStr[Cnt];
	}
	str1[num] = 0;
	return pStr;
}

//char* Fstrtok(char *str1, const char *str2)
//{
//	
//}

// 仙瑛敗呪

// 18 
// けけ
//   2
//   け
// 36
// けけ
// 4579
// けけ
// 
// けけ