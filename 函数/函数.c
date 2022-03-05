#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//void get(int x, int y)
//{
//	int tem = 0;
//	tem = x;
//	x = y;
//	y = tem;
//	printf("%d %d", x, y);
//
//}
//int main()
//{
//	int a = 10;
//	int b = 0;
//	get(a, b);
//	printf("%d %d", a, b);
//	return 0;
//}
//void su(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x%i == 0)
//		{
//			printf("bushi");
//			break;
//		}
//	}
//	printf("%d", i);
//	if (i>sqrt(x))
//	{
//		printf("shi");
//	}
//
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	su(input);
//	return 0;
//}
//void c(int arr[], int n,int z)
//{
//	int i = 0;
//	int v[] = { 1, 2, 3, 4, 5, 6 };
//	int ret = sizeof(v) / sizeof(v[0]);
//	for (i = 0; i < z; i++)
//	{
//		printf("%d", v[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int n = 3;
//	int i = 0;
//	int ret = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < ret; i++)
//	{
//		printf("%d", arr[i]);
//	}*/
//	c(arr, n,ret);
//}
//void c(int arr[], int n, int ret)
//{
//	int left = 0;
//	int right = ret - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (n > arr[mid])
//		{
//			left = mid+1;
//		}
//		else if (n < arr[mid])
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int n = 4;
//	int ret = sizeof(arr) / sizeof(arr[0]);
//	c(arr,n,ret);
//	return 0;
//}
int main()
{
	int a = 6;
	int b = 9;
	//add(a, b);
	printf("%d", add(a, b));
}