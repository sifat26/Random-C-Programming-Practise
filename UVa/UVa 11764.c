#include <stdio.h>
int main()
{
    int l,i, h, t;
    int n, a[100], p;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        h=0;
        l=0;
        scanf("%d", &n);
        for(p=0; p<n; p++)
        {
            scanf("%d", &a[p]);
        }
        for(p=0; ; p++)
        {
            if(p==n-1) break;
            if(a[p]==a[p+1]) continue;
            if(a[p]>a[p+1])
            {
                h++;
            }
            else l++;
        }
        printf("Case %d: %d %d\n",i, l, h);
    }
    return 0;
}
