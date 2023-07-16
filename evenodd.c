//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter your desired number : \n");
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("%d is an even number.", n);
	}
	else
	{
		printf("%d is an odd number.", n);
	}
	return 0;
}