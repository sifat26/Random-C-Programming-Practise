#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long a,b,c,mx,mn,md;
    cin>>a>>b>>c;
    mx=(a>b?(a>c?a:c):(b>c?b:c));
    mn=(a<b?(a<c?a:c):(b<c?b:c));
    md=(a+b+c)-(mx+mn);
    cout<<mn<<endl<<md<<endl<<mx<<endl<<endl<<a<<endl<<b<<endl<<c<<endl;
    return 0;



}
