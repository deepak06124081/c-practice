#include <stdio.h>

// Function prototype
int sum(int,int);

// Function definition
int sum(int x, int y)
{
    // printf("The sum of %d and %d is %d\n", x, y, x + y);     

    return x + y ;
}

int main(void)
{
    int a = 1; 
    int b = 2;

    // int c = a+b ;
    // printf("the sum is %d\n",c);
    int c = sum(a,b);//funcion call
    printf("%d \n",c);
    
    int a1 = 12;
    int b1 = 23;
    int c1 = sum(a1,b1);
    printf("%d \n",c1);

    int a2 = 2;
    int b2 = 27;
    int c2 = sum(a2,b2);
    printf("%d \n",c2);

    return 0;
}

     
