#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int Creat_the_number();
void Give_the_tip();
int main()
{
	
}

//生成一个四位数均不相同的四位数，使用bool类型来生成随机数字
int Creat_the_number()
{
	srand(time(NULL));
	int digits[4];
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
	printf("生成的四位数为%d", result);
	return result;
}

void Give_the_tip()
{

}
