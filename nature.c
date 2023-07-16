//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO DISPLAY N NATURAL NUMBERS AND CALCULATE THEIR PRODUCT.
#include<stdio.h>
int main()
{
	int i, n, product = 1;
	printf("Enter the number of terms : ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%d, ", i);
		product=product*i;
	}
		printf("\nThe product of these natural numbers is %d.",product);
		return 0;
}