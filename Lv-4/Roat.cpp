// char (unsigned char)
// short (unsigned short)
// long (unsigned long)
// float û��unsigned float
// double û��unsigned double
#include <stdio.h>

int main2()
{
	/*float f;
	int n;
	printf("���������ĵ��ۣ�");
	scanf_s("%f", &f);
	printf("���������۵�������");
	scanf_s("%d", &n);
	printf("�����ܶ��ǣ�%f", f*n);*/

	double p = 88888888.1, a = 5.6;
	double q = 88888888.10000005;

	// ��VS2015������doubleС��λ����һ���󾫶Ƚ������p==q������ж��������дΪ
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