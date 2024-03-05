#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,x,l;
    char s[101];
    scanf("%d",&a);

        for(i=1;i<=a;i++)

        {
            scanf("%s",s);
            l=strlen(s);
            x=s[l-1]-'0';
            printf("%d",x);
        }




}

