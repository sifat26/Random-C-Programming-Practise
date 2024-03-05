
#include<stdio.h>
int main()
{
    int i,j,k;
    j=1;
    for(i=1;i<=5;i++)
    {


        for(k=1;k<=i;k++)
        {

            printf("%d ",j);
            j++;
        }

        printf("\n");
    }
    return 0;
}


