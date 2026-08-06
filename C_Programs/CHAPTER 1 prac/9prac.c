#include <stdio.h>

int main(void)
{
    int age , roll_no ;
    printf("Enter the Details");
    scanf("%d %d , &age, &roll_no");
    printf("Details of student %d\n",age);
    printf("roll_no is %d", roll_no);

    return 0;
}