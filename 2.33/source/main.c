#include<stdio.h>
#include<stdlib.h>


float a, b, c, f;
int d, e;

int main(void)
{
	printf("�@��Ѫ��`���{��\n");
	scanf_s("%f", &a);
	printf("�T�o�@���ɦh�ֿ�\n");
	scanf_s("%f", &b);
	printf("�����@���ɯ��p�h�֤���\n");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O\n");
	scanf_s("%d", &d);
	printf("�@�Ѫ��q��O\n");
	scanf_s("%d", &e);
	f = a / c * b + d + e;
	printf("�@��Ѷ}���h�u�@����O���G\n%f\n", f);
	system("pause");
	return 0;
}