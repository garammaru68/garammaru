#include <stdio.h>

void main()
{
	//for (int i = 0; i < 127; i++)
	//{
	//	printf("%d", i);
	//	printf("\t%c", i);
	//}
	//printf("\n");

	int iValue = 10;
	for (int j = 7; j >= 0; --j)
	{
		printf("%d", (iValue >> j) & 1);
	}

	printf("\n");

	iValue = -10;
	for (int j = 7; j >= 0; --j)
	{
		printf("%d", (iValue >> j) & 1);
	}
}