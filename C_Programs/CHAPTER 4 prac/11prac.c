#include <stdio.h>

int main(void)
{
    int n =10 ;
    scanf("%d\n", &n);
    for( int i =0; i < 11; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}