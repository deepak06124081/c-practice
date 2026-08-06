#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 10;
    int c ;
    printf("Before swaping a= %d\n b =%d\n ", a,b);
    c=a;
    a=b;
    b=c;

    printf("After swaping a=%d\n b = %d",a,b);

    return 0;
}