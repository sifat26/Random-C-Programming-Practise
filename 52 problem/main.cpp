#include<stdio.h>
int main()
{
    int a,i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(a%2==0)

            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;


}
