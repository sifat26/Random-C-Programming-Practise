#include<stdio.h>
int main()
{
    char s;
    int i,j,k,c;
    c=0;
    while(scanf("%c",&s)!=EOF)
    {

        if(s==34&& c==0)
        {

            printf("``");
            c=1;
        }
        else if(s==34&& c==1)
        {

            printf("''");
            c=0;
        }
        else
            printf("%c",s);
    }
    return 0;
}
