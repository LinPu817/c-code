#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	printf("������һ������\n");
		scanf("%d", &num);
		if (num >= 0 && num <= 100)
		{
			if (num % 2 == 1){
				printf("������");
			}
			else
				printf("��������");
		}
		else
			printf("������1��100֮�����");
		return 0;
}
int main()
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("xingqi1"); break;
	case 2:
		printf("xingqi2"); break;
	case 3:
		printf("xingqi3"); break;
	case 4:
		printf("xingqi4"); break;
	default:
		printf("dashabi");
		break;
	}
}
int main()
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	default:
		printf("��Ϣ��");
		break;
	}
}
int main()
{
	int i = 1;
	while (i<10)
	{
		i = i++;
		printf("%d \n", i);
	}
}
int main()
{
	int ch = 0;
	while ((ch=getchar()) != 'e')
	{
		putchar(ch);
	}
	return 0;
}