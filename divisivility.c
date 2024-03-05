#include<stdio.h>
int main()
{
   long long k,a,b,i,c=0;
   scanf("%lld%lld%lld",&k,&a,&b);
   for(i=a;i<=b;i++)
   {
       if(i%k==0)
        c++;
   }
   printf("%lld\n",c);
}
