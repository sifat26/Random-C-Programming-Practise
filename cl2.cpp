#include<iostream>
using namespace std;
int main()
{
  int n,t,sum,s,r,i,x,j;
  cin>>n;
  for(i=1;i<=n;i++)
  {
      sum=1500;
      cin>>t>>x;
      for(j=1;j<=t;j++)
      {
          cin>>s;
          sum=sum+s;

      }
      if(sum==x)
        cout<<"Correct"<<endl;
      else
        cout<<"Bug"<<endl;
  }
  return 0;
}
