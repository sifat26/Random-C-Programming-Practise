#include<stdio.h>
int main()
{
    int m,n,i,j,x,y,c;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        c=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
            else
                c=0;


        }
        if(c==0)
            printf("%d is prime\n",i);
        else
        printf("%d is not prime\n",i);

    }
    return 0;
}
