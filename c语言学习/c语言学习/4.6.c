//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int choose = 0;
//	scanf("%d", &choose);
//	printf("这个数是%d", Fib(choose));
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 1;
//	int c;
//	int choose = 0;
//	scanf("%d", &choose);
//	if (choose == 1 || choose == 2)
//	{
//		c = 1;
//	}
//	for (int i = 3;i <= choose;i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("这个数字是%d", c);
//	return 0;
//}

//int power(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * power(n, k - 1);
//	}
//	if (k == 0)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	printf("n的k次方为%d", power(n, k));
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	return DigitSum(n % 10) + DigitSum(n / 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("相加为%d", DigitSum(n));
//	return 0;
//}

//int Fac(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("阶乘为%d\n", Fac(n));
//	int sum = 1;
//	for (int i = 1;i <= n;i++)
//	{
//		sum *= i;
//	}
//	printf("阶乘为%d\n", sum);
//	return 0;
//}

//void printDigit(int n)
//{
//	if (n < 10)
//	{
//		printf("%d\n", n);
//		return;
//	}
//	printDigit(n / 10);
//	printf("%d\n", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printDigit(n);
//	return 0;
//}