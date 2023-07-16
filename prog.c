//NAME-ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM THAT READS 10 NUMBERS FROM THE KEYBOARD AND FINDS SUM AND AVERAGE.
#include<stdio.h>
int main()
{
  int i, num[10], sum=0;
  float average;
  printf("Enter the 10 numbers: \n");
  for (i=0;i<=10;i++)
  {
    scanf("%d", &num[i]);
    sum=sum+num[i];
  }
 printf("The sum of the numbers is %d.\n", sum);
 average=sum/10.0;
 printf("Average of the numbers is %.3f.", average);

 return 0;

}