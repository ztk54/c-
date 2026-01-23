#define _CRT_SECURE_NO_WARNINGS
void Hanoi(int n, char a, char b, char c);
void HanoiMove(int n, char a, char b);
#include <stdio.h>
int main()
{
	int n;
	printf("请输入圆盘的个数");
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}

void Hanoi(int n, char a, char b, char c)
{
	if (n == 1) {
		HanoiMove(n, a, b);
	}
	else {
		Hanoi(n - 1, a, c, b);
		HanoiMove(n, a, b);
		Hanoi(n - 1, c, b, a);
	}
}

void HanoiMove(int n, char a, char b)
{
	printf("Move %d :from %c to %c\n", n, a, b);
}