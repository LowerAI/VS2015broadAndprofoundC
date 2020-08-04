#include <stdio.h>

int main1()
{
	char c = 127; // 有符号(可正可负) 0到127或-1到128
	unsigned char u = 200; // 无符号 0到255
	c = 0x0F;
	c = 0x7F;
	c = 0x80;
	c = 0x81;
	c = 0xA0;
	c = 0xF0;
	c = 0xFF;
	return 0;
}