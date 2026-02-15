#include "game.h"
int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有错，请您重新输入");
			break;
		}
	} while (input);
}