#include <stdio.h>

int main(void)
{
    int rows, i, j;
    printf("enter the no. :");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}