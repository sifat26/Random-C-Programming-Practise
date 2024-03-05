#include <stdio.h>
int main()
{
    int n, arr[100],t,j,i;
    scanf("%d", &t);
    for(j=1;j<=t;j++)
    {
    scanf("%d",&n);
    for ( i = 0; i < n; ++i)
    {

        scanf("%d", &arr[i]);
    }


    for (i = 1; i < n; ++i)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }

    printf("Case %d: %d\n",j, arr[0]);
    }

    return 0;
}
