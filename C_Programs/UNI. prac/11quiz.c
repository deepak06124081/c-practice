#include <stdio.h>

int main(void)
{
    int i,j;
    for(i=1; i<=4; i++)
    {
        printf("\n");
        for(j=i; j<=4; j++)
        {
    printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}