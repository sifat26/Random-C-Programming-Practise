#include<stdio.h>
int main()
{
    int i,j;
    for(i=1000;i>=1;i--)
    {
        if(i%5==0)
            printf("\n");
        else
            printf("%d\t",i);
    }
    return 0;
}
