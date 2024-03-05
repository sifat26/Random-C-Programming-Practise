
#include<bits/stdc++.h>
using namespace std;
int main()
{

        int i,ma=0;
      int n;
      cin>>n;
      int x[n];
      for(i=0;i<n;i++)
      {
          cin>>x[i];

      }
      int l=x[0];
      for(i=0;i<n;i++)
      {
          l=max(l,x[i]);

      }
      cout<<l<<endl;






}
