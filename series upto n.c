//NAME- ZIYAN SHAKEEL 
//ROLL NO.- ECE-22-15
//PROGRAM TO DISPLAY 12345 12345 12345...
#include<stdio.h>
int main()
{
	int i, n, l;
	printf("Enter valid input: ");
	scanf("%d",&l);
	for(n=1;n<=l;n++)
	{
	    for(i=1;i<=5;i++)
     	{
		    printf("%d ",i);
	    } 
	    printf(" ");
    }
	return 0;
}