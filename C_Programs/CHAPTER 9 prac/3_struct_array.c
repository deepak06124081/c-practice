#include <stdio.h>

struct employee
{
    char name[50];
    int code;
    float salary;
};
int main()
{
    struct employee facebook[100];
    facebook[0].code = 100;    ;
    facebook[1].code = 77;
    struct employee Deepak = {"Deepak", 100, 71.22f};
    printf("%s %d %f\n", Deepak.name, Deepak.code, Deepak.salary);
    return 0;
}