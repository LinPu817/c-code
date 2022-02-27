#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d%d%d", a, b, c);
}
int main()
{
	int i = 0;
	for (i = 3; i <= 1000; i=i+3)
	{
		printf("%d  ", i );
	}
}
int main()
{
	int a = 0;
	int b = 0;
	int r = 0;
	scanf("%d%d", &a, &b);
	while (a%b)
	{
		r = a%b;
		a = b;
		b = r;
	}
	printf("%d", b);
}
int main()
{
	int count = 0;
	int i = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j < i/2; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j==i/2)
		{
			printf("%d", i);
			count++;
		}
		
	}
	printf("%d", count);
}
int main()
{
	int count = 0;
	int i = 0;
	for (i = 101; i <= 200; i +=2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i))
		{
			printf("%d", i);
			count++;
		}

	}
	printf("%d", count);
}
int main()
{
	printf("%d", -5%3);
	printf("%d", -5/3);
	printf("%d", -5 / 3);
}
int main()
{
	int i = 0;
	int count = 0;
	int sum = 0;
	int c = 0;
	for (i = 1; i <=9; i++)
	{
		int j = 0;
		for (j = 9; j >=i; j--)
		{
				sum = j*i;
				printf("%d*%d=%-2d ", i, j, sum);
		}
		printf("\n");
	}
}