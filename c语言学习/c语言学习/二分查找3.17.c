//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main();
//int bin_search(int arr[], int left, int right, int key);
//int main()
//{
//	int arr[20];
//	int key = 0;
//	int right = 0;
//	int left = 0;
//	printf("请输入不超过20个的升序数字，输入-1结束数输入\n");
//	for (int i = 0;i < 20;i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] == -1)
//		{
//			break;
//		}
//	}
//	printf("请输入你想要查找的数字\n");
//	scanf("%d", &key);
//	for (int i = 0;i < 20;i++)
//	{
//		if (arr[i] == -1)
//		{
//			break;
//		}
//		else
//		{
//			right++;
//		}
//	}
//	printf("有%d个数字\n", right);
//	int r = bin_search(arr, left, right - 1, key);
//	if (r == -1)
//	{
//		printf("没有你需要的数字\n");
//	}
//	else
//	{
//		printf("这个数字的下标为%d", r);
//	}
//	return 0;
//}
//
//int bin_search(int arr[], int left, int right, int key)
//{
//	int flag = 0;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag)
//	{
//		return mid;
//	}
//	else
//	{
//		return -1;
//	}
//}
