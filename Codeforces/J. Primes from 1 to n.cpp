#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,x,m;
    int i,c=1;

    cin>>n;
    for(x=2;x<=n;x++)
    {

    for(i=2;i<=x/2;i++)
    {
    if(x%i==0)
    {
    c=0;
    break;
    }
    else
        c=1;
    }

    if(c==1)
    cout<<x<<" ";
    }
    cout<<endl;




    return 0;
}
