//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//typedef struct JosephNode
//{
//	int id;
//	int password;
//	struct JosephNode* next;
//} JosephNode, * JosephList;
//
//JosephList CreateJosephCycle(int n, int pw[])
//{
//	JosephList head = NULL, tail = NULL, s = NULL;
//
//	for (int i = 0; i < n; i++)
//	{
//		s = (JosephNode*)malloc(sizeof(JosephNode));
//		s->id = i + 1;
//		s->password = pw[i];
//
//		if (head == NULL)
//		{
//			head = s;
//		}
//		else
//		{
//			tail->next = s;
//		}
//		tail = s;
//	}
//
//	if (tail != NULL)
//	{
//		tail->next = head;
//	}
//
//	return head;
//}
//
//void JosephusOperate(JosephList head, int n, int initialM)
//{
//	JosephNode* p = head, * pre = NULL;
//	int m = initialM;
//
//	if (p == NULL)
//	{
//		printf("链表为空！\n");
//		return;
//	}
//
//	pre = p;
//	while (pre->next != p)
//	{
//		pre = pre->next;
//	}
//
//	printf("出列顺序为：");
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int count = 1; count < m; count++)
//		{
//			pre = p;
//			p = p->next;
//		}
//
//		printf("%d ", p->id);
//		m = p->password;
//
//		pre->next = p->next;
//		free(p);
//		p = pre->next;
//
//		if (p == pre)
//		{
//			printf("%d ", p->id);
//			free(p);
//			break;
//		}
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n, initialM;
//
//	printf("========== 约瑟夫问题求解 ==========\n");
//	printf("请输入总人数n：");
//	scanf("%d", &n);
//
//	int* passwords = (int*)malloc(n * sizeof(int));
//	if (passwords == NULL)
//	{
//		printf("内存分配失败！\n");
//		return 1;
//	}
//
//	printf("请依次输入%d个人的密码（用空格分隔）：\n", n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &passwords[i]);
//	}
//
//	printf("请输入初始报数上限值m：");
//	scanf("%d", &initialM);
//	JosephList head = CreateJosephCycle(n, passwords);
//	JosephusOperate(head, n, initialM);
//
//	free(passwords);
//
//	return 0;
//}