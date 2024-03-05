#include<stdio.h>
int main()
{
    int t,w,h,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&w,&h);
        d=(w/3)*(h/3);
        printf("%d\n",d);
    }
    return 0;
}

