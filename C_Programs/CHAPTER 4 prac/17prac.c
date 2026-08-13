#include <stdio.h>

int main(void)
{
    int b = 20;
    int c =30;
    int a = c++ + b-- * ++b ;
    
    printf("The value of the a is %d\n", a);
    return 0;
}