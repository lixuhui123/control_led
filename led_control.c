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
	//��scanf��������ģ�����룬1��ʾ���ذ���,0��ʾ����û��
	//��printf�������c��ֵ��1��ʾ�ĵ�����0��ʾ����
	//a��ʾ¥��1��b��ʾ¥��2
	int c = 0;
	int count = 1;//���û�������������м�����
	while (1)
	{
		int a = 0;
		int b = 0;
		int d = 0;

		printf("����������ѡ��\n");
		scanf("%d %d", &a, &b);//���տ��ص�ģ����
		++count;
		Sleep(100);//������ʱģ���û�����ʱ����������
		if (count % 2 == 0)
		{
			d = judge_input(a, b);//�����ܵ���ֵ�����ж������Ƿ���ȷ�жϺ���
			if (d == 1 )
			{
				c = run_led(a, b);
				printf("%d �Ƶ���\n", c);

				continue;
			}
			else
			{
				printf("����������������������\n");
				--count;
				continue;
			}
		}
		if (count % 2 == 1)
		{
			d = off_led(a, b);//�����ܵ���ֵ�����ж������Ƿ���ȷ�жϺ���
			if (d == 1 )
			{
				c = off1_led(a, b);
				printf("%d �ƹر�\n", c);

				continue;
			}
			else
			{
				printf("����������������������\n");
				--count;
				continue;
			}
		}
	}
	system("pause");
	return 0;
}