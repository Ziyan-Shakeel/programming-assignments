//NAME- ZIYAN SHAKEEL
//ROLL-NO.- ECE-22-15
//PROGRAM TO FIND REPEATED NUMBERS 1 22 333 4444...
#include<stdio.h>
int main()
{
	int i, q,n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(q=1;q<=i;q++)
		{
			printf("%d ",i);
		}
	}
}