#include<stdio.h>
#include<stdlib.h>


float a, b, c, f;
int d, e;

int main(void)
{
	printf("一整天的總里程數\n");
	scanf_s("%f", &a);
	printf("汽油一公升多少錢\n");
	scanf_s("%f", &b);
	printf("平均一公升能行駛多少公里\n");
	scanf_s("%f", &c);
	printf("一天的停車費\n");
	scanf_s("%d", &d);
	printf("一天的通行費\n");
	scanf_s("%d", &e);
	f = a / c * b + d + e;
	printf("一整天開車去工作的花費為：\n%f\n", f);
	system("pause");
	return 0;
}