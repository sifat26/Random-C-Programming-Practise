#include<stdio.h>
#include<math.h>
int main()
{
   double d,v,u,r,t1,t2,s;
   int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf",d,v,u);
        r=sqrt(u*u-v*v);

        t1=d/r;

        t2=d/u;
        s=t2-t2;
        printf("%d",s);

    }
    return 0;
}
