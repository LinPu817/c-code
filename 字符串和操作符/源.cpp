#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void muen()
{
	printf("***************************\n");
	printf("***1.play     0.exit ******\n");
	printf("***************************\n");
}
void game()
{
	int ret = rand()%100+1;
	//printf("%d\n", ret);
	int input = 0;
	while (1)
	{
		printf("�������:");
		scanf("%d", &input);
		if (input > ret)
		{
			printf("�´���\n");
		}
		else if (input < ret)
		{
			printf("��С��\n");
		}
		else {
			printf("�¶���\n");
			break;
		}
		
	}
}
void guess()
{

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	int again = 0;
	muen();
	do
	{
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			guess();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
		printf("����1����һ�֣������������˳���Ϸ\n");
		scanf("%d", &again);
		if (again == 1)
		{
			printf("����һ�֣�\n");
			game();
		}
		else
		{
			printf("�˳���Ϸ\n");
			break;
		}
	} while (input);
}