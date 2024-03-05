#include<stdio.h>
long long int Reverse(long long int n)
{
    long long int sum=0;
    while (n!=0)
    {
        sum = sum*10 + n%10;
        n /= 10;
    }
    return sum;
}
int main()
{
    long long int t,n,a,i,temp,r,b,p,s=0;
    scanf("%lld",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        long long int c=0;
        s=Reverse(n);


        while(1)
    {
         c++;


            n=n+s;
            s=Reverse(n);

            if(n==s)
            {


                break;
            }


        }
 printf("%lld %lld\n",c,n);
    }



return 0;
}

