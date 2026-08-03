#include <stdio.h>

int main(void)
{
    int marks1, marks2, marks3;
    printf("Enter marks1 : \n");
    scanf("%d", &marks1);
    printf("Enter marks2 : \n");
    scanf("%d", &marks2);
    printf("Enter marks3 : \n");
    scanf("%d", &marks3);
    
    printf("The marks are %d %d and %d\n", marks1, marks2, marks3);
    
    if(marks1<33 || marks2<33 || marks3<33){
        printf("The student has failed due to less marks in individual subjects.");
    }else if ((marks1+marks2+marks3)/3<40){
        printf("The student has failed due to low percentage");
        printf("The percentage is %d", (marks1+marks2+marks3)/3);
    }else{
        printf("The student has passed.");
    }
    return 0;
}