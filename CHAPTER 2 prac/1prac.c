#include <stdio.h>

int main() {
    int a = 1;
    int b = a;

    int v = 3 * 3;

    char dt = '21 dec 2020';   // this line should cause an error

    printf("a = %d, b = %d, v = %d\n", a, b, v);

    return 0;
}
