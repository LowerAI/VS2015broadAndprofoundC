#include <stdio.h>

int main0()
{
	int n;
	printf("������һ��0-15֮�������");
	scanf_s("%d", &n);
	printf("%d", n / 2 / 2 / 2 % 2);
	printf("%d", n / 2 / 2 % 2);
	printf("%d", n / 2 % 2);
	printf("%d", n%2);

	return 0;
}