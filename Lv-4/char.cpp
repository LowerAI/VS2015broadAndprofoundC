#include <stdio.h>

int main1()
{
	char c = 127; // �з���(�����ɸ�) 0��127��-1��128
	unsigned char u = 200; // �޷��� 0��255
	c = 0x0F;
	c = 0x7F;
	c = 0x80;
	c = 0x81;
	c = 0xA0;
	c = 0xF0;
	c = 0xFF;
	return 0;
}