//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void my_qsort(void* base, int num, int size, int (*compare)(const void*, const void*));
//void swap(char* x, char* y, int width);
//int compare_int(const void* x, const void* y);
//int main()
//{
//	int arr[] = { 6,4,2,1,9,8,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), compare_int);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//void my_qsort(void* base, int num, int size, int(*compare)(const void*, const void*))
//{
//	for (int i = 0;i < num;i++)
//	{
//		int flag = 0;
//		for (int j = 0;j < num - i - 1;j++)
//		{
//			if (compare((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//
//void swap(char* x, char* y, int width)
//{
//	for (int i = 0;i < width;i++)
//	{
//		char tem = *x;
//		*x = *y;
//		*y = tem;
//		x++;
//		y++;
//	}
//}
//
//int compare_int(const void* x, const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
