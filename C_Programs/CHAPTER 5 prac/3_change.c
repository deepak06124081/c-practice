#include <stdio.h>

int change(int a);

int change(int a)
{
    a = 77 ;
    return 0;
}

int main(void)
{
    int b =   22;                                                               
    change(b); 
    printf("b is %d\n" , b);
    
    return 0 ;
}
