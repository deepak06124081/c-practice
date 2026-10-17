#include <stdio.h>

int main()
{
    int arr[5] = {10, 25, 7, 45, 18};
    int i, largest;

    largest = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest element = %d", largest);

    return 0;
}
