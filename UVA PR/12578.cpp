#include<iostream>
#include<cmath>
#define pi acos(-1)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float r=0,red,area,w,l;
        cin>>l;
        r=l/5;
        w=(l*6)/10;
        red=pi*r*r;
        area=(l*w)-red;
        printf("%.2lf %.2lf\n",red,area);

    }
    return 0;
}
