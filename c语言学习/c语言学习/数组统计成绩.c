//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#define N 40
//int main();
//int Average(int score[],int n);
//int Readscore(int score[]);
//int GetAboveAver(int score[], int n);
//int Found_The_Best_score(int score[],int n);
//int main()
//{
//	int score[N], m, n;
//	n = Readscore(score);
//	printf("输入学生人数为%d\n", n);
//	m = GetAboveAver(score, n);
//	if (m != -1) 
//	{
//		printf("高于平均成绩的学生有%d\n", m);
//	}
//	Found_The_Best_score(score, n);
//	return 0;
//}
//int Readscore(int score[])
//{
//	int i = -1;
//	float temp;//这里创建这个变量是为了增加程序的健壮性，避免输入浮点数和不合法的输入方法
//	do 
//	{
//		i++;
//		printf("请输入第%d个学生成绩", i + 1);
//		if (scanf("%f", &temp) != 1) 
//		{
//			printf("输入有错，请重新输入\n");
//			while(getchar() != '\n');
//			i--;
//			continue;
//		}
//		if (fabs(temp - (int)temp) > 1e-6)
//		{
//			printf("请输入整数\n");
//			i--;
//			continue;
//		}
//		score[i] = (int)temp;
//	} while (score[i] >= 0);
//	return i;
//}
//
//int Average(int score[],int n)
//{
//	double sum = 0;
//	int i;
//	for (i = 0;i < n;i++) 
//	{
//		sum += score[i];
//	}
//	return n > 0 ? sum / n : -1;
//}
//
//
//int GetAboveAver(int score[], int n)
//{
//	double aver = Average(score, n);
//	int i, m=0;
//	for (i = 0;i < n;i++) 
//	{
//		if (score[i] > aver) 
//		{
//			m++;
//		}
//	}
//	return m;
//}
//
//int Found_The_Best_score(int score[],int n)
//{
//	
//	int Best_score = score[0];
//	int temp;
//	for (int i = 0;i < n;i++) 
//	{
//		if (score[i] < score[i + 1]) 
//		{
//			Best_score = score[i + 1];
//		}
//	}
//	printf("the best score is%d", Best_score);
//}
