#include <stdio.h>

int main(void)
{
    int i,num,temp = 0;
    printf("Enter the no. :");
    scanf("%d",&num);

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            temp++;
            break;
        }
    }
    if(temp == 0 && num != 1)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }
    return 0;
} 