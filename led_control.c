#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
//#define _CRT_SECURE_NO_WARNINGS

int run_led(int a, int b)
{
	//int c = 1;
	return 1;
}
int off1_led(int a, int b)
{
	return 0;
}
int off_led(int a, int b)
{
	if (a == 1 && b == 0 || a == 0 && b == 1)
	{
		return 1;
	}
	else if (a == 1 && b == 1 || a == 0 && b == 0)
	{
		return 0;
	}

}
int judge_input(int a, int b)
{
	
	if (a == 1 && b == 0|| a == 0 && b == 1)
	{
		return 1;
	}
	else if (a == 1 && b == 1 || a == 0 && b == 0)
	{
		return 0;
	}
}

int main()
{
	//以scanf（）函数模拟输入，1表示开关按下,0表示开关没按
	//以printf（）输出c的值，1表示的灯亮，0表示灯灭；
	//a表示楼层1，b表示楼层2
	int c = 0;
	int count = 1;//对用户的输入次数进行计数；
	while (1)
	{
		int a = 0;
		int b = 0;
		int d = 0;

		printf("请输入您的选择\n");
		scanf("%d %d", &a, &b);//接收开关的模拟量
		++count;
		Sleep(100);//设置延时模拟用户按键时间过长的情况
		if (count % 2 == 0)
		{
			d = judge_input(a, b);//将接受到的值传入判断输入是否正确判断函数
			if (d == 1 )
			{
				c = run_led(a, b);
				printf("%d 灯点亮\n", c);

				continue;
			}
			else
			{
				printf("您的输入有误，请重新输入\n");
				--count;
				continue;
			}
		}
		if (count % 2 == 1)
		{
			d = off_led(a, b);//将接受到的值传入判断输入是否正确判断函数
			if (d == 1 )
			{
				c = off1_led(a, b);
				printf("%d 灯关闭\n", c);

				continue;
			}
			else
			{
				printf("您的输入有误，请重新输入\n");
				--count;
				continue;
			}
		}
	}
	system("pause");
	return 0;
}