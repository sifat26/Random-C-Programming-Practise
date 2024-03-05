#include <iostream>
   using namespace std;
int main() {
    int t,a,b,c,i,x,p,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
         p=0;
        for(j=b;j<=c;j++)
        {

            p=p+j;
            if(p>a)
            p=p-a;
        }
        cout<<p<<endl;
       }
    return 0;
}
