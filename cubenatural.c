//NAME-ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO DISPLAY THE CUBE OF NATURAL NUMBERS UPTO N.  
#include<stdio.h>
int main()
{
	int i, n, cube;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cube=i*i*i;
		
		printf("%d, ", cube);
	}
	return 0;
}