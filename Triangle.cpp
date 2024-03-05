#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,i;
   cin>>t;N
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a+b<=c || b+c<=a || c+a<=b)
            cout<<"Case "<<i<<": Invalid"<<endl;
        else if(a==b&& b==c )
            cout<<"Case "<<i<<": Equilateral"<<endl;
        else if(a==b|| b==c||a==c)
             cout<<"Case "<<i<<": Isosceles"<<endl;
        else if(a!=b && b!=c && c!=a)
            cout<<"Case "<<i<<": Scalene"<<endl;
    }
    return 0;

}
