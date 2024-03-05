#include<stdio.h>
int main()
{
    float t,a,b,c,d,x,y,cas=0;
    while(scanf("%f",&t)  &&t!=0)
    {
        scanf("%f%f%f",&a,&b,&c);
        if(t==1)
        {
            x=(b-a)/c;
            y=a*c+0.5*x*c*c;
        }
        else if(t==2)
        {
            x=(b-a)/c;
            y=a*x+0.5*c*x*x;
        }
        else if(t==3)
        {
            y=sqrt(a*a+2*b*c);
            x=(y-a)/b;
        }
        else if(t==4){
                y=sqrt(a*a-2*b*c);
                x=(a-y)/b;

        }
        cas++;
        printf("Case %.0f: %.3f %.3f\n",cas,y,x);
    }
    return 0;
}
