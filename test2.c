#include <stdio.h>

int test2_1(void)
{
	printf("����\n");
	printf("��\n��\n");
	printf("��");
	printf("��\n");
	return 0;
}

int test2_2(void)
{
	printf("����\n");
	printf("����\n");
	return 0;
}

int test2_3(void)
{
	int age, day;
	age = 22;
	day = 22 * 365;
	printf("age = %d  day = %d\n", age, day);
	return 0;
}

int test2_4(void)
{
	test2_4_f1();
	test2_4_f1();
	test2_4_f1();
	test2_4_f2();
	return 0;
}

int test2_4_f1(void)
{
	printf("hhhh\n");
	return 0;
}

int test2_4_f2(void)
{
	printf("kkk\n");
	return 0;
}



