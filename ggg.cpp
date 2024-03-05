#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,l,h,ar[50];
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>ar[j];
        }
        h=0;
        l=0;
        for(j=0; j<n-1; j++)
        {
            if(ar[j]<ar[j+1])
                h++;
            else if(ar[j]>ar[j+1])
                l++;

        }
        printf("Case %d: %d %d\n",i+1,h,l);

    }
    return 0;
}

