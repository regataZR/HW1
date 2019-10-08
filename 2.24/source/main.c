#include<stdio.h>
#include<stdlib.h>

int a;

int main(void)
{
	printf("Enter a number¡G ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf(" %d is a odd number",a);
	}
	else if (a % 2 == 1)
	{
		printf(" %d is a even number",a);
	}
	
	system("pause");
	return 0;
}