//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO CALCULATE THE MULTIPLICATION TABLE OF A GIVEN NUMBER.   
#include<stdio.h>
int main()
{
	int i, n, prod, l;
	printf("Enter the number for which the multiplication table is required: ");
	scanf("%d", &n);
	printf("Enter the number upto which the multiplication table is required: ");
	scanf("%d", &l);
	for(i=1;i<=l;i++)
	{
		prod=n*i;
		printf("%d * %d = %d \n",n,i,prod);
	}
	return 0;
}