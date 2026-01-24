#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main();
#define N 40
int Found_the_max(int score[], int i);
int Found_the_min(int score[], int i);
void Change(int score[], int m, int n, int i);
int main()
{
	int score[N];
	int i = -1;
	printf("请输入整数数据\n");
	do
	{
		i++;
		float temp;
		if (scanf("%f", &temp) != 1)
		{
			printf("输入有错，请重新输入\n");
			while (getchar() != '\n');
			i--;
			continue;
		}
		if (fabs(temp - (int)temp) > 1e-6)
		{
			printf("请输入整数\n");
			i--;
			continue;
		}
		score[i] = (int)temp;
	} while (score[i] >= 0);
	int m = Found_the_max(score, i);
	int n = Found_the_min(score, i);
	Change(score, m, n, i);
	return 0;
}

int Found_the_max(int score[], int i)
{
	int best_turn = 0;
	int temp = score[0];
	for (int m = 0;m < i;m++)
	{
		if (score[m] < score[m + 1])
		{
			temp = score[m + 1];
			best_turn = m;
		}
	}
	return best_turn;
}
int Found_the_min(int score[], int i)
{
	int min_turn = 0;
	int temp = score[0];
	for (int m = 0;m < i;m++)
	{
		if (score[m] > score[m + 1])
		{
			temp = score[m + 1];
			min_turn = m;
		}
	}
	return min_turn;
}

void Change(int score[], int m, int n, int i)
{
	int temp;
	temp = score[m];
	score[m] = score[n];
	score[n] = temp;
	for (int j = 0;j < i;j++)
	{
		printf("%d\n", score[j]);
	}
}
