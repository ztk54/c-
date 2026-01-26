#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 40
void Output(int evaluate[], int n);
int Intput(int evaluate[]);
int main()
{
    int evaluate[N];
    int m = Intput(evaluate);
    Output(evaluate, m);
    return 0;
}

void Output(int evaluate[], int m)
{
    printf("Grade   Count   Histogram\n");

    int count[11] = { 0 }; 
    for (int i = 0; i < m; i++)
    {
        if (evaluate[i] >= 1 && evaluate[i] <= 10)
        {
            count[evaluate[i]]++;
        }
    }

    for (int grade = 1; grade <= 10; grade++)
    {
        printf("%d\t%d\t", grade, count[grade]);
        for (int j = 0; j < count[grade]; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int Intput(int evaluate[])
{
    printf("请输入40个学生的评分（1-10分）：\n");

    int i = 0;
    while (i < N)
    {
        printf("请输入第%d个学生的评分: ", i + 1);
        scanf("%d", &evaluate[i]);
        if (evaluate[i] < 1 || evaluate[i] > 10)
        {
            printf("评分有误，请输入1-10之间的数字！\n");
            continue;
        }
        i++; 
    }
    printf("已完成40个学生的评分输入。\n");
    return N; 
}