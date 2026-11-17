#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n = 5.0;;
  float *ptr;
  ptr = (float *)calloc(n, sizeof(float));
ptr[0] = 1.0;
printf("%.2f\n", ptr[0]);
  return 0;
}