#include <stdio.h>

int Factorial(int);

int Factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    // Factorial (n) = Factorial(n-1) x n
    return Factorial(n-1)*n;
}
int main(){
    int a = 5;
    printf("The factorial of %d\n = %d\n", a, Factorial(a));
    return 0;
}

