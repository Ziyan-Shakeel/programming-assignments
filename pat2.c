//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO DISPLAY RIGHT TRIANGLE USING ASTERISK.

#include<stdio.h>
int main()
{
   int a,b, row;
   printf("Enter the number of rows: ");
   scanf("%d", &row);

   for(a=1;a<=row;a++)
   {
     for(b=1;b<=a;b++)
     {
       printf("*");

     }
       printf("\n");

   }

   return 0;

}