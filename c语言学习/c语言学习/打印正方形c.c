//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 1;i <= a;i++)
//        {
//            for (int j = 1;j <= a;j++)
//            {
//                if (i == 1 || i == a || j == 1 || j == a)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//	int a=0;
//	char arr[20][20];
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0;i < a;i++)
//		{
//			for (int j = 0;j < a;j++)
//			{
//				if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
//					arr[i][j] = '*';
//				else
//					arr[i][j] = ' ';
//			}
//		}
//		for (int i = 0;i < a;i++)
//		{
//			for (int j = 0;j < a;j++)
//			{
//				printf("%c ", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}