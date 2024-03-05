
#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n,i,x;
        cin>>n;
        for(i=1;i<=n;i++)
        {

            cin>>x;
            //cout<<x;
            long long fact=1;
            for(int j=1;j<=x;j++)
            {
                fact=fact*j;
            }


            cout<<fact<<endl;
        }










}
