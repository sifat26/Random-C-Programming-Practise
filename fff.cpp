#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long a,b,m,i,t,j=1,k,c;
    cin>>t;
    while(j<=t)
    {
        c=0;
        cin>>a>>b>>m;
        for(i=0; i<=m; i++)
        {
            k =__gcd(a+i,b+i);
            if(k==1)
                c++;
        }
        cout<<"Case "<<j<<": "<<c<<endl;
        j++;
    }
    return 0;
}
