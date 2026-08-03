#include <stdio.h>

int main(void)
{
    int a=4, b=2 ,c=6,d=32;
    if(a>b && b>c && b>d)
    {
        printf("The greatest number is %d\n", a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("The greatest number is %d\n", b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("The greatest number is %d\n", c);
    }
    else
    {
        printf("The greatest number is %d\n", d);
    }
    return 0;
}