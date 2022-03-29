#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	gaem();
}
void gaem()
{
	char a;
	while ((a = getchar() == 'l'))
	{
		int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		printf("%d", arr[5]);
		printf("%d", 1["acse"] - 'a');
		printf("%d", arr[1]);
		int a = 5;
		int i = 0;
		for (i = 0; i < 9; i++)
		{
			if (a == arr[i])
			{
				printf("%d", i);
			}
		}
		i = 0;
		printf("%d", ++i);
		if (i == 1)
			printf("%d", ++i);
		a = 10;
		int b = 10;
		printf("%d", (a = a*b + 600, a*b, a = a + 20));
		for (i = 0; i < 4; i++)
			printf("%d", arr[6]);
		printf("%d", 2[arr]);
		printf("%d", ']' - 'V' + 10);
	}
}