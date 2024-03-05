#include<iostream>
using namespace std;
int main()
{

    long long n,t,s,p,sum,r,i;
    while(cin>>n && n!=0)
    {
        s=0;
        t=n;
        i=1;
        while(t!=0)
        {
            r=t%2;
            t=t/2;
            s=s+r*i;
            i=i*10;
        }
        cout<<"The parity of "<<s<<" is ";
        p=s;
        sum=0;
        while(p!=0)
        {
            sum=sum+p%10;
            p=p/10;
        }
       cout <<sum<<" (mod 2)."<<endl;


    }

    return 0;
}
