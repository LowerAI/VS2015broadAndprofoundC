#include <stdio.h>

int main0()
{
	int n;
	printf("请输入一个0-15之间的数字");
	scanf_s("%d", &n);
	printf("%d", n / 2 / 2 / 2 % 2);
	printf("%d", n / 2 / 2 % 2);
	printf("%d", n / 2 % 2);
	printf("%d", n%2);

	return 0;
}