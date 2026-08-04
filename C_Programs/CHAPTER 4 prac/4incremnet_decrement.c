#include <stdio.h>

int main(void)
{
    int i =5;
    printf("The value of i %d\n", i);

    i = i + 5; //10
    printf("The value of i %d\n", i );

    printf("The value of i %d\n", i++);//10
    printf("The value of i %d\n", i);//11

    // i++ prints the value of i first and then increments i(post increment operator)
    // ++i increments the value of i first and then prints the value of i (pre increment operator)
    
    return 0;
}