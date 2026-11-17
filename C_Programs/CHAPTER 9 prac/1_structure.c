#include <stdio.h>
#include <string.h>

struct employee
{
    char name[50];
    int code;
    float salary;
};
int main()
{
      struct employee emp1, emp2;
      emp1.code = 1001;
      emp1.salary = 50000.0;
      emp2.code = 1002;
      emp2.salary = 60000.0;
      strcpy(emp1.name, "John Doe");
      strcpy(emp2.name, "Jane Smith");

      printf("%d %s %.2f\n", emp1.code, emp1.name, emp1.salary);
      printf("%d %s %.2f\n", emp2.code, emp2.name, emp2.salary);
    return 0;
}