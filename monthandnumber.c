//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO CALCULATE MONTH ACCORDING TO A GIVEN.
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number of month you want : ");
	scanf("%d",&a);
	if(a==1)
	{
		printf("January");
	}
	else if(a==2)
	{
		printf("February");
	}
	else if(a==3)
	{
		printf("March");
	}
	else if(a==4)
	{
		printf("April");
	}
	else if(a==5)
	{
		printf("May");
	}
	else if(a==6)
	{
		printf("June");
	}
	else if(a==7)
	{
		printf("July");
	}
	else if(a==8)
	{
		printf("August");
	}
	else if(a==9)
	{
		printf("September");
	}
	else if(a==10)
	{
		printf("October");
	}
	else if(a==11)
	{
		printf("November");
	}
	else if(a==12)
	{
		printf("December");
	}
	else
	{
		printf("Invalid! No month corresponding to this number.");
	}
	return 0;
}