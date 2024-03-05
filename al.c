#include<stdio.h>
int main()
{
    int a,b,c,d,t,t1,t2,du;
    while(1)
    {

        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==0 &&b==0 &&c==0 &&d==0)
            break;
            t1=a*60+b;
            t2=c*60+d;
            if(t2>t1)
                du=t2-t1;
            else
                du=(t2+24*60)-t1;
        printf("%d\n",du);

    }
    return 0;
}

