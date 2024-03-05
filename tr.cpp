#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,t,s,r,reverse, rem ;
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
        reverse=0;
        while(s!=0)
  {
     rem=s%10;
     reverse=reverse*10+rem;
     s/=10;
  }
 cout<<reverse<<endl;


    }

    return 0;
}


