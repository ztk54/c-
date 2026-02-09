#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu();
void game();
int main()
{
	srand((unsigned int)time(NULL));
	int choice = 1;
	do
	{
		menu();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default :
			printf("输入错误");
		}
	} while (choice);
}
void menu()
{
	printf("*****************************\n");
	printf("*********输入1开始游戏********\n");
	printf("*********输入0退出游戏********\n");
	printf("*****************************\n");
}

void game()
{
	int count = 0;
	do
	{
		printf("请问您要尝试几次\n");
		if (scanf("%d", &count) != 1)
		{
			printf("输入有错，请您重新输入\n");
			while (getchar() != '\n');//清除缓冲区
			continue;
		}
	} while (count!=1);
	int number = rand() % 100 + 1;
	do
	{
		int guess = 0;
		printf("请输入您的猜测\n");
		scanf("%d", &guess);
		if (guess > number)
		{
			printf("您猜大了\n");
		}
		else if (guess == number)
		{
			printf("您猜对了\n");
		}
		else
		{
			printf("您猜小了\n");
		}
		count--;
	} while (count);
	if (count == 0)
	{
		printf("很遗憾，您输了，这个数字是%d", number);
	}
}