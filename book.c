//NAME- ZIYAN SHAKEEL
//ROLL NO.- ECE-22-15
//PROGRAM TO FIND REVERSE OF A FOUR DIGIT NUMBER.
#include <stdio.h>
int main()
{
    int n, r = 0;
    printf("Enter the number which you want to reverse: ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = r * 10;
        r = r + n % 10;
        n = n / 10;
    }
    printf("Reverse of your number is %d.\n", r);
    if (r == n)
    {
        printf("This number is a palindrome.");
    }
    else
    {
        printf("This number is not a palindrome.");
    }

    return 0;
}