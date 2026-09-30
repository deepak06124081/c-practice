#include <stdio.h>

int main() {
    int b[2][3],i,j;
    for(i=0;i<2;i++)
    {
            for(j=0;j<3;j++)
            {
        scanf("%d",&b[i][j]);
    }
        }
    printf("arrray elemets in matrix form: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}






