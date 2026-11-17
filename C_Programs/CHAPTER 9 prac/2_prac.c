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
      struct employee emp1, emp2, emp3;

      printf("Enter the value of name\n");
      scanf("%s", emp1.name);

      printf("Enter the value of code\n");
      scanf("%d", &emp1.code);
        
      printf("Enter the value of salary\n");
        scanf("%f", &emp1.salary);
        printf("%d %s %.2f\n", emp1.code, emp1.name, emp1.salary); 

        printf("Enter the value of name\n");
      scanf("%s", emp2.name);

      printf("Enter the value of code\n");
      scanf("%d", &emp2.code);
        
      printf("Enter the value of salary\n");
        scanf("%f", &emp2.salary);
     printf("%d %s %.2f\n", emp2.code, emp2.name, emp2.salary); 

        printf("Enter the value of name\n");
      scanf("%s", emp3.name);

      printf("Enter the value of code\n");
      scanf("%d", &emp3.code);
        
      printf("Enter the value of salary\n");
        scanf("%f", &emp3.salary);
      printf("%d %s %.2f\n", emp3.code, emp3.name, emp3.salary); 

      return 0;
}