#include <stdio.h>

typedef struct C
{
    int Real;
    int Imaginary;
} Complex;
int main()
{
    Complex c= {3, 4};
    printf("The value of c.Real is %d and the value of c.Imaginary is %di \n", c.Real, c.Imaginary);
    return 0;
}