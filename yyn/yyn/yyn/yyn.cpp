#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	/*char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));*/
//	return 0;
//}
//typedef struct a
//{
//	int f;
//	char b;
//	double c;
//}c;
//int main()
//{
//	c d = { 0 };
//	printf("%d", sizeof(d));
//}
int main()
{
	char s[81];
	int word = 1;
	gets(s);
	char *p = s;
	int count = 0;
	while (*p != '\0')
	{	
		if (*p == ' ')
		{
			word = 1;
		}
		else if (word == 1)
		{
			count++;
			word = 0;
		}
		p++;

	}
	printf("%d", count);
}
//int main()
//{
//	char arr[100];
//	char *p = arr;
//	gets(arr);
//	int word = 0;
//	int sum = 0;
//	while (*p != '\0')
//	{
//		if (*p == ' ')
//		{
//			word = 0;
//		}
//		else if (word == 0)
//		{
//			word = 1;
//			sum++;
//		}
//		p++;
//	}
//	printf("%d", sum);
//}