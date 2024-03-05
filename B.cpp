#include<iostream>
using namespace std;
int main()
{
    int t,s,d,a,b,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
         a=0,b=0;
        cin>>s>>d;
        if(s<d)
            cout<<"impossible"<<endl;
            else if((s%2)!=(d%2))
                cout<<"impossible"<<endl;

        else
        {
            a=(s+d)/2;
            b=s-a;

            cout<<a<<" "<<b<<endl;

    }
    }
    return 0;
}
