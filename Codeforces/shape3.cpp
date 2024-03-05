#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    for(j=n-i;j>=1;j--)
    {
    cout<<" ";
    }
    for(k=1;k<=i;k++)
    {
    cout<<"*";
    }
    for(k=2;k<=i;k++)
    {
    cout<<"*";
    }
    for(int l=1;l<=i;l++)
    {
    cout<<" ";
    }
    for(int p=1)
    cout<<endl;
    }


    return 0;
}
