//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
	//单身狗解法
	//int arr[] = { 1,2,3,4,5,1,2,3,4 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int sum = 0;
	//for (int i = 0;i < sz;i++)
	//{
	//	sum ^= arr[i];
	//}
	//printf("单身狗为%d", sum);

	//不使用tem交换两个变量
	//int a = 5, b = 4;
	//b = a ^ b;
	//a = a ^ b;
	//b = a ^ b;
	//printf("%d %d", a, b);

	//统计二进制中1的位数
	//int a = 15, count = 0;
	//for (int i = 0;i < 32;i++)
	//{
	//	if (((a >> i) & 1) == 1)
	//	{
	//		count++;
	//	}
	//}
	//printf("1的个数为%d", count);

	//int num = 0;
	//scanf("%d", &num);
	//printf("偶数序列\n");
	//for (int i = 30;i >= 0;i -= 2)
	//{
	//	int bit = (num >> i) & 1;
	//	printf("%d", bit);
	//}
	//printf("\n");
	//printf("奇数序列\n");
	//for (int i = 31;i >= 1;i -= 2)
	//{
	//	int bit = (num >> i) & 1;
	//	printf("%d", bit);
	//}
	//printf("\n");

//	int m = 0, n = 0, count = 0;
//	scanf("%d %d", &m, &n);
//	int tem = m ^ n;
//	while (tem)
//	{
//		tem = tem & (tem - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}