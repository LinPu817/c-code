#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int right = 4;
//	int left = 0;
//	int a = 5;
//	while (left <= right)
//	{
//		int min = (right + left) / 2;
//		if (arr[min] > a)
//		{
//			right = min - 1;
//		}
//		else if (arr[min] < a)
//		{
//			left = min + 1;
//		}
//		else if (arr[min] == a)
//		{
//			printf("找a到了，下标为%d", min);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	//printf("pause");
//}
//	
//int main()
//{
//	int arr[] = { 5, 8, 7, 6, 7, 4 };
//	int a = 10;
//	int sz = 6;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == a)
//		{
//			printf("找到了下标为%d", i);
//			break;
//		}
//	}
//	if (i >= 6)
//	{
//		printf("找不到");
//	}
//
//}
//int main()
//{
//	int arr[] = { 5, 8, 9, 6, 7, 4 };
//	int a = 0;
//	int sz = 6;
//	int i = 0;
//	int max =arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			a = i;
//			
//		}
//	}
//	printf("%d%d", max,a);
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		for ( j = 2; j <i/2; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j==i/2)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 100; i <= 200; i ++)
//	{
//		int j;
//		for (j = 2; j < i/2 ; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i/2)
//		{
//			printf("%d ", i);
//			count++;
//		}
//			
//	}
//	printf("%d ", count);
//	return 0;
//}
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int *p = arr;
//	printf("%d", *(p + 1));
//}
//
//
//void main()
//{
//	int a[10] = { 1, 5, 2, 5, 6, 8, 7, 4, 3, 0 };
//	int  i, k, n, f = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 10; i++)
//	{
//		if (n == a[i])
//		{
//			f = 1;
//			k = i;
//		}
//	}
//	if (f)
//		printf("%d  is  No. %d\n", n, k);
//	else
//		printf(" %d not found !\n", n);
//}
//int sum(int b[], int n)
//{
//	int i, s = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (b[i] % 2 == 1)
//			s += b[i];
//	}
//			return (s);
//}
//
//int main()
//{
//	int a[12] = { 10, 4, 2, 7, 3, 12, 5, 34, 5, 9, 21, 19 };
//	int n=12;
//    int s=sum(a,n);
//		printf("The result is :%d\n", s);
//}
//
//#define  M   11  
//void main()
//{
//	int i;
//	int a[M] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
//	a[10] = a[0];
//		for (i = 1; i < 10; i++)
//		{
//			if (a[i] < a[10])
//				a[10] = a[i];
//		}
//		printf("Max is %d\n", a[10]);
//	}

//int main()
//{
//	/*char a = getchar();
//	int count = 0;
//	while ((a = getchar())!= '\n')
//	{
//		if (a != ' ')
//		count++;
//	}
//	printf("%d", count);*/
//}
// 
//int sum(int a, int n)
//{
//	return 1+n+sqrt(n)/n;
//}
//int main()
//{
//	int a, n;
//	scanf("%d%d", a, n);
//	sum(a, n);
//}
//int main()
//{
//	int i = 0;
//	if (!i)
//	{
//		printf("ok");
//	}
//	else if (i < 2)
//		printf("%d", i);
//	else
//		printf("quite");
//}
//int fun(int x, int y)
//{
//	return((y - x)*y);
//}
//void shou(int arr[3][5])
//{
//	
//	for (int i = 0; i < 3; i++)
//	{
//		int avg = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//			avg=avg+(arr[i][j]);
//		}
//		printf("%d", (avg/4));
//		printf("\n");
//	}
	//for (int c = 0; c < 3; c++)
	//{
	//	int avg = a[]
	//	int i = 4;
	//	printf("%d", arr[c][i]);

//int main()
//{
//	int arr[3][5] = {};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//	
int main()
{
	if (2 <= 8)
	{
		printf("1");
	}
	else
		;
	// ! && ||
	/*int a = 3;
	int b = 3;
	int c = 3;
	int d = 3;
	a > 0 && a++;
	b < 0  && b++;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	c > 0 || c++;
	d < 0 || d++;
	printf("c=%d\n", c);
	printf("d=%d\n", d);*/
}
















//	}
//	}
//	shou(arr);
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, *p = a + 3, *q = a + 6;
//	printf("%d\n", *p);
//	printf("%d\n", *q);
//printf("%d\n", q - p);
	//int a = 100;
	//while (a<1000)
	//{
	//	int b = a / 100;
	//	int s = (a / 10) % 10;
	//	int g = a % 10;
	//	if (a == b*b*b + s*s*s + g*g*g)
	//		printf("%d\n", a);
	//	a++;
	//}
	///*int a = 3, b = 4, c = 5, d;
	//d = fun(6, fun(a, c));
	//printf("%d", d);*/
	/*for (int i = 9; i > 0; i--)
	{
		printf("%d\r", i);
		Sleep(300);
	}*/
	//int a = 9;
	////a++;
	//printf("%d", -10%3);
	//printf("%d", 10 % 3);
	//printf("%d", 10 % -3);
	/*int a = 1,b=2,c=3;
	int *p = &c;
	printf("%d",ADD(2,3)*ADD(4,5));*/
	/*int a = 7;
	if (a = 0)
	{
		a++;
	}
	else
		a--;
	printf("%d", a);
*/
	/*int i, j;
	for (i = 0; i < 3; i += 2)
	{
		for (j = 0; j <= i; j++)
			printf("*");
	}*/
	

//int main()
//{
//	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int brr[9] = { 11, 12, 13, 14, 15, 16, 17, 18, 19 };
//	int crr[9] = { 0 };
//	for (int i = 0; i < 9; i++)
//	{
//		crr[i] = arr[i];
//		/*for (int i = 0; i < 9; i++)
//		{
//		printf("%d", crr[i]);
//		}*/
//		arr[i] = brr[i];
//		brr[i] = crr[i];
//	}
//	for (int i = 0; i < 9; i++)
//	{
//	printf("%d ", arr[i]);
//	printf("%d ", brr[i]);
//}