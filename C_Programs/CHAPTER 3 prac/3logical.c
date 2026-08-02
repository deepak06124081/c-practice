#include <stdio.h>

int main(void)
{
    int a = 1; int b = 0;
    printf("The value of a and b are is %d\n" , a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not a is %d", !a);
    return 0;
}