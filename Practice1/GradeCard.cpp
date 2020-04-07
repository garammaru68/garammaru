
#include "GradeCard.h"
void Initialize()
{
	SORTFUNCTION = Ascending;
}

void main()
{
	Initialize();
	Load();

	int Select = 0;
	
	while (1)
	{
		Menu();
		scanf("%d", &Select);
		if (Select == 0) break;
		system("cls");

		switch (Select)
		{
		case SCREEN:
		{
			Screen();
		}break;
		case ADD:
		{
			Add();
		}break;
		case UPDATA:
		{

		}break;
		case DEL:
		{
			system("cls");
			Screen();
			Delete();
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
	AllDelLink();
}