#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int frequency[7] = { 0 };
	srand(time(NULL));
	int roll,face;
	for (roll = 1;roll <=6000;roll++)
	{
		face = rand() % 6 + 1;
		frequency[face]++;
	}
	printf("%4s%17s\n", "Face", "Frequency");
	for (int face = 1;face < 7;face++)
	{
		printf("%4d%17d\n", face, frequency[face]);
	}
	return 0;
}