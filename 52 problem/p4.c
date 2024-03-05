#include<stdio.h>
int main()
{
    int n,t,i=1,d;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d",&n);
        printf("Case %d: ",i);
        for(d=1;d<=n;d++)
        {
            if(n%d==0)
                printf("%d ",d);
        }
        printf("\n");

        i++;
    }
    return 0;
}
