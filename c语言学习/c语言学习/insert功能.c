#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 40
int compare(const int* a, const int* b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	int a[N] = { 0 };
	int i = 0;
	printf("请输入不超过20个数据,当输入-1时候结束输入\n");
	for (i = 0;i < 20;i++)
	{
		if (scanf("%d", &a[i]) != 1)
		{
			printf("输入错误，请您重新输入\n");
			i--;
		}
		if (a[i] == -1)	break;
	}
	qsort(a, i, sizeof(int), compare);
	printf("升序的数据如下\n");
	for (int j = 0;j < i;j++)
	{
		printf("第%d个数据是%d\n", j + 1, a[j]);
	}
	printf("您想在第几个位置插入数据\n");
	int insert_position, insert_number;
	scanf("%d", &insert_position);
	printf("您想在这个地方输入什么数据\n");
	scanf("%d", &insert_number);
	for (int j = i-1;j >=insert_position-1;j--)
	{
		a[j + 1] = a[j];
	}
	a[insert_position-1] = insert_number;
	for (int j = 0;j < i + 1;j++)
	{
		printf("插入后的数组如下\n");
		printf("第%d个数据是%d\n", j+1, a[j]);
	}
}