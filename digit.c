//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO FIND THE SUM OF DIGITS OF A FOUR DIGIT NUMBER.
#include<stdio.h>
int main()
{
	int number, digit, sum=0;
	printf("Enter any 4 digit number: ");
	scanf("%d", &number);
	digit = number % 10;
    sum += digit;
    number /= 10;
    digit = number % 10;
    sum += digit;
    number /= 10;
    digit = number % 10;
    sum += digit;
    number /= 10;
    digit = number % 10;
    sum += digit;
	printf("Sum of digits is %d.",sum);
    return 0;
    
}