//Lab-04: 2+4+6+8+.....up to n’th term.
//Code solution:
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum+=2*i;
    }
    printf("%d\n",sum);
    return 0;
}
