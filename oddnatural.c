//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO DISPLAY N ODD NATURAL NUMBERS AND FIND THEIR SUM.
#include<stdio.h>
int main()
{
	int i, n, sum = 0;
	printf("Enter number of terms required: ");
	scanf("%d", &n);
	
	printf("First %d odd natural numbers are: ", n);
	
	for(i=1;i<=n;i++)
	{ 
	
		printf("%d, ", 2*i-1);
		sum += (2*i-1);
		
	}
	
	printf("Sum of first %d odd natural numbers is %d.",n , sum);
	return 0;
}