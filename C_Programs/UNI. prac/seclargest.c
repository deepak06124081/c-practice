#include<stdio.h>

int main() {
    int a[5] = {10, 20 , 50, 40, 30};
    int largest = a[0], sec = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] > largest) {
            sec = largest;  // Update second largest
            largest = a[i]; // Update largest
        } else if (a[i] > sec && a[i] < largest) {
            sec = a[i]; // Update second largest if it's less than largest
        }
    }

    printf("Second largest: %d",sec);
    return 0;
}
