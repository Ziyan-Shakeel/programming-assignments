//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO CALCULATE TAX.
#include<stdio.h>
int main()
{
	int income; char r='%';
	printf("Enter your total income: \n");
	scanf("%d",&income);
	if(income<150000)
	{
	     printf("No Tax charges.");	
	}
	else if( income>=150000 && income<=300000)
	{
	     printf("Tax charges are 10%c of the income.",r);	
	}
	else if(income>300000 && income<=500000)
	{
	     printf("Tax charges are 20%c of the income.",r);	
	}
	else if(income>500000)
	{
	     printf("Tax charges are 30%c of the income.",r);	
	}
	else
	{
		printf("Invalid");
	}
	return 0;
}