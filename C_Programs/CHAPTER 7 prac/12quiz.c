#include <stdio.h>

int main(void)
{
    int b[3][3],a[3][3],i,sum=0, multiplication=1;
    for(i=0; i<3; i++)
    {
        for ( int j= 0; j < 3; j++)
        {
scanf("%d %d",&b[i][j], &a[i][j]);
        }
    }
    printf("\n The sum of the two matrices is:\n");
    for(i=0; i<3; i++)
    {
        for ( int j= 0; j < 3; j++)
        {
printf("%d %d",b[i][j], a[i][j]);
sum=sum+b[i][j]+a[i][j];        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for ( int j= 0; j < 3; j++)
        {
printf("%d %d",a[i][j], b[i][j]);
multiplication=multiplication*b[i][j]*a[i][j];        }
        printf("\n");
    }
    
    printf("Sum: %d\n", sum);
    printf("Multiplication: %d\n", multiplication);
    return 0;
}