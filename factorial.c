//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO FIND THE FACTORIAL OF A NUMBER N.
#include<stdio.h>
int main()
{
	int i,n,factorial =1 ;
	printf("Enter any number: ");
	scanf("%d", &n);
	if(n<0)
	{
	printf("Invalid! You entered a negative number.");
	}
	else{
	
	for(i=n;i>=1;i--)
	{
		factorial*=i;
	}
	printf("Factorial of %d is %d.",n,factorial);
	}
	return 0;
}