#include<iostream>
using namespace std;
int main()
{
    int t,n,j,ar[100],i,c,d;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        cin>>ar[j];
        c=0,d=0;
         for(j=0;j<n-1;j++)
         {

            if(ar[j]>ar[j+1])
               c++;
            else if(ar[j]<ar[j+1])
                d++;
         }
         cout<<"Case "<<i<<": "<<d<<" "<<c<<endl;

    }
    return 0;
}
