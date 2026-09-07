#include <stdio.h>

int main(void)
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(i%2==0 && i%3==0)
    {
        printf("%d is divisible by 2 and 3\n", i);
    }
    else
    {
        printf("%d is not divisible by 2 and 3\n", i);
    }
    }
    return 0;
}