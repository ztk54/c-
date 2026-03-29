#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//int main();
//void print(int n);
//int main()
//{
//	printf("需要打印多大的\n");
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//void print(int n)
//{
//	for (int i = 1;i <= n;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			printf("%d*%-2d=%-3d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}

//int main();
//bool is_prime(int n);
//int main()
//{
//	int count = 0;
//	for (int i = 100;i <= 200;i++)
//	{
//		if (is_prime(i))
//		{
//			count++;
//		}
//	}
//	printf("100到200之间有%d个素数\n", count);
//	return 0;
//}
//
//bool is_prime(int n)
//{
//	if (n <= 1)return false;
//	if (n <= 3)return true;
//	if (n % 2 == 0 || n % 3 == 0)return false;
//	int limit = sqrt(n);
//	for (int i = 5;i <= limit;i += 6)
//	{
//		if (n % i == 0 || n % (i + 2) == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}

//void Init(int arr[], int sz);
//void Print(int arr[], int sz);
//void Reverse(int arr[], int sz);
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Init(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//void Init(int arr[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	for (int i = sz - 1;i >=0;--i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
