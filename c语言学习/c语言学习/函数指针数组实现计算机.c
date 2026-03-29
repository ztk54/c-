//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//void menu()
//{
//	printf("******0.退出******\n");
//	printf("******1.乘法******\n");
//	printf("******2.除法******\n");
//	printf("******3.加法******\n");
//	printf("******4.减法******\n");
//}
//int main()
//{
//	int intput = 0;
//	int x = 0, y = 0, r = 0;
//	int(*arr[5])(int x, int y) = { NULL,Mul,Div,Add,Sub };
//	do
//	{
//		menu();
//		printf("请做出你的选择\n");
//		scanf("%d", &intput);
//		if (intput >= 1 && intput <= 4)
//		{
//			printf("请输入两个整数\n");
//			scanf("%d %d", &x, &y);
//			r = arr[intput](x, y);
//			printf("结果为%d", r);
//		}
//		else if(intput==0)
//		{
//			break;
//		}
//		else
//		{
//			printf("选择出错\n");
//		}
//	} while (intput);
//	return 0;
//}