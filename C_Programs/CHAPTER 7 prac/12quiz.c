#include <stdio.h>

int main(void)
{
    int b[2][3],a[2][3],i,sum=0;
    for(i=0; i<2; i++)
    {
        for ( int j= 0; j < 3; j++)
        {
scanf("%d %d",&b[i][j], &a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<2; i++)
    {
        for ( int j= 0; j < 3; j++)
        {
printf("%d %d ",b[i][j], a[i][j]);
sum=sum+b[i][j]+a[i][j];
        }
        printf("\n");
    }
    
    printf("Sum: %d\n", sum);
    return 0;
}