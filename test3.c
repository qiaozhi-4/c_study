#include <stdio.h>

int test3_1(void)
{
	int i_up_ove = 2147483647;
	//i_up_ove = i_up_ove + 1;
	printf("%d ��������ʱ: %d\n", i_up_ove, i_up_ove + 1);
	double d_up_ove = 1.79769e+308;
	printf("%f ����������ʱ: %f\n", d_up_ove, d_up_ove * 2);
	double d_down_ove = 3.456789e-3;
	printf("%f ����������ʱ: %f\n", d_down_ove, d_down_ove / 10 );
	return 0;
}

int test3_2(void)
{
	int i_ASCII_code;
	printf("������һ�� ASCII ����� 97 Ϊ a\n");
	scanf_s("%d", &i_ASCII_code);
	printf("���������Ϊ: %d\nת��Ϊ�ַ�Ϊ: %c\n", i_ASCII_code, i_ASCII_code);
	return 0;
}

int test3_3(void)
{
	printf("\a������ֱ�ӱ���,��߲,��߲,��߲,\n\"�쿴����˫��������\"");
	return 0;
}

int test3_4(void)
{
	double d_nub;
	printf("������һ��С��,�س�����:\n");
	scanf_s("%lf", &d_nub); //ע�� double ���ͽ��ձ���ʹ�� %lf, float ʹ�� %f,Ҳ����ʹ�� %lf ���ǲ��Ƽ�
	printf("С����ʽ��ӡ:%.3f\n", d_nub);
	printf("ָ����ʽ��ӡ:%e\n", d_nub);
	printf("p��������ʽ��ӡ:%a\n", d_nub);
	return 0;
}

int test3_5(void)
{
	int i_age;
	printf("����������:\n");
	scanf_s("%d", &i_age);
	printf("�������Ϊ:%d\n��Ӧ������Ϊ:%f\n", i_age, i_age * 3.156e+07);
	return 0;
}

int test3_6(void)
{
	int i_nub;
	printf("������ˮ�Ŀ�����:\n");
	scanf_s("%d", &i_nub);
	printf("����Ŀ�����Ϊ:%d\n����%lf��ˮ����\n",i_nub, i_nub * 950.0 / 3.0e-23);
	return 0;
}

int test3_7(void)
{
	int i_height;
	printf("���������(Ӣ��):\n");
	scanf_s("%d", &i_height);
	printf("������Ӣ��Ϊ:%d\nת��Ϊ����Ϊ%f\n", i_height, i_height * 2.54);
	return 0;
}

int test3_8(void)
{
	double  d_cup;
	printf("�����뱭��:\n");
	scanf_s("%lf", &d_cup);
	printf("%.2f����=%.2fƷ��\n", d_cup, d_cup / 2);
	printf("%.2f����=%.2f��˾\n", d_cup, d_cup * 8);
	printf("%.2f����=%.2f����\n", d_cup, d_cup * 8 * 2);
	printf("%.2f����=%.2f����\n", d_cup, d_cup * 8 * 2 * 3);
	return 0;
}

