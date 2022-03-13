#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	/*int a = -1;
//	int b = a >> 2;
//	printf("%d", b);*/
//	//printf("%d", 8 %-18 );
//	int a = 3;
//	short b = 4;
//	a=b%a++;
//	//printf("%d", sizeof(b = b + a));
//	printf("%d", b++);
//	printf("%d", a);
//}
//int main()
//{
//	int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8, } };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("%d\n", arr[1][1]);
//	printf("%d\n", arr[1][0]);
//	printf("%d\n", arr[0][0]);
//	printf("%d\n", arr[3][4]);
//}
//int main()
//{
//	int a[6][6] = { 0 };
//	for (int i = 1; i < 6; i++)
//		for (int j = 1; j < 6; j++)
//		{
//			a[i][j] = (i / j)*(j / i);
//			int s = (i / j)*(j / i);
//		}
//			//a[i][j] = 1;
//	for (int i = 1; i < 6; i++)
//	{
//		for (int j = 1; j < 6; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//		
//}
int main()
{
	/*printf("%d", (1 / 1)*(1 / 1));
	printf("%d", (1 / 2)*(2 / 1));
	printf("%d", (1 / 3)*(3/ 1));
	printf("%d", (1 / 4)*(4 / 1));
	printf("%d", (1 / 5)*(5 / 1));*/
	char arr[] = "ab c";
	char arr1[] = { 'a', 'b', 'c'};
	int sz = strlen(arr);
	int sz1 = strlen(arr1);
	printf("%d\n", sz);
	printf("%d\n", sz1);
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr1));
}