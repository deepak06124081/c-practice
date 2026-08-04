#include <stdio.h>

int main(void)
{
    int i = 1 ;
    int sum = 0;
    while(i<=10){
        sum +=i;
        i++;
    }
    printf("The sum of the first 10 natural numbers is: %d", sum);
    return 0;
}