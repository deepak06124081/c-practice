#include <stdio.h>

typedef struct employee
{
    int salary;
    float bonus;
} employee;
int main()
{
    employee e1;
    employee* ptr = &e1;
    ptr->salary = 50000;
    ptr->bonus = 5000.0;
    printf("The salary of the employee is %d and The Bonus of the employee is %.2f \n", ptr->salary, ptr->bonus);
    return 0;
}