//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO DISPLAY N TERMS OF NATURAL NUMBERS AND THEIR SUM.
#include<stdio.h>
int main()
{
	int i, n,sum=0;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%d, ",i);
		sum+=i;
	}
	printf("\nThe sum the of these natural numbers is %d.", sum);
	return 0;
	
}