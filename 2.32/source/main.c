#include<stdio.h>
#include<stdlib.h>

int weightInPounds;
int heightInInches;
int BMI;

int main()
{
 
	printf("Enter your weight in pounds and your height in inches.\n");
	scanf_s("%d%d", &weightInPounds, &heightInInches);

	BMI = (weightInPounds * 703) / (heightInInches * heightInInches);
	printf("Your calculated BMI is %d\n", BMI);

	if (BMI < 18.5)
	{
		printf("You are currently underweight\n");
	}

	if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("You are currently normal\n");
	}

	if (BMI >= 25 && BMI <= 29.9)
	{
		printf("You are currently overweight\n");
	}

	if (BMI > 30)
	{
		printf("You are currently obese\n");
	}
	system("pause");
	return 0;
}