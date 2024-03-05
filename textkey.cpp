#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,c,sz;
    char s[101];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

      gets(s);
      sz=strlen(s);
      printf("%d",sz);
    }
    return 0;
}
