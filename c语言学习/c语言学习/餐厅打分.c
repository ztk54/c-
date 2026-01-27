//我的解答版本
//给出统计平均分数，最高分数，众数用于研究分析
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 40
#define M 11
int main();
void Output(int evaluate[], int m);
int Intput(int evaluate[]);
void statistics(int evaluate[], int m);
int main()
{
	int evaluate[N];
	int m = Intput(evaluate);
	Output(evaluate, m);
	statistics(evaluate, m);
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

void statistics(int evaluate[], int m)
{
	//找众数,这里犯了个极为严重的错误，没有对score数组进行初始化
	int score[M] = { 0 };
	for (int i = 0;i < m;i++)
	{
		switch (evaluate[i])
		{
		case 1:score[1]++;break;
		case 2:score[2]++;break;
		case 3:score[3]++;break;
		case 4:score[4]++;break;
		case 5:score[5]++;break;
		case 6:score[6]++;break;
		case 7:score[7]++;break;
		case 8:score[8]++;break;
		case 9:score[9]++;break;
		case 10:score[10]++;break;
		}
	}
	int the_best_frequency = score[1];
	int the_number;
	for (int i = 2;i < 11;i++)
	{
		if (the_best_frequency < score[i])
		{
			the_best_frequency = score[i];
			the_number = i;
		}
	}
	//找中位数,思路：对evaluate总数组进行一个冒泡排序，然后就有一张总表可以查找每个位置对应的评分了
	double middle;
	int the_turn_evaluate[N];
	for (int i = 0;i < m;i++)
	{
		the_turn_evaluate[i] = evaluate[i];
	}
	//最开始这里冒泡排序犯错了，发生了数组越界访问的情况,起初j-1会访问-1这个不存在的下标
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < m - 1 - i;j++)
		{
			if (the_turn_evaluate[j] > the_turn_evaluate[j + 1])
			{
				int temp = the_turn_evaluate[j];
				the_turn_evaluate[j] = the_turn_evaluate[j + 1];
				the_turn_evaluate[j + 1] = temp;
			}
		}
	}
	int the_sum_frequency = 0;
	for (int i = 1;i < 11;i++)
	{
		the_sum_frequency += score[i];
	}
	if (the_sum_frequency % 2 == 0)
	{
		middle = (the_turn_evaluate[the_sum_frequency / 2 - 1] + the_turn_evaluate[the_sum_frequency / 2]) / 2.0;
	}
	else if (the_sum_frequency % 2 == 1)
	{
		middle = the_turn_evaluate[(the_sum_frequency + 1) / 2];
	}
	//求出平均数
	double the_sum_score = 0;
	for (int i = 0;i < m;i++)
	{
		the_sum_score += the_turn_evaluate[i];
	}
	double aver = the_sum_score / m;
	printf("平均数为%lf，中位数为%lf,众数为%d\n", aver, middle, the_number);
}
