        #include <stdio.h>

        
            int* sum(int a , int b){
            int s  = a + b;
            int* ptr = &s;
            printf("The sum is %d\n ", *ptr);
            return ptr ;
            }
            int main()
            {
            int  a = 5;     
            int b = 6;
            int* ptr1 ;

            ptr1 = sum(a,b);
            printf("The sum of the no.'s are %d\n",ptr1);
            
            return 0;
        }