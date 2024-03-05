#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,x,y,sum;
    char s[6];
    scanf("%d",&t);
    while(t>0)
    {

        scanf("%s",s);
        sum=0;
        x=s[0]-'0';
        y=s[4]-'0';
        sum=x+y;
        printf("Sum= %d\n",sum);
        t--;
    }

    return 0;
}
