#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j;
    char st[101];
    scanf("%d",&t);
    for(i=1;i<=t;i++)

    {
        scanf("%s",st);
        int n=strlen(st);
        if(n<=10)
            printf("%s\n",st);
        else if(n>10)
            printf("%c%d%c\n",st[0],n-2,st[n-1]);

    }
    return 0;

}
