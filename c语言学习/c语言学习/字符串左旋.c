#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void LeftRotateString(char* str, int k)
{
	char tem[1000];
	int n = strlen(str);
	if (n == 0)
	{
		return;
	}
	k = k % n;
	for (int i = 0;i < n;i++)
	{
		tem[i] = str[(i + k) % n];
		putchar(str[(i + k) % n]);
	}
}

int main()
{
	char str[1000] = { 0 };
	int k;
	printf("请输入字符串\n");
	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	if (len > 0 && str[len - 1] == '\n')
	{
		str[len - 1] = '\0';
	}
	printf("请输入左旋数\n");
	scanf("%d", &k);
	printf("结果：");
	LeftRotateString(str, k);
	return 0;
}