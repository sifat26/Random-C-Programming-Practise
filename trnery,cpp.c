#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,t,s,r;
    while(cin>>n && n>=0)
    {
        s=0;
        t=n;
        while(t!=0)
        {
            r=t%3;
            t=t/3;
            s=s*10+r;
        }

    }


    return 0;
}

