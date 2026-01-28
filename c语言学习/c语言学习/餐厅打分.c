//我的解答版本
//给出统计平均分数，最高分数，众数用于研究分析
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 40
//#define M 11
//int main();
//void Output(int evaluate[], int m);
//int Intput(int evaluate[]);
//void statistics(int evaluate[], int m);
//int main()
//{
//	int evaluate[N];
//	int m = Intput(evaluate);
//	Output(evaluate, m);
//	statistics(evaluate, m);
//	return 0;
//}
//
//void Output(int evaluate[], int m)
//{
//	printf("Grade   Count   Histogram\n");
//	for (int i = 0;i < m;i++)
//	{
//		printf("%d\t%d\t", i + 1, evaluate[i]);
//		for (int j = 0;j < evaluate[i];j++)
//		{
//			if (evaluate[i] - j == 1)
//			{
//				printf("*\n");
//			}
//			else
//			{
//				printf("*");
//			}
//		}
//	}
//}
//
//int Intput(int evaluate[])
//{
//	int i = 0;
//	int order = 1;
//	do
//	{
//		printf("请您决定是否继续评分，输入1继续评分，输入0退出评分系统\n");
//		scanf("%d", &order);
//		if (order == 0)
//		{
//			break;
//		}
//		printf("请输入第%d人的评分:\n", i + 1);
//		scanf("%d", &evaluate[i]);
//		printf("第%d个人的评分为%d\n", i + 1, evaluate[i]);
//		if ((evaluate[i] > 10) || (evaluate[i] < 0))
//		{
//			printf("评分错误，请重新进行输入评分\n");
//			continue;
//		}
//		i++;
//		if (i == 40)
//		{
//			printf("所有的评分已录入\n");
//			break;
//		}
//	} while (i < 40);
//	return i;
//}
//
//void statistics(int evaluate[], int m)
//{
//	//找众数,这里犯了个极为严重的错误，没有对score数组进行初始化
//	//1.28修改，应用了映射思想
//	int score[M] = { 0 };
//	for (int i = 0;i < m;i++)
//	{
//		score[evaluate[i]]++;
//	}
//	int the_best_frequency = score[1];
//	int the_number;
//	for (int i = 1;i < 11;i++)
//	{
//		if (the_best_frequency < score[i])
//		{
//			the_best_frequency = score[i];
//			the_number = i;
//		}
//	}
//	//找中位数,思路：对evaluate总数组进行一个冒泡排序，然后就有一张总表可以查找每个位置对应的评分了
//	double middle;
//	int the_turn_evaluate[N];
//	for (int i = 0;i < m;i++)
//	{
//		the_turn_evaluate[i] = evaluate[i];
//	}
//	//最开始这里冒泡排序犯错了，发生了数组越界访问的情况,起初j-1会访问-1这个不存在的下标
//	for (int i = 0;i < m;i++)
//	{
//		for (int j = 0;j < m - 1 - i;j++)
//		{
//			if (the_turn_evaluate[j] > the_turn_evaluate[j + 1])
//			{
//				int temp = the_turn_evaluate[j];
//				the_turn_evaluate[j] = the_turn_evaluate[j + 1];
//				the_turn_evaluate[j + 1] = temp;
//			}
//		}
//	}
//	if (m % 2 == 0)
//	{
//		middle = (the_turn_evaluate[m/ 2 - 1] + the_turn_evaluate[m / 2]) / 2.0;
//	}
//	else if (m% 2 == 1)
//	{
//		middle = the_turn_evaluate[m/2];
//	}
//	//求出平均数
//	double the_sum_score = 0;
//	for (int i = 0;i < m;i++)
//	{
//		the_sum_score += the_turn_evaluate[i];
//	}
//	double aver = the_sum_score / m;
//	printf("平均数为%lf，中位数为%lf,众数为%d\n", aver, middle, the_number);
//}


//升级版，修改了交互性问题，使用了映射思想（提升了算法速度），使用了qsort进行冒泡排序
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#define MAX_STUDENTS 40
#define MAX_SCORE 10
// 比较函数：给 qsort 用的
// 告诉 qsort：如果 a > b，返回正数；a < b，返回负数
int compare_ints(const void* a, const void* b) 
{
	return (*(int*)a - *(int*)b);
}
int Input(int evaluate[]);
void Output(int evaluate[], int m);//打印每个人的评分
void PrintFrequencyHistogram(const int score_counts[]); // 打印直方图
void Statistics(int evaluate[], int m);
int main()
{
	int evaluate[MAX_STUDENTS];
	int m = Input(evaluate);
	Output(evaluate, m);
	if (m > 0) 
	{
		Statistics(evaluate, m);
	}
	else 
	{
		printf("未录入任何数据。\n");
	}
	return 0;
}

int Input(int evaluate[])
{
	int i = 0;
	int temp;
	printf("--- 录入系统 (输入 -1 结束) ---\n");
	while (i < MAX_STUDENTS)
	{
		printf("请输入第 %d 位学生的评分 (0-10): ", i + 1);
		// 增加健壮性：检查scanf返回值，防止输入字母死循环
		if (scanf("%d", &temp) != 1) 
		{
			printf("? 输入非法！请输入数字。\n");
			while (getchar() != '\n'); // 清空缓冲区
			continue;
		}
		if (temp == -1) break; // 哨兵值退出
		if (temp >= 0 && temp <= MAX_SCORE) 
		{
			evaluate[i] = temp;
			i++;
		}
		else 
		{
			printf("? 分数必须在 0-%d 之间。\n", MAX_SCORE);
		}
	}
	return i;
}

void Statistics(int evaluate[], int m)
{
	// 1. 准备桶 (初始化为0)
	int score_counts[MAX_SCORE + 1] = { 0 };
	// 2. 填充桶 & 求和
	long sum_score = 0;
	for (int i = 0; i < m; i++) 
	{
		score_counts[evaluate[i]]++;
		sum_score += evaluate[i];
	}
	// 3. 打印真正的直方图
	PrintFrequencyHistogram(score_counts);
	// 4. 找众数 (修复逻辑：从0开始，且处理并列情况)
	int max_freq = 0;
	// 第一步：找最高频率是多少
	for (int i = 0; i <= MAX_SCORE; i++) 
	{
		if (score_counts[i] > max_freq) max_freq = score_counts[i];
	}

	// 5. 排序 (使用标准库 qsort)
	int sorted_eval[MAX_STUDENTS];
	for (int i = 0; i < m; i++) sorted_eval[i] = evaluate[i];

	qsort(sorted_eval, m, sizeof(int), compare_ints);

	// 6. 找中位数 (修复下标逻辑)
	double middle;
	if (m % 2 == 0) 
	{
		// 偶数：m/2 - 1 和 m/2
		middle = (sorted_eval[m / 2 - 1] + sorted_eval[m / 2]) / 2.0;
	}
	else 
	{
		// 奇数：m/2 (整数除法直接向下取整，正好是中间下标)
		middle = sorted_eval[m / 2];
	}

	// 7. 输出统计结果
	printf("\n--- 分析结果 ---\n");
	printf("平均数: %.2lf\n", (double)sum_score / m);
	printf("中位数: %.2lf\n", middle);

	printf("众数  : ");
	// 第二步：谁达到了最高频率，谁就是众数
	int first = 1;
	for (int i = 0; i <= MAX_SCORE; i++) 
	{
		if (score_counts[i] == max_freq) 
		{
			if (!first) printf(", ");
			printf("%d", i);
			first = 0;
		}
	}
	printf(" (出现了 %d 次)\n", max_freq);
}

//输出每个人的评分,解决了输出对齐问题
void Output(int evaluate[], int m)
{
	printf("\n--- 评分详情 ---\n");
	// %-10s 表示：字符串左对齐，占10格
	// 这样表头和下面的数据就能对齐了
	printf("%-10s %-10s %-10s\n", "People", "Evaluate", "Presence");
	for (int i = 0; i < m; i++)
	{
		printf("%-10d %-10d ", i + 1, evaluate[i]);
		// 打印星星
		for (int j = 0; j < evaluate[i]; j++)
		{
			printf("*");
		}
		// 修复Bug：换行符必须放在循环外面！
		// 这样即使是 0 分（循环不执行），也会正常换行
		printf("\n");
	}
}

// 这是一个真正的“频率直方图”
void PrintFrequencyHistogram(const int score_counts[]) 
{
	printf("\nGrade\tCount\tHistogram\n");
	for (int i = 0; i <= MAX_SCORE; i++) 
	{
		// 只打印有人考的分数段，保持整洁
		if (score_counts[i] > 0) 
		{
			printf("%d\t%d\t", i, score_counts[i]);
			for (int j = 0; j < score_counts[i]; j++) 
			{
				printf("*");
			}
			printf("\n");
		}
	}
}