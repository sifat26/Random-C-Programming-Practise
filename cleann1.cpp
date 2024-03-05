#include<iostream>
using namespace std;
int main()
{
    int n,s,d,i,ar[32],max,c=0,arr[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];

    }
     for(i = 1;i < n; ++i)
    {

       if(ar[0] > ar[i])
           ar[0] = ar[i];
    }
    max=ar[0];




    cout<<max<<endl;
    return 0;
}
