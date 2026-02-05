#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int Creat_the_number(int real_digits[]);
int Check_the_number(int n,int guess_digits[]);
int main()
{
	int real_digits[4],guess_digits[4];
	int the_real_number=Creat_the_number(real_digits);
	printf("你想猜几次");
	int wanted_count = 0;
	int real_count = 0;
	scanf("%d", &wanted_count);
	do
	{
		int the_guess_number=0;
		scanf("%d", &the_guess_number);
		printf("第%d次机会，请输入一个互不相同的4位数\n",real_count+1);
		int m=Check_the_number(the_guess_number,guess_digits);
		real_count++;
		if (m == 1)
		{
			real_count--;
			printf("输入错误，请您重新输入");
			continue;
		}
	} while (real_count < wanted_count);
}

int Check_the_number(int n,int digit[])
{
	if (n < 1000 || n>9999)
	{
		return 1;
	}
	else
	{
		for (int i = 0;i < 4;i++)
		{
			digit[i] = n % 10;
			n /= 10;
		}
		for (int i = 0;i < 4;i++)
		{
			for (int j =0 ;j <i;j++)
			{
				if (digit[i] ==digit[j])
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

//生成一个四位数均不相同的四位数，使用bool类型来生成随机数字
int Creat_the_number(int digits[])
{
	srand(time(NULL));
	bool used[10] = {true};
	int firstDigit = 1 + rand() % 9;
	digits[0] = firstDigit;
	used[firstDigit] = true;
	for (int i = 1;i < 4;i++)
	{
		int digit;
		do 
		{
			digit = rand() % 10;
		} while (used[digit]);
		digits[i] = digit;
		used[digit] = true;
	}
	int result = digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];
	return result;
}

