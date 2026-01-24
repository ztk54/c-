//#define _CRT_SECURE_NO_WARNINGS
//int Coconut(int n);
//#include <stdio.h>
//int main()
//{
//	printf("一共有%d个椰子", Coconut(5));
//	return 0;
//}
//
//// 我的解法，实际上还有一些问题，例如y是从5*x+1开始取值的
//int Coconut(int n)
//{
//	double x, y;
//	for (x = 1;;x++)
//	{
//		int times = n;
//		double tem_x = x;//由于x在for循环中不断进行变化，因此引入临时变量来储存x的值。
//		do
//		{
//			y = (tem_x * 5.0) / 4 + 1;
//			if (y != (int)y) //  这里用于判断y是否为一个整数。
//			{
//				break;
//			}
//			times--;
//			tem_x = y;
//		} while (times != 0);
//		if (times == 0)
//		{
//			return (int)y;
//		}
//	}
//}
//
////标准答案
////int Coconut(int n)
////{
////	int i = 1;
////	float x = 1, y;
////	y = n * x + 1;
////	do {
////		y = y * n / (n - 1) + 1;
////		i++;
////		if (y != (int)y)
////		{
////			x = x + 1;
////			y = n * x + 1;
////			i = 1;
////		}
////	} while (i < n);
////	return (int)y;
//////}