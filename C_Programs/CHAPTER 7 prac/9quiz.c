#include <stdio.h>

int main(void)
{
    int n, a=0 ,b=1, c,i;
    printf("Enter the integers: ");
    scanf("%d", &n);
    printf("The Fibonacci series is:");
    for (i = 0;i < n; i++)
    {
        printf("%d", a);
        c = a+b;
        a = b;
        b = c;  
    }
    printf("\n");
    
    return 0;
}