//NAME- ZIYAN SHAKEEL 
//ROLL NO.- ECE-22-15
//PROGRAM FOR RIGHT ANGLED TRIANGLE.
#include <stdio.h>
int main()
{
    int i, q, row;
    printf("Enter valid input: ");
    scanf("%d", &row);
     for (i = 1; i <= row; i++)
    {
        for (q = row; q > i; q--)
        {
            printf(" ");
        }
        for (q = i; q >= i; q--)
        {
            printf("%d", q);
        }
        for(q=2;q<=i;q++)
        {
            printf("%d", q);

        }
        for (q=row;q>i;q--)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}