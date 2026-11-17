#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n = 5.0;;
  float *ptr;
  ptr = (float *)malloc(n * sizeof(float));    
ptr[0] = 1.0;
ptr[1] = 2.0;  
ptr[2] = 3.0;
ptr[3] = 4.0;
ptr[4] = 5.0;

printf("%.2f\n", ptr[0]);
printf("%.2f\n", ptr[1]);
printf("%.2f\n", ptr[2]);
printf("%.2f\n", ptr[3]);
printf("%.2f\n", ptr[4]);

  return 0;
}