#include<iostream>
using namespace std;
int main()
{
    int t,a,b,i,j,s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        s=0;
        cin>>a>>b;
        for(j=a;j<=b;j++)
        {
            if(j%2==1)
          s=s+j;
        }
        cout<<"Case "<<i<<": "<<s<<endl;
    }
    return 0;
}
