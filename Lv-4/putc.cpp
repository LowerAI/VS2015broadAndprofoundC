#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4()
{
	FILE *pf = fopen("E:\\1.txt", "a"); // ԭλ��û��ָ���ļ�ʱ���Զ��������������쳣
	putc('l', pf);
	putc('v', pf);
	putc('x', pf);
	putc('i', pf);
	putc('n', pf);
	putc('��', pf);  // ��ӡ���Ļ�����
	putc('˫', pf);
	fclose(pf);  // �ر��ļ���������ˢ�½����ļ�
	return 0;
}