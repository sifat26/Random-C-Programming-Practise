#include<iostream>
using namespace std;
int main()
{
   int t,n,a,i,b,c,d,e,f,g,h;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>n;
       a=n*567;
       b=a/9;
       c=b+7492;
       d=c*235;
       e=d/47;
       f=e-498;
       g=f%100;
       h=g/10;
       if(h<0)
       cout<<(-1)*h<<endl;
       else
       cout<<h<<endl;

   }
   return 0;
}
