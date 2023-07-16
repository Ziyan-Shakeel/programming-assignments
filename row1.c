//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO FIND PATTERN.
#include<stdio.h>
int main()
{
	int i, a, row;
	printf("Enter number of rows: ");
	scanf("%d", &row);
	for(i=1;i<=row;i++)
	{
		for(a=row;a>i;a--)
		{
			printf(" ");
		}
	    for(a=1;a<=i;a++)
	    {
			printf("%d",a);
		}
		printf("\n");
	}
	return 0;
}