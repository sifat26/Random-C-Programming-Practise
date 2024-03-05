#include<stdio.h>
int main()
{
   long long a,b,s;
   while(scanf("%lld%lld",&a,&b)!=EOF)

   {
       if(a==b)
        s=0;
      else if(b>a)
       s=b-a;
       else if(a>b)
       s=a-b;

       printf("%lld\n",s);
   }
   return 0;
}
