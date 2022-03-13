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
		printf("请猜数字:");
		scanf("%d", &input);
		if (input > ret)
		{
			printf("猜大了\n");
		}
		else if (input < ret)
		{
			printf("猜小了\n");
		}
		else {
			printf("猜对了\n");
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
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			guess();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择\n");
		}
		printf("输入1再来一局，输入任意字退出游戏\n");
		scanf("%d", &again);
		if (again == 1)
		{
			printf("再来一局！\n");
			game();
		}
		else
		{
			printf("退出游戏\n");
			break;
		}
	} while (input);
}