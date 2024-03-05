#include<stdio.h>
int main()
{
    int x,y,n,r,sum=0,i=1 ;
    scanf("%d",&x);
    n=x;
    while(n>0)
    {

        r=n%8;
        n=n/8;
        sum=sum+r*i;
        i=i*10;


    }
    printf("%d",sum);
}
