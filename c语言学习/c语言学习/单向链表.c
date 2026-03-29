//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//
//#define OK   1
//#define ERROR  0
//#define TRUE 1
//#define FALSE 0
//
//typedef char ElemType;
//typedef struct Node    /*结点类型定义*/
//{
//	ElemType data;
//	struct Node* next;
//}Node, * LinkList;  /* LinkList为结构指针类型*/
//
//void init_linklist(LinkList* l)/*对单链表进行初始化*/
//{
//	*l = (LinkList)malloc(sizeof(Node));
//	(*l)->next = NULL;
//}
//
//void CreateFromTail(LinkList  L)
//{
//	Node* r, * s;
//	char c;
//	int   flag = 1; /*设置一个标志，初值为1，当输入"$"时，flag为0，建表结束*/
//	r = L;      /*r指针动态指向链表的当前表尾，以便于做尾插入，其初值指向头结点*/
//	while (flag)         /*循环输入表中元素值，将建立新结点s插入表尾*/
//	{
//		c = getchar();
//		if (c != '$')
//		{
//			s = (Node*)malloc(sizeof(Node));
//			s->data = c;
//			r->next = s;
//			r = s;
//		}
//		else
//		{
//			flag = 0;
//			r->next = NULL;   /*将最后一个结点的next链域置为空，表示链表的结束*/
//		}
//	}
//}
//
//Node* Get(LinkList  L, int i)
///*在带头结点的单链表L中查找第i个结点，若找到(1≤i≤n)，则返回该结点的存储位置; 否则返回NULL*/
//{
//	int j;
//	Node* p;
//	p = L;
//	j = 0;   /*从头结点开始扫描*/
//	while ((p->next != NULL) && (j < i))
//	{
//		p = p->next;    /* 扫描下一结点*/
//		j++;   /* 已扫描结点计数器 */
//	}
//	if (i == j)
//		return p;   /* 找到了第i个结点 */
//	else
//		return NULL;   /* 找不到，i≤0或i>n */
//}
//
//int ListInsert(LinkList L, int i, ElemType e)
//{
//	LinkList p = L;
//	int j = 0;
//	while (j < i - 1 && p != NULL)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL || j > i - 1)
//	{
//		return FALSE;
//	}
//	Node* s = (Node*)malloc(sizeof(Node));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return TRUE;
//}
//int ListDelete(LinkList L, int i)
//{
//	Node* p = L;
//	int j = 0;
//	while (j < i - 1 && p != NULL)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL || j > i - 1)
//	{
//		return FALSE;
//	}
//	Node* q = p->next;
//	p->next = q->next;
//	free(q);
//	return TRUE;
//}
//
//int main()
//{
//	LinkList l;
//	Node* p;
//	int j;
//	init_linklist(&l);
//	printf("请输入链表数据,以$结束!\n");
//	CreateFromTail(l);
//	p = l->next;
//	while (p != NULL)
//	{
//		printf("%c\n", p->data);
//		p = p->next;
//	}
//
//	fflush(stdin);
//	printf("请输入要查找的结点序号:\n");
//	scanf("%d", &j);
//	p = Get(l, j);
//	if (p != NULL)
//		printf("该结点的值为:%c\n", p->data);
//	else
//		printf("未找到此结点!\n");
//
//	int position;
//	char value;
//	while (getchar() != '\n');
//	printf("请选择插入的位置\n");
//	scanf("%d", &position);
//	getchar();
//	printf("请选择插入的字符\n");
//	scanf("%c", &value);
//	ListInsert(l, position, value);
//	p = l->next;
//	while (p != NULL)
//	{
//		printf("%c\n", p->data);
//		p = p->next;
//	}
//
//	while (getchar() != '\n');
//	printf("请输入删除位置: ");
//	scanf("%d", &position);
//	if (ListDelete(l, position) == TRUE) {
//		printf("删除成功!\n");
//		printf("删除后链表:\n ");
//		p = l->next;
//		while (p != NULL)
//		{
//			printf("%c\n", p->data);
//			p = p->next;
//		}
//	}
//	else
//	{
//		printf("删除失败！\n");
//	}
//	return 0;
//}
