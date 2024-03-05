#include <iostream>
#include <cstdio>
using namespace std;

int hour , minute;

int main()
{

    while(scanf("%d:%d",&hour,&minute)!=EOF)
    {
        if(hour==0&&minute==0)return 0;
        double ans =0;

        if(hour==12)hour=0;
        ans  = hour*30.0 + minute/2.0- minute*6.0;
        if(ans<0)ans=-ans;

        if(ans > 180) ans = 360-ans;
        printf("%.3lf\n",ans);
    }
    return 0;
}
