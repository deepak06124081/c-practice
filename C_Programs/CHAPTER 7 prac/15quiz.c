#include <stdio.h>

int count (int a[], int n){
    int no_of_positive=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            no_of_positive++;
        }
    }
    return no_of_positive;
}
int main()
{
    int arr[] = {1,2,3,-4,-5,6};

    printf("Number of positive elements: %d\n", count(arr, 6));
    
    return 0;
}