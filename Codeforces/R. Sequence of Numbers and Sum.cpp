#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int sum=0;
        int i,a,b;
        cin>>a>>b;
        if(a<=0 || b<=0)
        {
            break;
        }
        else
        {
            int x=(a>b)?a:b;
            int y=(a<b)?a:b;
            //cout<<x<<y;
            for(i=y;i<=x;i++)
            {
                sum=sum+i;
                cout<<i<<" ";
            }
            cout<<"sum ="<<sum<<endl;

        }
    }
}
