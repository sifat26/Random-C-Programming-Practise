#include<stdio.h>
int main()
{
    int n,s=0,t,m=1,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%8;
        s=s+r*m;

        n=n/8;
        m=m*10;


    }
    printf("%d\n",s);
    return 0;
}
