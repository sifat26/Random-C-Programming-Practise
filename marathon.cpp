#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,cn,a,b,c,d;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cn=0;
        cin>>a>>b>>c>>d;
        if(a<b)
            cn++;
        if(a<c)
            cn++;
        if(a<d)
            cn++;
            cout<<cn<<endl;



    }
    return 0;

}
