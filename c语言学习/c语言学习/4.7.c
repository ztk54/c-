//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//size_t count_strlen(const char* str)
//{
//    assert(str);
//    int count = 0;
//    while (*str)
//    {
//        str++;
//        count++;
//    }
//    return count;
//}
//size_t pointer_strlen(const char* str)
//{
//    assert(str);
//    const char* start = str;
//    while (*str) 
//    {
//        str++;
//    }
//    return str - start;
//}
//
//char* my_strcpy(char* dest, const char* src)
//{
//    assert(dest && src);
//    char* tem = dest;
//    while (*tem++ = *src++);
//    return dest;
//}
//
//char* my_strcat(char* dest, const char* src)
//{
//	char* tem = dest;
//	while (*tem)tem++;
//	while (*tem++ = *src++);
//	return dest;
//}
//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//		char s[10001];  
//		fgets(s, sizeof(s), stdin);
//		int len = strlen(s);
//		if (s[len - 1] == '\n')
//		{
//		    s[len - 1] = '\0';
//		    len--;
//		}
//		int left = 0, right = len - 1;
//		while (left < right) 
//		{
//		    char temp = s[left];
//		    s[left] = s[right];
//		    s[right] = temp;
//		    left++;
//		    right--;
//		}
//		printf("%s\n", s);
//		return 0;
//
//	char arr[] = "Hello world";
//	printf("%zd", strlen(arr));
//	printf("\n");
//	printf("%zd", count_strlen(arr));
//	printf("\n");
//	printf("%d", pointer_strlen(arr));
//
//	char dest[20];
//	const char* src = "hello world";
//	my_strcpy(dest, src);
//	printf("%s", dest);
//
//	char dest[20] = "Hello ";
//	char* src = "world";
//	my_strcat(dest, src);
//	printf("%s", dest);
//	return 0;
//}