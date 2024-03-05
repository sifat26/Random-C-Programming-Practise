#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        int d,u,v;
        double t1,t2,t,p;
        scanf("%d%d%d",&d,&v,&u);


        if(v>=u)
        {
            printf("Case %d: can’t determine\n",i);

        }
        else
        {
            p=sqrt(u*u-v*v);
            t1=d/(double)u;

            t2=d/(double)p;

            t=t2-t1;

            if(t<=0)
            {
                printf("Case %d: can't determine\n",i);
            }
            else
            {
                printf("Case %d: %.3lf\n",i,t);
            }
        }


    }
    return 0;
}
