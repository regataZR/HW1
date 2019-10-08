#include<stdio.h>
#include<stdlib.h>

int a, b, c, l, s;

int main(void)
{
	printf("Enter three integer numbers:");
	scanf_s("%d%d%d", &a, &b, &c);

	s = a;
	if (b < s) {
		s = b;
	}
	if (c < c) {
		s = c;
	}
	printf("The smallest number is %d\n", s);

	l = a;
	if (b > l) {
		l = b;
	}
	if (c > l) {
		l = c;
	}
	printf("The largest number is %d\n", l);

	system("pause");

	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");

	return 0;

}