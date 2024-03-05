#include<stdio.h>
int main()
{
    int n,m,sum;
    while(scanf("%d",&n) )
    {
        if(n==0)
            break;
        while(n/10!=0)
          {
              sum=0;
        while(n!=0)
        {

            m=n%10;
            sum=sum+m;
            n=n/10;
        }

        n=sum;

    }
    printf("%d\n",n);
            }

return 0;
}
