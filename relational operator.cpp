#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ,a,b,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        if(a>b)
        cout<<">"<<endl;
        else if(a<b)
        cout<<"<"<<endl;
        else if(a==b)
            cout<<"="<<endl;
    }
    return 0;
}
