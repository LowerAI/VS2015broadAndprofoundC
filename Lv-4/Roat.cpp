// char (unsigned char)
// short (unsigned short)
// long (unsigned long)
// float 没有unsigned float
// double 没有unsigned double
#include <stdio.h>

int main2()
{
	/*float f;
	int n;
	printf("请输入货物的单价：");
	scanf_s("%f", &f);
	printf("请输入销售的数量：");
	scanf_s("%d", &n);
	printf("销售总额是：%f", f*n);*/

	double p = 88888888.1, a = 5.6;
	double q = 88888888.10000005;

	// 在VS2015中由于double小数位超过一定后精度降低因此p==q，因此判断条件需改写为
	// if (p-q < 0.00001 && p-q > -0.0001)
	if (p == q)
	{
		puts("==");
	}
	else
	{
		puts("!=");
	}
	return 0;
}