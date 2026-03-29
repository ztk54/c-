//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int compare_int(const void* x, const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
//int main()
//{
//	int arr[] = { 3,2,4,5,2,6,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare_int);
//	return 0;
//}

//int compare_float(const void* x, const void* y)
//{
//	if (*(float*)x < *(float*)y)
//		return -1;
//	if (*(float*)x > *(float*)y)
//		return 1;
//	if (*(float*)x == *(float*)y)
//		return 0;
//}
//int main()
//{
//	float arr[] = { 6.8,2.3,1.2,3.4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare_float);
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//
//int compare_by_name(const void* x, const void* y)
//{
//	return strcmp(((Stu*)x)->name, ((Stu*)y)->name);
//}
//
//int compare_by_age(const void* x, const void* y)
//{
//	return ((Stu*)x)->age - ((Stu*)y)->age;
//}
//
//int main()
//{
//	Stu arr[] = { {"zhangsan",14},{"lisi",12},{"wangwu",18} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare_by_age);
//	return 0;
//}