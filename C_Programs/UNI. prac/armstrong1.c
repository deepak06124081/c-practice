#include<stdio.h>
#include<math.h>


int main()
{
    for (int i = 1; i <10000; i++) {
        int n=i;
            int count=0;
            while (n>=1){
            n=n/10;
            count=count+1;
            }

        int digit1,digit2,digit3,digit4;
        digit1=i%10;
        digit2=((i-i%10)/10)%10;
        digit3=((i-i%100)/100)%10;
        digit4=((i-i%1000)/1000)%10;

        if(i== (pow(digit1,count)) + (pow(digit2,count)) + (pow(digit3,count)) + (pow(digit4,count)))
        printf("%d\n",i);
}
}