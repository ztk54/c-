//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr1[n], arr2[m], final[m + n];
//    for (int i = 0;i < n;i++)
//    {
//        scanf("%d ", &arr1[i]);
//    }
//    for (int i = 0;i < m;i++)
//    {
//        scanf("%d ", &arr2[i]);
//    }
//    for (int i = 0;i < n + m;i++)
//    {
//        if (i < n)
//        {
//            final[i] = arr1[i];
//        }
//        else
//        {
//            final[i] = arr2[i - n];
//        }
//    }
//    for (int i = 0;i < m + n;i++)
//    {
//        for (int j = i;j < m + n;j++)
//        {
//            if (final[i] > final[j])
//            {
//                int tem = final[i];
//                final[i] = final[j];
//                final[j] = tem;
//            }
//        }
//    }
//    for (int i = 0;i < m + n;i++)
//    {
//        printf("%d ", final[i]);
//    }
//    return 0;
//}
//
//更优解
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int a[n], b[m];
//    for (int i = 0; i < n; i++) scanf("%d ", &a[i]);
//    for (int i = 0; i < m; i++) scanf("%d ", &b[i]);
//
//    int res[n + m];
//    int i = 0, j = 0, k = 0;
//    while (i < n && j < m)
//    {
//        if (a[i] <= b[j]) res[k++] = a[i++];
//        else res[k++] = b[j++];
//    }
//    while (i < n) res[k++] = a[i++];
//    while (j < m) res[k++] = b[j++];
//
//    for (int i = 0; i < n + m; i++) printf("%d ", res[i]);
//    return 0;
//}