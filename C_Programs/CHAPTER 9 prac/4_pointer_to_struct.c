#include <stdio.h>

struct employee
{
    char name[50];
    int code;
    float salary;
};
int main()
{
    struct employee e1;
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;
    //printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code);

    return 0;
}
