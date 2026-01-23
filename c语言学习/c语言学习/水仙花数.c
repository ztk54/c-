#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int N;
	printf("请输入要查找的水仙花数的位数N (N >= 3): ");
	scanf("%d", &N);

	if (N < 3) {
		printf("位数N必须大于等于3。\n");
		return 1;
	}
	long long start = (long long)pow(10, N - 1);
	long long end = (long long)pow(10, N) - 1;
	printf("所有%d位水仙花数有：\n", N);
	for (long long i = start; i <= end; i++) {
		long long num = i;
		long long sum = 0;
		while (num > 0) {
			int digit = num % 10;
			sum += (long long)pow(digit, N);
			num /= 10;
		}
		if (sum == i) {
			printf("%lld\n", i);
		}
	}
	return 0;
}