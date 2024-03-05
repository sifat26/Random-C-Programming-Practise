#include<stdio.h>
int main()
{
    double c,i,f,t,d,p,s,n;
    scanf("%lf",&t);
    for(i=1;i<=t;i++)
    {
        s=0,n=0;
        scanf("%lf%lf",&c,&d);
        f=(c*9/5)+32;
        s=f+d;
        n=((s-32)*5)/9;
        printf("Case %.0lf: %.2lf\n",i,n);

    }
    return 0;
}
