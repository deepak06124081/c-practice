#include <stdio.h>

int main(void)
{
    int income, tax = 0 ;
    printf("Enter income; \n");
    scanf("%d", &income);
    if (income<=250000){
        tax = 0;
    }
    else if(income>250000 && income<=500000){
        tax = 0.05 * (income - 250000);
    }
    else {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }
    printf("The tax to be paid is : %d\n", tax);

    return 0;
}