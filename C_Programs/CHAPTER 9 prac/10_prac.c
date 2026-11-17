#include <stdio.h>

typedef struct C
{
    int Real;
    int Imaginary;
} Complex;

void displayComplex(Complex c)
{
    printf("The value of c.Real is %d and the value of c.Imaginary is %di \n", c.Real, c.Imaginary);
}
int main()
{
    Complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real and imaginary part of complex number %d: ", i + 1);
        scanf("%d %d", &carr[i].Real, &carr[i].Imaginary);
    }
    for (int i = 0; i < 5; i++)
    {
        displayComplex(carr[i]);
    } 
    return 0;
}