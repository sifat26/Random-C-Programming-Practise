#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ar[100],sum=0,c=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<=0)
        {
            ar[i]=0;
            c++;
        }
    }
    for(int j = 0;j<n;j++)
    {
        sum = sum+ar[j];
    }
    if(sum==0)
        cout<<"Not Found"<<endl;
    else
    cout<<fixed<<setprecision(2)<<sum/(n-c)<<endl;
}
