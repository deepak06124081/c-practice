#include <stdio.h>

int main(void)
{
    int b[2][3],i;
    for(i=0; i<2; i++)
    {
        for ( int j= 0; j < 3; j++)
        {
scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<2; i++)
    {
        for ( int j= 0; j < 3; j++)
        {
printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}