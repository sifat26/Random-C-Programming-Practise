#include <iostream>
   using namespace std;
int main() {
    int t,a,b,c,i,x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        x=a-c;
        if(x==0)
        cout<<"Case "<<i<<": "<<b<<endl;
        else if(x>=b)
         cout<<"Case "<<i<<": "<<b-x+4<<endl;
        else if(x<b)
        cout<<"Case "<<i<<": "<<b-x<<endl;

       }
    return 0;
}
