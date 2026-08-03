#include <stdio.h>

int main(void)
{
    int a ;
    printf("Enter a :");
    scanf("%d",&a);

    switch(a)
{

       case 1:
       printf("You have entered 1");
       break;

       case 2:
       printf("you have entered 2");
        break;

        case 3:
        printf("You have entered 3");
        break;
         
        case 4:
        printf("You have entered 4");
        break;
        default :
        printf("Nothing matched");
        
}
    return 0;
}