#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter a no.");
    scanf("the value is %d\n", &a);
    
    if (a<10)
    {
        printf("The cube of number is %d\n",a*a*a);
    }
    else
    {
        printf("The cube of no. is lesser than 10");
    
    }
    
    return 0;
}