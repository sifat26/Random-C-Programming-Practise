#include<stdio.h>
int main()
{
     long long int s,c,i;
      while(1)
      {
            scanf("%lld",&c);
             if(c<0)
                  break;
            s=1;

                  for(i=1;i<=c;i++)
                  {
                   s=s+i;
                  }

                  printf("%lld\n",s);


      }
      return 0;
}
