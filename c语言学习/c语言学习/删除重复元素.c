//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//typedef char ElemType;
//typedef struct Node 
//{
//    ElemType data;
//    struct Node* next;
//} Node, * LinkList;
//
//
//void init_linklist(LinkList* L)
//{
//    *L = (LinkList)malloc(sizeof(Node));
//    (*L)->next = NULL;
//}
//
//
//void CreateFromTail(LinkList L) {
//    Node* r = L, * s;
//    char c;
//
//    printf("请输入链表字符（连续输入，以回车结束）：\n");
//
//    while (1)
//    {
//        c = getchar();
//        if (c == '\n') {
//            break;
//        }
//        if (c != ' ')
//        {  
//            s = (Node*)malloc(sizeof(Node));
//            s->data = c;
//            s->next = NULL;
//            r->next = s;
//            r = s;
//        }
//    }
//    r->next = NULL;
//}
//
//
//void DelDuplicateNode(LinkList L)
//{
//    if (L == NULL || L->next == NULL)
//    {
//        return;  
//    }
//
//    Node* p = L->next; 
//
//    while (p != NULL && p->next != NULL)
//    {
//        Node* q = p;          
//        Node* pre = q;        
//
//
//        while (q->next != NULL) 
//        {
//            q = q->next;      
//
//            if (q->data == p->data)
//            {  
//                Node* temp = q;
//                pre->next = q->next;
//                q = pre;      
//                free(temp);
//            }
//            else 
//            {
//                pre = q;      
//            }
//        }
//        p = p->next;  
//    }
//}
//
//
//void PrintList(LinkList L) 
//{
//    Node* p = L->next;
//
//    if (p == NULL) {
//        printf("链表为空\n");
//        return;
//    }
//
//    printf("链表内容: ");
//    while (p != NULL) {
//        printf("%c ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//int main() {
//    LinkList L;
//
//    printf("========== 删除重复元素测试 ==========\n");
//
//    init_linklist(&L);
//
//    CreateFromTail(L);
//
//    printf("\n原始链表：\n");
//    PrintList(L);
//
//    DelDuplicateNode(L);
//
//    printf("\n去重后链表：\n");
//    PrintList(L);
//
//    Node* p = L->next, * temp;
//    while (p != NULL) 
//    {
//        temp = p;
//        p = p->next;
//        free(temp);
//    }
//    free(L);
//
//    return 0;
//}