#include <stdio.h>

int main()
{
    void *ptr;
    int a = 5;
    ptr = &a;
    printf("The value of a is %d\n", *(int*)ptr);
    return 0;
}