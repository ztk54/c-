//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
	/*int num = 10;
	int r = num << 1;
	printf("r=%d\n", r);
	printf("num=%d", num);
	return 0;*/
	//int num = 0;
	//scanf("%d", &num);
	//int count = 0;
	//for (int i = 0;i < 32;i++)
	//{
	//	if (((num >> i)&1) == 1)
	//	{
	//		count++;
	//	}
	//}
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 10;
//	char b = 120;
//	char c = a + b;
//	printf("%d\n", c);
//}

//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		int flag = 1;
//		for (int j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8 };
//	int arr2[] = { 2,3,4,5,6,7,8,9 };
//	int arr3[] = { 3,3,5,6,7,8,9,8 };
//	int *arr[] = { arr1,arr2,arr3 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz2;i++)
//	{
//		for (int j = 0;j < sz1;j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	char* str3 = "hello world";
//	char* str4 = "hello world";
//	if (str1 == str2)
//	{
//		printf("str1=str2\n");
//	}
//	else
//	{
//		printf("str1!=str2\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3=str4\n");
//	}
//	else
//	{
//		printf("str3!=str4\n");
//	}
//}

//void print(int (*p)[5],int r,int c)
//{
//	for (int i = 0;i < r;i++)
//	{
//		for (int j = 0;j < c;j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);
//	return 0;
//}