#include <stdio.h>

int main3()
{
	int i = 50;
	float f = 98.0f;
	putchar(i);
	putchar(f); // putchar会将输入的数值当作ascii码并打印出其对应的字符(注意打印后不会自动换行)
	putchar(257); // 输入数值超过ascii范围时会打印出乱码
	putchar(1000);
	putchar('\n');
	putchar('@');
	putchar('d');
	putchar('.');
	putchar('c');
	putchar('o');
	putchar('m');

	putchar('\n');
	putchar('A' + 5);
	putc('x', stdout); // 等价于putchar('x')
	putc(61, stdout);
	putc('8', stdout);
	putchar(59);
	putchar('\n');
	return 0;
}