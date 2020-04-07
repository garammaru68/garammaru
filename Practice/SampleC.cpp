#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int iValue = 0;
	int iCount = 0;

	srand(time(NULL));

	for (; ;)
	{
		iValue = rand() % 101;
		if (iValue == 77)
		{
			printf("\n %d번 반복되었다", iCount);
			break;
		}
		iCount++;
	}

	iCount = 0;
	while (1)
	{
		iValue = rand() % 101;
		if (iValue == 77)
		{
			printf("\n %d번 반복되었다", iCount);
			break;
		}
		iCount++;
	}

	iCount = 0;
	do
	{
		iValue = rand() % 101;
		if (iValue == 77)
		{
			printf("\n %d번 반복되었다.", iCount);
			break;
		}
		iCount++;
	} while (1);
}