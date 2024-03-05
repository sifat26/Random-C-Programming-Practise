#include<bits/stdc++.h>
using namespace std;
int main()
{
    float ar[100];
    int i,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];

    }
    for(i=0; i<n; i++)
    {
        ar[i]=abs(ar[i]);

    }
    float minimum=ar[0];
    for(i=1; i<n; i++)
    {
        if(ar[i]>minimum)
            minimum=ar[i];
    }
    cout << fixed << setprecision(2) <<minimum<<endl;
}
