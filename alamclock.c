#include<stdio.h>
int main()
{
    int a,b,c,d,t;
    while(1)
    {

        scanf("%d%d%d%d",&a,&b,&c,&d);
if(a==0 &&b==0 &&c==0 &&d==0)
        break;
     else if(a>c&& b>=d)
            t=(c+23-a)*60+(d+60-b);

        else if(a==c && b>d)

          t=(23*60)+(d+60-b);
       else  if(a<=c )
     t=(c-a)*60+(d-b);
    printf("%d\n",t);

    }
    return 0;
}
