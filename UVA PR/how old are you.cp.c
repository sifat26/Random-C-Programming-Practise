#include <stdio.h>
int main()
{
    int d1,d2,b,c,e,g,f,k,i,j,t;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d/%d/%d",&d1, &b, &c);
            scanf( "%d/%d/%d",&d2, &f, &g);
            k=(c-g);
            if(b<f)
                k--;
            else if(b==f)
            {
                if(d1<d2)
                    k--;
            }
            if(k<0)
                printf("Case #%d: Invalid birth date\n", i );
            else if(k>130)
                printf("Case #%d: Check birth date\n", i);
            else
                printf("Case #%d: %d\n",i,k);
        }
    }
    return 0;
}
