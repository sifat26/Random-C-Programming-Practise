#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,p,i,m;
    while(1)
    {
        cin>>a>>b;
        if(a+b==0)
            break;
        p=0;
        for(i=a;i<=b;i++)
        {
            m=sqrt(i);
            if(m*m==i)
                p++;
        }
        cout<<p<<endl;
    }
    return 0;
}
