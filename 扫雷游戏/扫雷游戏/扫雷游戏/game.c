#include "game.h"

void menu()
{
	printf("************************\n");
	printf("******1. 开始游戏********\n");
	printf("******0. 退出游戏********\n");
	printf("************************\n");
}

void game()
{
	srand((unsigned int)time(NULL));
	char Mine[ROWS][RANKS];
	char show[ROWS][RANKS];
	InitBoard(Mine, ROWS, RANKS, '0');
	InitBoard(show, ROWS, RANKS, '*');
	set_my_mine(Mine, ROW, RANK);
	display_board(show, ROW, RANK);
	Find_Mine(Mine, show, ROW, RANK);
}

void InitBoard(char board[ROWS][RANKS], int rows, int ranks, char ch)
{
	for (int i = 0;i < rows;i++)
	{
		for (int j = 0;j < ranks;j++)
		{
			board[i][j] = ch;
		}
	}
}

void display_board(char board[ROWS][RANKS], int row, int rank)
{
	for (int i = 0;i <= rank;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1;i <= row;i++)
	{
		printf("%d ", i);
		for (int j = 1;j <= rank;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void set_my_mine(char board[ROWS][RANKS], int row, int rank)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % rank + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

void Find_Mine(char mine[ROWS][RANKS], char show[ROWS][RANKS], int row, int rank)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * rank - COUNT)
	{
		int check = scanf("%d %d", &x, &y);
		printf("请输入你要排查的坐标\n");
		if (check!= 2)
		{
			printf("输入非法，请重新输入\n");
			while (getchar() != '\n');
			continue;
		}
		if (x >= 1 && x <= row && y >= 1 && y <= row)
		{
			if (mine[x][y] == '1')
			{
				printf("很抱歉，你被炸死了\n");
				display_board(mine, ROW, RANK);
				break;
			}
			else
			{
				if (show[x][y] == '*')
				{
					Expand(mine, show, x, y, &win);
					display_board(show, ROW, RANK);
				}
				else
				{
					printf("该地方已经排查过了，请重新排查\n");
				}
			}
		}
		else
		{
			printf("输入坐标不合法，请重新输入\n");
		}
	}
	if (win == row * rank - COUNT)
	{
		printf("恭喜你，排雷成功\n");
	}
}

void Expand(char mine[ROWS][RANKS], char show[ROWS][RANKS], int x, int y, int* win)
{
	if (x < 1 || x > ROW || y < 1 || y > RANK)
		return;
	if (show[x][y] != '*')
		return;

	int count = get_my_mine(mine, x, y);
	show[x][y] = count + '0';
	(*win)++;

	if (count == 0)
	{
		Expand(mine, show, x - 1, y - 1, win);
		Expand(mine, show, x - 1, y, win);
		Expand(mine, show, x - 1, y + 1, win);
		Expand(mine, show, x, y - 1, win);
		Expand(mine, show, x, y + 1, win);
		Expand(mine, show, x + 1, y - 1, win);
		Expand(mine, show, x + 1, y, win);
		Expand(mine, show, x + 1, y + 1, win);
	}
}

int get_my_mine(char mine[ROWS][RANKS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] + mine[x - 1][y] - 8 * '0';
}
