//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//九九乘法表
//int main()
//{
//	for (int i = 1;i <=9;i++)
//	{
//		for (int j = 1;j <=i;j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}

//找最大值
//int main()
//{
//	int a[10] = { 0 };
//	printf("请输入数据");
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int max = a[0];
//	for (int i = 0;i < 10;i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];			
//		}
//	}
//	printf("最大值为%d", max);
//}


//int main()
//{
//	double sum = 0.0;
//	int sign = 1;
//	for (int i = 1;i <= 100;i++)
//	{
//		sum += sign * 1.0 / i;
//		sign = -sign;
//	}
//	printf("结果为%f", sum);
//}

//找9的个数
//int main()
//{
//	int count = 0;
//	for (int i = 1;i <= 100;i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("一共出现了%d次", count);
//}

//数学计算题
//int main()
//{
//	int flag = 1;
//	for (int i = 101;i < 200;i = i + 2)
//	{
//		flag = 1;//这里一定要重置flag的值，不然不能正确运行结果
//		for (int j = 2;j < sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//找闰年
//int main()
//{
//	int count = 0;
//	for (int i = 1000;i <= 2000;i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//			if (count % 10 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//}

//最大公约数
//int main()
//{
//	int a, b, tem;
//	scanf("%d %d", &a, &b);
//	while (b!=0)
//	{
//		tem = a % b;
//		a = b;
//		b = tem;
//	}
//	printf("%d", a);
//	return 0;
//}