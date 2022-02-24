#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int ret = 0;
//	int i = 1;
//	int y = 0;
//	scanf("%d", &y);
//	for (n = 1; n <= y; n++)
//	{
//		sum = 1;
//		for (i = 1; i <= n; i++)
//		{
//			sum = sum*i;
//		}
//		ret = ret + sum;
//
//	}
//	
//	printf("%d", ret);
//	return 0;
//}
//int shi(int x,int y)
//{
//	int i = 1;
//	int sum = 1;
//	while (i <= 10)
//	{
//		sum = sum*i;
//		i++;
//	}
//	printf("%d", sum);
//}
int main()
{
	int i = 0;
	printf("ÇëÊäÈëÃÜÂë:");
	while (i < 3)
	{
		int s = 0;
		scanf("%d", &s);
		if (s == 123)
		{
			printf("ÊäÈëÕýÈ·\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎóÇëÖØÐÂÊäÈë£º");
		}
		i++;
	}
}