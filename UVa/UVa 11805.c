#include<stdio.h>
int main()
{
    int t,n,k,p,i,out;
    scanf("%d",&t);
    i=1;
    while(i<=t)
    {
        scanf("%d%d%d",&n,&k,&p);
        out=(k+p)%n;
        if(out!=0)
            printf("case %d : %d\n",i,out);
        else
            printf("case %d : %d\n",i,n);
        i++;
    }
    return 0;
}
