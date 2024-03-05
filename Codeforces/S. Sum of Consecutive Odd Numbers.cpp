
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        long long sum=0,a,b,x,y;
        cin>>a>>b;


             x=(a>b)?a:b;
             y=(a<b)?a:b;
            //cout<<x<<y;
            for(i=y+1;i<x;i++)
            {
                if(i%2!=0)
                sum=sum+i;

            }
            cout<<sum<<endl;


    }
}
