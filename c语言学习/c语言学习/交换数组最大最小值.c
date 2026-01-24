//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int main();
//#define N 40
//int Found_the_max(int score[], int i);
//int Found_the_min(int score[], int i);
//void Change(int score[], int m, int n, int i);
//int main()
//{
//	int score[N];
//	int i = -1;
//	printf("请输入整数数据\n");
//	do
//	{
//		i++;
//		float temp;
//		if (scanf("%f", &temp) != 1)
//		{
//			printf("输入有错，请重新输入\n");
//			while (getchar() != '\n');
//			i--;
//			continue;
//		}
//		if (fabs(temp - (int)temp) > 1e-6)
//		{
//			printf("请输入整数\n");
//			i--;
//			continue;
//		}
//		score[i] = (int)temp;
//	} while (score[i] >= 0);
//	int m = Found_the_max(score, i);
//	int n = Found_the_min(score, i);
//	Change(score, m, n, i);
//	return 0;
//}
//
//int Found_the_max(int score[], int i)
//{
//	int best_turn = 0;
//	int temp = score[0];
//	for (int m = 0;m < i;m++)
//	{
//		if (score[m] < score[m + 1])
//		{
//			temp = score[m + 1];
//			best_turn = m;
//		}
//	}
//	return best_turn;
//}
//int Found_the_min(int score[], int i)
//{
//	int min_turn = 0;
//	int temp = score[0];
//	for (int m = 0;m < i;m++)
//	{
//		if (score[m] > score[m + 1])
//		{
//			temp = score[m + 1];
//			min_turn = m;
//		}
//	}
//	return min_turn;
//}
//
//void Change(int score[], int m, int n, int i)
//{
//	int temp;
//	temp = score[m];
//	score[m] = score[n];
//	score[n] = temp;
//	for (int j = 0;j < i;j++)
//	{
//		printf("%d\n", score[j]);
//	}
//}


//由于上面寻找最大值和最小值两个函数及其相似，因此我们可以做出以下修改，譬如添加标志参数这一做法
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int main();
//#define N 40
//int Found(int score[], int n, int flag);
//void Change(int score[], int m, int n, int i);
//int main()
//{
//	int score[N];
//	int i = -1;
//	printf("请输入整数数据\n");
//	do
//	{
//		i++;
//		float temp;
//		if (scanf("%f", &temp) != 1)
//		{
//			printf("输入有错，请重新输入\n");
//			while (getchar() != '\n');
//			i--;
//			continue;
//		}
//		if (fabs(temp - (int)temp) > 1e-6)
//		{
//			printf("请输入整数\n");
//			i--;
//			continue;
//		}
//		score[i] = (int)temp;
//	} while (score[i] >= 0 && i < N);
//	int m = Found(score, i, 1);
//	int n = Found(score, i, 0);
//	Change(score, m, n, i);
//	return 0;
//}
//
//int Found(int score[], int n, int flag)
//{
//	if (n <= 0) return -1;
//	int extreme_index = 0;
//	int extreme_value = score[0];
//	for (int i = 0;i < n;i++)
//	{
//		if ((flag == 1 && score[i] > extreme_value) || (flag == 0 && score[i] < extreme_value)) 
//		{
//			extreme_value = score[i];
//			extreme_index = i;
//		}
//	}
//	return extreme_index;
//}
//
//void Change(int score[], int m, int n, int i)
//{
//	if (m < 0 || n < 0 || m >= i || n >= i) {
//		printf("无效的索引");
//		return;
//	}
//	int temp;
//	temp = score[m];
//	score[m] = score[n];
//	score[n] = temp;
//	for (int j = 0;j < i;j++)
//	{
//		printf("%d\n", score[j]);
//	}
//}



//由于输入成绩会存在重复个最大最小值的情况，因此做出以下修改
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define N 40

void Change(int score[], int m, int n, int i);
int find_extreme_index(int score[], int n, int flag);
int find_random_extreme(int score[], int n, int flag);
void handle_duplicates_interactive(int score[], int n, int* max_index, int* min_index);
void swap_all_extremes(int score[], int n);

int main()
{
    srand(time(NULL));
    int score[N];
    int i = 0;

    printf("请输入整数数据（输入负数结束）:\n");

    do {
        float temp;
        if (scanf("%f", &temp) != 1)
        {
            printf("输入有错，请重新输入\n");
            while (getchar() != '\n');
            continue;
        }

        if (temp < 0) break;

        if (fabs(temp - (int)temp) > 1e-6)
        {
            printf("请输入整数\n");
            continue;
        }

        score[i] = (int)temp;
        i++;
    } while (i < N);

    if (i > 0)
    {
        printf("\n选择处理重复值的方式:\n");
        printf("1. 交换第一个出现的最大最小值\n");
        printf("2. 交换最后一个出现的最大最小值\n");
        printf("3. 随机选择一个最大最小值交换\n");
        printf("4. 手动选择要交换的极值位置\n");
        printf("5. 交换所有重复的极值\n");
        printf("请选择(1-5): ");

        int choice;
        scanf("%d", &choice);

        int m, n;

        switch (choice)
        {
        case 1:
            m = find_extreme_index(score, i, 1);
            n = find_extreme_index(score, i, 0);
            Change(score, m, n, i);
            break;

        case 2:
            m = find_extreme_index(score, i, 2);
            n = find_extreme_index(score, i, 3);
            Change(score, m, n, i);
            break;

        case 3:
            m = find_random_extreme(score, i, 1);
            n = find_random_extreme(score, i, 0);
            Change(score, m, n, i);
            break;

        case 4:
            handle_duplicates_interactive(score, i, &m, &n);
            Change(score, m, n, i);
            break;

        case 5:
            swap_all_extremes(score, i);
            break;

        default:
            printf("无效选择，使用默认方式(第一个)\n");
            m = find_extreme_index(score, i, 1);
            n = find_extreme_index(score, i, 0);
            Change(score, m, n, i);
        }
    }
    else
    {
        printf("没有输入有效数据\n");
    }

    return 0;
}

int find_extreme_index(int score[], int n, int flag)
{
    if (n <= 0) return -1;

    int extreme_index = 0;
    int extreme_value = score[0];

    for (int i = 1; i < n; i++)
    {
        if (flag == 1 && score[i] > extreme_value)
        {
            extreme_value = score[i];
            extreme_index = i;
        }
        else if (flag == 2 && score[i] >= extreme_value)
        {
            extreme_value = score[i];
            extreme_index = i;
        }
        else if (flag == 0 && score[i] < extreme_value)
        {
            extreme_value = score[i];
            extreme_index = i;
        }
        else if (flag == 3 && score[i] <= extreme_value)
        {
            extreme_value = score[i];
            extreme_index = i;
        }
    }
    return extreme_index;
}

int find_random_extreme(int score[], int n, int flag)
{
    if (n <= 0) return -1;

    int extreme_value = score[0];
    for (int i = 1; i < n; i++)
    {
        if (flag == 1 && score[i] > extreme_value) extreme_value = score[i];
        if (flag == 0 && score[i] < extreme_value) extreme_value = score[i];
    }

    int indices[N];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (score[i] == extreme_value)
        {
            indices[count++] = i;
        }
    }

    return indices[rand() % count];
}

void handle_duplicates_interactive(int score[], int n, int* max_index, int* min_index)
{
    int max_val = score[0];
    int min_val = score[0];

    for (int i = 1; i < n; i++)
    {
        if (score[i] > max_val) max_val = score[i];
        if (score[i] < min_val) min_val = score[i];
    }

    int max_indices[N];
    int min_indices[N];
    int max_count = 0;
    int min_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (score[i] == max_val) max_indices[max_count++] = i;
        if (score[i] == min_val) min_indices[min_count++] = i;
    }

    if (max_count > 1)
    {
        printf("找到 %d 个最大值 %d，位置：", max_count, max_val);
        for (int i = 0; i < max_count; i++) printf("%d ", max_indices[i]);
        printf("\n选择最大值位置(0-%d): ", max_count - 1);

        int choice;
        scanf("%d", &choice);
        if (choice >= 0 && choice < max_count)
            *max_index = max_indices[choice];
        else
            *max_index = max_indices[0];
    }
    else
    {
        *max_index = max_indices[0];
    }

    if (min_count > 1)
    {
        printf("找到 %d 个最小值 %d，位置：", min_count, min_val);
        for (int i = 0; i < min_count; i++) printf("%d ", min_indices[i]);
        printf("\n选择最小值位置(0-%d): ", min_count - 1);

        int choice;
        scanf("%d", &choice);
        if (choice >= 0 && choice < min_count)
            *min_index = min_indices[choice];
        else
            *min_index = min_indices[0];
    }
    else
    {
        *min_index = min_indices[0];
    }
}

void swap_all_extremes(int score[], int n)
{
    if (n <= 0) return;

    int max_val = score[0];
    int min_val = score[0];

    for (int i = 1; i < n; i++)
    {
        if (score[i] > max_val) max_val = score[i];
        if (score[i] < min_val) min_val = score[i];
    }

    int max_indices[N];
    int min_indices[N];
    int max_count = 0;
    int min_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (score[i] == max_val) max_indices[max_count++] = i;
        if (score[i] == min_val) min_indices[min_count++] = i;
    }

    int swap_count = (max_count < min_count) ? max_count : min_count;

    for (int i = 0; i < swap_count; i++)
    {
        int temp = score[max_indices[i]];
        score[max_indices[i]] = score[min_indices[i]];
        score[min_indices[i]] = temp;
    }

    printf("交换了 %d 对值，交换后的数组：", swap_count);
    for (int i = 0; i < n; i++) printf("%d ", score[i]);
    printf("\n");
}

void Change(int score[], int m, int n, int i)
{
    if (m < 0 || n < 0 || m >= i || n >= i)
    {
        printf("无效的索引\n");
        return;
    }

    if (m == n)
    {
        printf("最大值和最小值在同一位置，无需交换\n");
        return;
    }

    int temp = score[m];
    score[m] = score[n];
    score[n] = temp;

    printf("交换位置 %d (值: %d) 和位置 %d (值: %d) 后的数组：",
        m, score[n], n, score[m]);

    for (int j = 0; j < i; j++)
    {
        printf("%d ", score[j]);
    }
    printf("\n");
}