#include<stdio.h>
int main()
{
    int n,i,d,sum=0,avg,a[1000],cnt,j=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        avg=sum/n;
        cnt=0;
        for(i=0; i<n; i++)
        {
            if(a[i]>avg)
            {
                d=a[i]-avg;
                cnt=cnt+d;
            }
        }
        printf("Set #%d\n The minimum number of moves is %d.\n\n",j++,cnt);
    }
    return 0;
}
