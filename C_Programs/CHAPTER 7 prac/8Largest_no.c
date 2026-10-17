#include <stdio.h>

int main(void)
{
    int a[5]= {10,20,60,40,70};
    int largest = a[0];
    for(int i=1; i<5; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
        else 
        {
            a[i]< largest;
            continue;
        }
        
    }   
    printf("%d", largest);
    return 0;
}