#include<iostream>
using namespace std;
int main()
{
    long long int t,s,n,r;
    cin>>n;
    s=0;
    t=n;
    while(t!=0)
    {
        r=t%10;
        s=s+r;
        t=t/10;
    }
    //cout<<s<<endl;
    if(n%s==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;

}
