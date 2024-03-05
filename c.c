
#include <stdio.h>
int main()
{
    int n, arr[100],t,j,i,m;
    scanf("%d", &t);
    for(j=1;j<=t;j++)
    {
    scanf("%d",&n);
    for ( i = 0; i < n; ++i)
    {

        scanf("%d", &arr[i]);
    }
    if(n%2==1)
    {
       m=(n+1)/2;
    }
    else
    {
        m=((n/2)+((n/2)+1))/2;
    }
    printf("Case %d: %d\n",j, arr[m-1]);
    }

    return 0;
}
