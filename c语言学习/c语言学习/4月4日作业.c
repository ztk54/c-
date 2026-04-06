#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//int main()
//{
//	int money = 0;
//	printf("请输入初始金额\n");
//	scanf("%d", &money);
//	int total = money;
//	int empty = total;
//	while (empty >= 2)
//	{
//		int exchange = empty / 2;
//		total += exchange;
//		empty = empty % 2 + exchange;
//	}
//	printf("可以喝%d瓶", total);
//	return 0;
//}

//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int arr[13][13];
//	for (int i = 0;i < 13;i++)
//	{
//		for (int j = 0;j < 13;j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//	for (int i = 0;i < 13;i++)
//	{
//		for (int j = max(6 - i, i - 6);j <=12 - max(6 - i, i - 6);j++)
//		{
//			arr[i][j] = '*';
//		}
//	}
//	for (int i = 0;i < 13;i++)
//	{
//		for (int j = 0;j < 13;j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int is_shuixian(int n)
//{
//	int tem1 = n;
//	int tem2 = n;
//	int count = 0;
//	int number = 0;
//	while (tem1)
//	{
//		tem1 /= 10;
//		count++;
//	}
//	while (tem2)
//	{
//		number += my_pow(tem2 % 10, count);
//		tem2 /= 10;
//	}
//	if (number == n)
//		return 1;
//	else
//		return 0;
//}
//
//int my_pow(int x, int n)//x的n次方
//{
//	int num = 1;
//	for (int i = 1;i <= n;i++)
//	{
//		num = num * x;
//	}
//	return num;
//}
//
//int main()
//{
//	int count = 0;
//	int j = 0;
//	for (int i = 0;i <= 100000;i++)
//	{
//		j = is_shuixian(i);
//		if (j == 1)
//		{
//			printf("%d ", i);
//			count++;
//			if (count % 5 == 0 && count != 0)
//			{
//				printf("\n");
//			}
//		}
//		if (i == 100000)
//		{
//			printf("\n");
//		}
//	}
//	printf("一共有%d个水仙花数\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0, sum = 0;
//	scanf("%d", &a);
//	int tem = a;
//	for (int i = 1;i <= 5;i++)
//	{
//		sum += a;
//		a = a * 10 + tem;
//	}
//	printf("和为%d", sum);
//	return 0;
//}