#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void output(int a[]);
//int main()
//{
//	int a[10] = { 0 };
//	printf("请输入成绩\n");
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	double sum = 0.0;
//	for (int i = 0;i < 10;i++)
//	{
//		sum += a[i];
//	}
//	printf("平均成绩为%f\n", sum/10.0);
//}

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 11,12,13,14,15,16,17,18,19,20 };
	for (int i = 0;i < 10;i++)
	{
		int tem = a[i];
		a[i] = b[i];
		b[i] = tem;
	}
	printf("交换后为： \n");
	printf("数组a：\n");
	output(a);
	printf("数组b:\n");
	output(b);
}

void output(int a[])
{
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
