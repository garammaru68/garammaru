#include "OmokHead.h"

void GotoXY(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void main()
{
	//for (int i = 0; i < 19; i++)
	//{
	//	for (int j = 0; j < 19; j++)
	//	{
	//		board[i][j] = 0;
	//	}
	//}

	// 보드판
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			if (i == 0)
			{
				if (j == 0) printf("┌");
				else if (j == 18) printf("┐");
				else printf("┬");
			}

			else if (i == 18)
			{
				if (j == 0) printf("└");
				else if (j == 18) printf("┘");
				else printf("┴");
			}

			else if (j == 0) printf("├");
			else if (j == 18) printf("┤");
			else printf("┼");
		}
		printf("\n");
	}
	// 커서
	bool play = true;

	while (play)
	{
		switch (_getch())
		{
		case LEFT:
		{
			if (cursorX > 0)
			{
				cursorX -= 2;
				GotoXY(cursorX, cursorY);
			}
			break;
		}
		case RIGHT:
		{
			if (cursorX < 36)
			{
				cursorX += 2;
				GotoXY(cursorX, cursorY);
			}
			break;
		}
		case UP:
		{
			if (cursorY > 0)
			{
				cursorY -= 1;
				GotoXY(cursorX, cursorY);
			}
			break;
		}
		case DOWN:
		{
			if (cursorY < 18)
			{
				cursorY += 1;
				GotoXY(cursorX, cursorY);
			}
			break;
		}
		case ENTER:
		{
			if (board[cursorX][cursorY] != 0) break;
			if (!player)
			{
				board[cursorX][cursorY] = 2;
				player = true;
				printf("○");
			}
			else
			{
				board[cursorX][cursorY] = 1;
				player = false;
				printf("●");
			}
		}
		}
	}
	int black;
	int white;
	int turn = 1;



}

