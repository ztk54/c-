//我的解答版本
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 40
void Output(int evaluate[], int m);
int Intput(int evaluate[]);
int main()
{
	int evaluate[N];
	int m = Intput(evaluate);
	Output(evaluate, m);
	return 0;
}

void Output(int evaluate[], int m)
{
	printf("Grade   Count   Histogram\n");
	for (int i = 0;i < m;i++)
	{
		printf("%d\t%d\t", i + 1, evaluate[i]);
		for (int j = 0;j < evaluate[i];j++)
		{
			if (evaluate[i] - j == 1)
			{
				printf("*\n");
			}
			else
			{
				printf("*");
			}
		}
	}
}

int Intput(int evaluate[])
{
	int i = 0;
	int order = 1;
	do
	{
		printf("请您决定是否继续评分，输入1继续评分，输入0退出评分系统\n");
		scanf("%d", &order);
		if (order == 0)
		{
			break;
		}
		printf("请输入第%d人的评分:\n", i + 1);
		scanf("%d", &evaluate[i]);
		printf("第%d个人的评分为%d\n", i + 1, evaluate[i]);
		if ((evaluate[i] > 10) || (evaluate[i] < 0))
		{
			printf("评分错误，请重新进行输入评分\n");
			continue;
		}
		i++;
		if (i == 40)
		{
			printf("所有的评分已录入\n");
			break;
		}
	} while (i < 40);
	return i;
}
