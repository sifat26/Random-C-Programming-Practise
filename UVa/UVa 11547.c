#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b,c,d;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        b=0,c=0,d=0;
        scanf("%d",&n);
        b=(n*567)/9;
        c=(b+7492)*235;
        d=(c/47)-498;
        d/=10;
        d%=10;
        d=abs(d);
        printf("%d\n",d);
    }
    return 0;
}
