#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,c,sz;
    char s[101];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        c=0;
      scanf("%[^\n]%*c", s);
      sz=strlen(s);
        for(j=0;j<s;j++)
        {
            if(s[j]='a')
                c=c+1;
            else if(s[j]='b')
                c=c+2;
                 else if(s[j]='c')
                c=c+3;
                 else if(s[j]='d')
                c=c+1;
                 else if(s[j]='e')
                c=c+2;
                 else if(s[j]='f')
                c=c+3;
                 else if(s[j]='g')
                c=c+1;
                 else if(s[j]='h')
                c=c+2;
                 else if(s[j]='i')
                c=c+3;
                 else if(s[j]='j')
                c=c+1;
                 else if(s[j]='k')
                c=c+2;
                 else if(s[j]='l')
                c=c+3;
                 else if(s[j]='m')
                c=c+1;
                 else if(s[j]='n')
                c=c+2;
                 else if(s[j]='o')
                c=c+3;
                 else if(s[j]='p')
                c=c+1;
                 else if(s[j]='q')
                c=c+2;
                 else if(s[j]='r')
                c=c+3;
                 else if(s[j]='s')
                c=c+4;
                 else if(s[j]='t')
                c=c+1;
                 else if(s[j]='u')
                c=c+2;
                 else if(s[j]='v')
                c=c+3;
                 else if(s[j]='w')
                c=c+1;
                 else if(s[j]='x')
                c=c+2;
                 else if(s[j]='y')
                c=c+3;
                 else if(s[j]='z')
                c=c+4;
                 else if(s[j]=' ')
                c=c+1;
        }
        printf("%d",c);
    }
    return 0;
}
