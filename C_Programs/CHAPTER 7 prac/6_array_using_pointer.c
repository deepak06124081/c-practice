#include <stdio.h>

int main(void)
{
    int marks[] = {12, 34, 54, 66};

    int* ptr = &marks[0];
    //int* ptr = marks; // same as //int* ptr = &marks[0];
    for (int  i = 0; i < 4; i++)
    {
        //printf("The marks at index %d\n", i marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;

    }
    
    return 0;
}