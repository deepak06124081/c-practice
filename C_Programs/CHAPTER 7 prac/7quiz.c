#include <stdio.h>

int main(void)
{
    int a[5]= {10, 60, 50, 40, 30};
    int largest = a[0];
    int second_largest = a[0];
    for(int i=1; i<5; i++)
    {
        if(a[i] > largest)
        {
            second_largest = largest;
            largest = a[i];
        }
        else if(a[i] > second_largest && a[i] < largest)
        {
            second_largest = a[i];
        }
    }
    printf("%d", second_largest);

    return 0;
}