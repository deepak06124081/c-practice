#include <stdio.h>

int main() {
    int num;


    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\n divisible \n");

    if (num % 7 == 0 && num % 5 == 0) {
        printf(" The number %d IS divisible by BOTH 7 and 5 \n", num);
    } else {
        printf(" The number %d is NOT divisible by both 7 and 5\n",num);
    }

    if (num % 5 == 0) {
        printf(" The number %d IS divisible by 5\n", num);
    } else {
        printf(" The number %d is NOT divisible by 5\n", num);
    }

    if (num % 7 == 0) {
        printf(" The number %d IS divisible by 7\n", num);
    } else {
        printf(" The number %d is NOT divisible by 7\n", num);
    }

    return 0;
}