#include <stdio.h>

void main()
{
	int count = 1;
	for (int line = 0; line < 5; line++)
	{
		for (int num = 0; num < 9; num++)
		{
			if (count % 2 == 0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			count++;
		}
		printf("\n");
	}
}