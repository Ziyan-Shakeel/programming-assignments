//NAME-ZIYAN SHAKEEL
//ROLL NO.-ECE-22-15
//PROGRAM THAT TAKES X-Y COORDINATES AND GIVES INFORMATION ABOUT THE QUADRANT IN WHICH IT LIES.
#include <stdio.h>
int main()
{
	float x, y;
	printf("Enter the x-coordinate: ");
	scanf("%f", &x);
	printf("Enter the y-coordinate: ");
	scanf("%f", &y);
	if (x > 0, y > 0)
	{
		printf("%.3f,%.3f is in 1st quadrant.", x, y);
	}
	else if (x > 0, y < 0)
	{
		printf("%.3f,%.3f is in 4th quadrant.", x, y);
	}
	else if (x<0, y> 0)
	{
		printf("%.3f,.3%f is in 2nd quadrant.", x, y);
	}
	else if (x < 0, y < 0)
	{
		printf("%.3f,%.3f is in 3rd quadrant.", x, y);
	}
	else if (x == 0 && y == 0)
	{
		printf("%.3f,%.3f lies on the origin", x, y);
	}
	else if (x == 0 && y != 0)
	{
		printf("%.3f,%.3f lies on the y-axis", x, y);
	}
	else if ("x!=0 && y==0")
	{
		printf("%.3f,%.3f lies on the x-axis", x, y);
	}
	return 0;
}