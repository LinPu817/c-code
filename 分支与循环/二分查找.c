#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("�����볤�Ϳ�");
//	float a = 0;
//	float b = 0;
//	scanf("%f %f", &a,&b);
//	float sum = 0;
//	sum = a*b;
//	printf("���Ϊ��%.2f\n", sum);
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
			printf("�ҵ���,�±�Ϊ��%d",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;
}