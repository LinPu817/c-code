#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//# define s(a,b) a*b+5
//int main()
//{
//    /* double a =1/2.0;*/
//	int a = 3;
//	int b = 6;
//	int y = s(3, 2) * 2;
//	/*printf("%%d\n", a,b);
//	printf("%%%d\n", a,b);
//	printf("%%%%d\n", a,b);*/
//	printf("%d", y);
//}
//void sp()
//{
//	int i = 10;
//	i++;
//}
//int main()
//{
//	int i = 0;
//	printf("%d", i);
//	//diplay();
//	/*fun();
//	printf("%d", a_val);*/
//	return 0;
//}
//void mp(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//
//}
//int main()
//{
//	int arr[] = { 6, 8, 7, 9, 5, 1, 3, 2, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	mp(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	signed  int i = 0;
//	for (i = 1; i >= 0; i--)
//	{
//		printf("%d", i);
//	}
//}
//int main()
//{
//	//int a = 0;
//	//int b = 0;
//	//char d = 'c';
//	////printf("%d%d\n",a,b);
//	//printf("%d\n", d);
//	//printf("%c\n", d);
//	//float c = 6.6;
//	//printf("%f\n", c);
//	//printf("%d\n", c);
//	int a = 0; int b 
//		=0;
//	printf("%d",b);
//	return 0;
//}
//int main()
//{
//	/*printf("*****\n *****\n  ******\n    *****\n");*/
//	int a,b,c;
//	scanf("%d,%d,%d", &a,&b,&c);
//	//printf("%d%d%d", a,b,c);
//	int max = 0;
//	if (a>b)
//	{
//		max = a;
//		if (a > c)
//		{
//			printf("%d", a);
//		}
//		else
//			printf("%d", c);
//	}
//	else
//	{
//		max = b;
//		if (b > c)
//		{
//			printf("%d", b);
//		}
//		else
//			printf("%d", c);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 9, 5, 8, 2, 15, 6, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	int min = arr[0];
//	int m, n;
//	int sum = 0;
//	for (int i = 1; i < sz - 1; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			m = i;
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//			n = i;
//		}
//
//	}
//	printf("%d %d %d %d", max,m,min,n);
//}
//int main()
//{
//	int a = 1234;
//	for (int i = 0; i < 4; i++)
//	{
//		int t = a%10;
//		printf("%d", t);
//		a = a / 10;
//	}
////}
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	while (a!=)
//	char b = 0;
//	b = a + 32;
//	printf("%c", b);
//}
//int main()
//{
//	int a = 9, b = 520;
//	{
//		int b = 8, a=0;
//		a +=  ++b;
//		printf("%d %d\n", a, b);
//	}
//	printf("%d %d\n", a, b);
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 100; i < 200; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			//printf("是素数、");
//			count++;
//		}
//	}
//	printf("%d", count);
//}
// int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; ++i)
//	{
//		for (j = 2; j < i; ++j)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d是素数\n", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
////	//system("pause");
////	return 0;
//////}
//int main()
//{
//	printf("%d", 3 / 0);
//}
//int main()
//{
//	int j = 0;
//	int count = 0;
//	for (int i = 101; i < 200; i+=2)
//	{
//		for ( j = 2; j <i/2; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		
//		}
//		if (i/2 == j)
//		{
//			printf("%d是素数 \n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); ++j)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d是素数\n", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	//system("pause");
//	return 0;
//}
//void fin(int arr[], int a, int sz);
//int main()
//{
//	int arr[] = { 9, 8, 3, 2, 5 };
//	int a = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fin(arr, a,sz);
//}
//void fin(int arr[], int a,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		if (arr[i] == a)
//		{
//			printf("找到了，下标为%d", i);
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到");
//	}
//}
//void max(int arr[], int sz);
//int main()
//{
//	int arr[] = { 9, 8, 3, 2, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	max(arr, sz);
//}
//void max(int arr[], int sz)
//{
//	int m = 0;
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			m = i;
//		}
//	}
//	printf("%d%d", max, m);
////}
//void sss()
//{
//	int i = 0; int sum = 0; int j = 0;
//	for (i = 1; i <=9; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			sum = i*j;
//			printf("%d*%d=%-2d ",j,i,sum);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	sss();
#include<string.h>
//int main()
//{
//	char arr[] = { "abc " };
//	char arr1[] = { 'q', 'b', 'c' };
//	int len = strlen(arr);
//	int len1 = strlen(arr);
//	printf("%d\n", len);
//	printf("%d\n", len1);
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));
//	printf("%s\n", arr);
//	printf("%s\n", arr1);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", strlen("fse\t\\ofes\0"));
//
//}
//int main()
//{
//	int a, b, c;
//	int max = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a>c)
//		max = a;
//
//	}
//	if (a < b)
//	{
//		if (b > c)
//			max = b;
//	}
//	printf("%d%d%d\n", a, b, c);
//	printf("%d",max);
//}
//int main()
//{
//	int a ;
//	scanf("%d", &a);
//	if (a > 90)
//	{
//		printf("优秀");
//		printf("不优秀");
//	}
//		
//	
//	else if (a > 80)
//	{
//		printf("合格");
//	}
//	else if (a > 60)
//	{
//		printf("一般");
//	}
//	else{
//		printf("不及格");
//	}
//	printf("%d小于十",a);
//}
//int main()
//{
//	int sum = 0;
//	int i = 1;
	/*for ( i=1;i<=10;i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	printf("%d", i);*/
	/*while (i<=10)
	{
		/*sum = sum + i;
		i++;
	}*/
//	do
//	{
//		sum = sum + i;
//		i++;
//	} while (2);
//		printf("%d", sum);
//	    printf("%d", i);
//}*/
//void double_mp(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 45, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	double_mp(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i < 9; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int j = 0;
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for ( j = 2; j < i/2; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i/2 == j)
//		{
//			printf("%d是素数\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}
int  erfen(int arr[], int sz, int f)
{
	int left = 0;
	int right =sz-1;
	while (left<=right)
	{
		int min = (left + right) / 2;
		if (arr[min] > f)
		{
			right = min-1;
		}
		else if (arr[min] < f)
		{
			left = min+1;
		}
		else if (arr[min] == f)
		{
			printf("找到了，下标为%d", min);
			return min;
		}
		
	}
	return -1;
		
}
int main()
{
	int arr[] = { 1, 2, 3, 4,5,6,7,8,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int f = 70;
	int ret=erfen(arr, sz, f);
	if (ret = -1)
	{
		printf("找不到");
	}
	else
		printf("找到了，下标为%d", ret);
}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6 };
//	int left = 0;
//	int right = 7;
//	while (left <= right)
//	{
//		int min = (left + right) / 2;
//		printf("%d", min);
//	}
//}