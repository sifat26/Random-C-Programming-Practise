#include<iostream>
using namespace std;
int main()
{
    int t,n,ar[50];
    cin>>t;
    for(i=0;i<t;i++)
    {
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>ar[j];
    }
    h=0;l=0;
    for(j=0;j<n;j++)
    {
        if(ar[j]>ar[j+1])
            l++;
        else if(ar[j]<ar[j+1])
        h++;

    }
}
