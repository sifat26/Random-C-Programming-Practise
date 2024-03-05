#include<stdio.h>
int main()
{
    int n,i,j,k,s;
    while(scanf("%d",&n) &&n!=0)
    {
        if(n<10)
            printf("Sum is=%d",s);
        else(n>=10)
        {
            s=sod(n);
            if(s<10)
                printf("Sum is=%d",s);
            else
            {
                n=s;
                continue;
            }


            printf("Sum is=%d",sum);
        }
    }
}
    int sod(int n)
    {
        int t,sum=0,m;
        t=n;
        while(t>0)
        {
            m=t%10;
            sum=sum+m;
            t=t/10;
        }
        return sum;
    }
