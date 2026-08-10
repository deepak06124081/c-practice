#include <stdio.h>

int main(void)
{
    int i = 72 ;
    int*j = &i; // j is pointer poinying to i 
    printf("The address of i %p\n", &i);
    printf("The address of j %p\n", j);

    return 0;
} 