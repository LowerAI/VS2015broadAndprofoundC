#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4()
{
	FILE *pf = fopen("E:\\1.txt", "a"); // 原位置没有指定文件时会自动创建而不会抛异常
	putc('l', pf);
	putc('v', pf);
	putc('x', pf);
	putc('i', pf);
	putc('n', pf);
	putc('董', pf);  // 打印中文会乱码
	putc('双', pf);
	fclose(pf);  // 关闭文件并把内容刷新进入文件
	return 0;
}