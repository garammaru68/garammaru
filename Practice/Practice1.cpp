#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "head.h"

#define MAX 10

void main()
{
	//// ------- 1 -------
	//int array[MAX], count;
	//for (count = 0; count < MAX; count++)
	//{
	//	printf("Enter Number :");
	//	scanf("%d", &array[count]);
	//}
	//printf("\n\n Largest value = %d", largest(array, MAX));

	//int iArray[] = { 10,20,30,40,50,60 };
	//int iSize1 = sizeof(iArray);
	//int iSize2 = sizeof(iArray) / sizeof(iArray[0]);
	//int iCount = _countof(iArray);
	//printf("%d", iCount);


	//// ------- 2 -------
	//char *test[5];

	//for (int cnt = 0; cnt < 5; cnt++)
	//{
	//	test[cnt] = (char*)malloc(sizeof(char)*2);
	//}

	//for (int cnt = 0; cnt < 5; cnt++)
	//{
	//	for (int icnt = 0; icnt < 1; icnt++)
	//	{
	//		test[cnt][icnt] = 97 + cnt;
	//	}
	//	test[cnt][1] = 0;
	//}

	//for (int cnt = 0; cnt < 5; cnt++)
	//{
	//	printf("%s\n", StringToUpper(test[cnt]));
	//}
	//for (int cnt = 0; cnt < 5; cnt++)
	//{
	//	free(test[cnt]);
	//}


	//// ------- 3 -------
	//int a = 5;
	//int b = 3;
	//int c = 8;
	////Compute2(a, b);
	//printf("%d", Compute2(a,b));
	//printf("%d", a);
	//printf("%d", Compute2(a,c));


	//// ------- 4 -------
	//int array[] = { 1,2,3,4,5,6,7,8,9 };
	//printf("%d", SumArray(array[]));


	//// ------- 5 (strcpy) -------
	//char Tstr2[] = "hijklmnopqr";
	//int space = strlen(Tstr2) + 1;
	//char *Tstr1 = (char*)malloc(sizeof(char)*space);
	//
	//Fstrcpy(Tstr1,Tstr2);
	//printf("%s", Tstr1);

	char pch[] = "make-game,play-game";
	char tok[] = ",-";
	char *result = strtok(pch, tok);

	while (result != NULL)
	{
		printf("%s\n", result);
		result = strtok(NULL, tok);
	}
	free(result);
	getchar();
}