#include "head.h"

//���� ������� 1�� ����
//�̵��� ������ �밢��
//���� ����� ������ ���� �ݴ�������
//�밢���� ���ڰ� ������ �ٷιؿ�
//�߾Ӱ� n/2
// -y = x, 

void main()
{
	int xy = 0;

	while (xy % 2 != 1)
	{
		scanf_s("%d", &xy);
		system("cls");
	}
	printf("ũ�� : %d X %d\n", xy, xy);

	int **square = 0;
	square = (int **)malloc(sizeof(intptr_t) * xy);

	for (int cnt = 0; cnt < xy; cnt++)
	{
		square[cnt] = (int *)malloc(sizeof(int) * xy);
	}

	int x = xy / 2;
	int y = 0;
	int maxNum = xy * xy;
	//int start = xy / 2;

	for (int num = 1; num <= maxNum; num++)
	{
		//if (num == 1) x = start;
		square[y][x] = num;
		x++;
		y--;
		if (y == -1 && x == xy + 1) y += 2, x -= 1;
		else if (&square[y][x] != 0) y += 2, x -= 1;
		else if (y == -1) y = xy - 1;
		else if (x == xy) x = 0;
	}

	for (int yLine = 0; yLine < xy; yLine++)
	{
		printf("\n");
		for (int xLine = 0; xLine < xy; xLine++)
		{
			printf("%d\t", square[yLine][xLine]);
		}
	}

	for (int cnt = 0; cnt < xy; cnt++)
	{
		free(square[cnt]);
	}
	
}