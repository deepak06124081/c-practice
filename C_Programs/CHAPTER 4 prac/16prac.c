#include <stdio.h>

int main(void)
{
    int product = 1;
    int n = 6;
    for(int i = 1 ; i<=n; i++)
    {
        product *= i;
    }
    printf("The factorial of %d is: %d", n, product);
    return 0;
}