#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("请输入长和宽：");
//	float a = 0;
//	float b = 0;
//	scanf("%f %f", &a,&b);
//	float sum = 0;
//	sum = a*b;
//	printf("面积为：%.2f\n", sum);
//	return 0;
//	
//
//}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	int left = 0;
	int right = sz-1;
	while (left<=right){
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]==k)
		{
			printf("找到了,下标为：%d",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}