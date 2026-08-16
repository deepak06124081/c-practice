#include <stdio.h>

int main(void)
{
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);

    return 0;
}