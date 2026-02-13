//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int a=0;
//    while (scanf("%d",&a) != EOF)
//    {
//        if (a % 2 == 1)
//        {
//            int tem1 = a - 2;
//            int tem2 = 1;
//            for (int i = 1; i <= a; i++)
//            {
//                if (i < (a + 1) / 2)
//                {
//                    for (int j = 1; j < i; j++)
//                    {
//                        printf(" ");
//                    }
//                    printf("*");
//                    for (int j = 1; j <= tem1; j++)
//                    {
//                        printf(" ");
//                    }
//                    printf("*");
//                    for (int j = 1; j < i; j++)
//                    {
//                        printf(" ");
//                    }
//                    printf("\n");
//                    tem1 -= 2;
//                }
//                else if (i == (a + 1) / 2)
//                {
//                    for (int j = 1;j <= a / 2;j++)
//                    {
//                        printf(" ");
//                    }
//                    printf("*");
//                    for (int j = 1;j <= a / 2;j++)
//                    {
//                        printf(" ");
//                    }
//                    printf("\n");
//                }
//                else if (i > (a + 1) / 2)
//                {
//                    for (int j = 1;j <= a - i;j++)
//                    {
//                        printf(" ");
//                    }
//                    printf("*");
//                    for (int j = 1;j <= tem2;j++)
//                    {
//                        printf(" ");
//                    }
//                    printf("*");
//                    for (int j = 1;j <= a - i;j++)
//                    {
//                        printf(" ");
//                    }
//                    printf("\n");
//                    tem2 += 2;
//                }
//            }
//        }
//    }
//}
//
//优化解法
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 1;i <= a;i++)
//		{
//			for (int j = 1;j <= a;j++)
//			{
//				if (i == j || i ==a - j + 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//}