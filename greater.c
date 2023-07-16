//NAME-ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO FIND GREATEST AMONG TWO NUMBERS.
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter number a: ");
	scanf("%d", &a);
	
	printf("Enter number b: ");
	scanf("%d", &b);

	if (a > b)

	{
		printf("%d is greater.", a);
	}

	else if (a == b)

	{
		printf("The two numbers are equal.");
	}

	else

	{
		printf("%d is greater.", b);
	}

	return 0;
}