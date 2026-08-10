#include <stdio.h>

int main(void)
{
    char  i = 'A' ;
    char*j = &i; // j is pointer poinying to i 
    
    float k = 5.232;
    float* k1 = &k;
    printf("The address of i %p\n", &i);
    printf("The address of i %p\n", j);
    printf("The address of i is %p\n", &k);

    printf("The value at address j is %d\n", *(&i));

    return 0;
} 