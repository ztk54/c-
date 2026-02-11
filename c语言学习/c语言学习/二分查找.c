#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1,3,4,6,8,12,15,16,18,19,20 };
	int left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
	int flag = 0;
	int number = 1;
	printf("请您输入您想查找的数据\n");
	scanf("%d", &number);
	while (left <= right)
	{
		int mid = (left + right) / 2;
			if (arr[mid] > number)
			{
				right = mid - 1;
			}
			else if (arr[mid] < number)
			{
				left = mid + 1;
			}
			else
			{
				printf("找到了，下标为：%d\n", mid);
				flag = 1;
				break;
			}
	}
	if (flag == 0)
	{
		printf("找不到这个数字\n");
	}
	return 0;
}