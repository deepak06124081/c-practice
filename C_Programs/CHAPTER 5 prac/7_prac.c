#include <stdio.h>

float c2f(float c);

float c2f(float c){
    return ((9*c)/5) + 32;
}
int main(void){
    float c = 45;
    printf("Celsius to fahrenheit for %f is %.2f", c, c2f(c));
    return 0;
}