#include <iostream>
using namespace std;
int main()
{
long long a[10000], c,n, i;
while(cin>>n && n!=0)
{
    c=0;
    for(i=0;n>0;i++)
    {

    a[i]=n%2;
    if(a[i]==1)
      c++;
    n=n/2;
    }
    cout<<"The parity of ";
    for(i=i-1 ;i>=0 ;i--)
{
  cout<<a[i];
}
cout<<" is "<<c<<" (mod 2)."<<endl;

}
return 0;
}
