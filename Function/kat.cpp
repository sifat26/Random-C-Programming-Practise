#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long int a,b,c,p,d[100];
      int j,i,k;
      cin>>a>>b>>c;
      if(c==0)
      {
            if((a-b)>=0)
            {
                  cout<<"Y"<<endl;
            }
            else{
                  cout<<"N"<<endl;
            }
      }
      else{
      for(i=0;i<c;i++)
      {
            cin>>d[i];


      }
      d[c]=b;
      k=c;


      for(i=0;i<c;i++)
      {
          p=d[i+1]-d[i];
          if(p>=a)
          {
              cout<<"Y"<<endl;
              break;
          }
          else
            k--;

      }
      if(k==0)
       cout<<"N"<<endl;




}
}
