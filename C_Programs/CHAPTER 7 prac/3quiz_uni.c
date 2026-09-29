#include <stdio.h>

int main(void)
{
    int marks[5], sum = 0, i;

    printf("Enter marks of 5 students\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at %d is %d\n", i, marks[i]);
        sum = sum + marks[i];
    }

    printf("The Sum of Marks is %d", sum);
    return 0;
}