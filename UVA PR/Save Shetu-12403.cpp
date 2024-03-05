#include<stdio.h>
#include<string.h>

int main()
{

    long long s=0;
    int t,n;
    char st[20];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",st);

        if(strcmp(st, "donate")==0)
        {
          scanf("%d",&n);
          printf("%lld\n",s);
          s=s+n;
        }
        else
        {
            printf("%lld\n",s);
        }



        return 0;
    }



}
