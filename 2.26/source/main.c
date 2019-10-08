#include<stdio.h>
#include<stdlib.h>

int a, b;

int main(void)
{
	printf("Enter two number ¡G");
	scanf_s("%d%d", &a, &b);

	if (a%b == 0)
	{
		printf("%d is a multiple of %d", a, b);
	}
	else
	{
		printf("%d is not a multiple of %d", a, b);
	}
	system("pause");
	return 0;

}