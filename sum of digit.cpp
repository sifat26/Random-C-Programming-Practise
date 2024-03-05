#include<stdio.h>
int sum(long long  x);
/*{
    long long  r,t,m;
    m=x,t=0;
    while(m!=0)
    {
        r=m%10;
        t=t+r;
        m=m/10;
    }
    //printf("%lld\n",t);
    return(t);

*/
int main()
{
    long long n,s,a=0;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        s=n;
        while(s>9)
        {

            a=sum(s);
            s=a;
            //
        }
        printf("%lld\n",s);




    }
    return 0;
}
int sum(long long  x)
{
    long long  r,t,m;
    m=x,t=0;
    while(m!=0)
    {
        r=m%10;
        t=t+r;
        m=m/10;
    }
    //printf("%lld\n",t);
    return(t);

}
