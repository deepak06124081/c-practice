#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for ( int i =0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The values of the array are: \n");
    for ( int i=0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }   
    n = 10;
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for ( int i =0; i < n; i++)         
    {
        scanf("%d", &ptr[i]);
    }
    printf("The values of the array after reallocating are: \n");
    for ( int i=0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}