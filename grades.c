//NAME-ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO CALCULATE GRADES AND PERCENTAGE
#include<stdio.h>
int main()
{
	int physics, chemistry, math, english, computer;
	float Percent,Total;
	/*printf("Enter marks for Phy, Che, Math, Eng, Cs respectively: \n");
	scanf("%d%d%d%d%d",&phy,&che,&math,&eng,&cs);*/
    printf("Enter marks of physics: ");   scanf("%d\n", &physics);
    printf("Enter marks of chemistry: ");  scanf("%d\n", & chemistry);
	printf("Enter marks of math: ");       scanf("%d\n", &math);
	printf("Enter marks of english: ");    scanf("%d\n", &english);
	printf("Enter marks of computer: ");   scanf("%d\n", &computer);



	Total = physics + chemistry + math + english + computer;
	Percent=Total/500*100;
	printf("Your percentage is %.3f.\n",Percent);
	if(Percent<=100 && Percent>=85)
	{
	     printf("Grade A");	
	}
	else if(Percent<85 && Percent>=75)
	{
	     printf("Grade B");	
	}
	else if(Percent<75 && Percent>=60)
	{
	     printf("Grade C");	
	}
	else if(Percent<60 && Percent>=45)
	{
	     printf("Grade D");	
	}
	else if(Percent<45 && Percent>=33)
	{
		printf("Grade E");
	}
	else 
	{
		printf("Fail!");
	}
	return 0;
}