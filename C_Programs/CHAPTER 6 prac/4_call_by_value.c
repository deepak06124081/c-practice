#include <stdio.h>

int sum(int , int);

int sum(int a, int b)
{
   return a+ b ;
}

    int main(){ 
    int x =1 , y =  6;
    printf("The sum of 1 and 6 is %d", sum(x, y));
    return 0;
}