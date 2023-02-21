#include <stdio.h>

int test3_1(void)
{
	int i_up_ove = 2147483647;
	//i_up_ove = i_up_ove + 1;
	printf("%d 整数上溢时: %d\n", i_up_ove, i_up_ove + 1);
	double d_up_ove = 1.79769e+308;
	printf("%f 浮点数上溢时: %f\n", d_up_ove, d_up_ove * 2);
	double d_down_ove = 3.456789e-3;
	printf("%f 浮点数下溢时: %f\n", d_down_ove, d_down_ove / 10 );
	return 0;
}

int test3_2(void)
{
	int i_ASCII_code;
	printf("请输入一个 ASCII 码比如 97 为 a\n");
	scanf_s("%d", &i_ASCII_code);
	printf("你输入的数为: %d\n转换为字符为: %c\n", i_ASCII_code, i_ASCII_code);
	return 0;
}

int test3_3(void)
{
	printf("\a我他妈直接报警,哔卟,哔卟,哔卟,\n\"快看我在双引号里面\"");
	return 0;
}

int test3_4(void)
{
	double d_nub;
	printf("请输入一个小数,回车结束:\n");
	scanf_s("%lf", &d_nub); //注意 double 类型接收必须使用 %lf, float 使用 %f,也可以使用 %lf 但是不推荐
	printf("小数形式打印:%.3f\n", d_nub);
	printf("指数形式打印:%e\n", d_nub);
	printf("p计数法形式打印:%a\n", d_nub);
	return 0;
}

int test3_5(void)
{
	int i_age;
	printf("请输入年龄:\n");
	scanf_s("%d", &i_age);
	printf("你的年龄为:%d\n对应的秒数为:%f\n", i_age, i_age * 3.156e+07);
	return 0;
}

int test3_6(void)
{
	int i_nub;
	printf("请输入水的夸脱数:\n");
	scanf_s("%d", &i_nub);
	printf("输入的夸脱数为:%d\n等于%lf个水分子\n",i_nub, i_nub * 950.0 / 3.0e-23);
	return 0;
}

int test3_7(void)
{
	int i_height;
	printf("请输入身高(英尺):\n");
	scanf_s("%d", &i_height);
	printf("你的身高英尺为:%d\n转换为厘米为%f\n", i_height, i_height * 2.54);
	return 0;
}

int test3_8(void)
{
	double  d_cup;
	printf("请输入杯数:\n");
	scanf_s("%lf", &d_cup);
	printf("%.2f杯数=%.2f品脱\n", d_cup, d_cup / 2);
	printf("%.2f杯数=%.2f盎司\n", d_cup, d_cup * 8);
	printf("%.2f杯数=%.2f汤勺\n", d_cup, d_cup * 8 * 2);
	printf("%.2f杯数=%.2f茶勺\n", d_cup, d_cup * 8 * 2 * 3);
	return 0;
}

