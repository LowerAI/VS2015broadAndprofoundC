#include <stdio.h>

int main3()
{
	int i = 50;
	float f = 98.0f;
	putchar(i);
	putchar(f); // putchar�Ὣ�������ֵ����ascii�벢��ӡ�����Ӧ���ַ�(ע���ӡ�󲻻��Զ�����)
	putchar(257); // ������ֵ����ascii��Χʱ���ӡ������
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
	putc('x', stdout); // �ȼ���putchar('x')
	putc(61, stdout);
	putc('8', stdout);
	putchar(59);
	putchar('\n');
	return 0;
}