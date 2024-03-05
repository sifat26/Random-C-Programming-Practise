#include<bits/stdc++.h>
using namespace std;
int main()
{

    double ar[100],m,sum=0,c=0;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];

    }
    for(int j=0;j<n;j++)
    {
        if(ar[j]>0)
        {
         sum=sum+ar[j];
        c++;

        }

    }
    if(c==0)
    cout<<"Not Found";
    else
        cout << fixed << setprecision(2) <<sum/c<<endl;
}
