#define _crt_secure_no_warnings
#include <stdio.h>
int main()
{
	int num = 10;
	int r = num << 1;
	printf("r=%d\n", r);
	printf("num=%d", num);
	return 0;
}
