#include<iostream>
using namespace std;
int main()
{
    long long t,a,b,c,d,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        if(a+b+c<=d || a+b+d<=c || a+c+d<=b || b+c+d<=a )
            cout<<"banana"<<endl;

            else if(a==b && b==c &&c==d)
            cout<<"square"<<endl;
            else if((a==b && c==d)||(a==d&&b==c)||(a==c&& b==d) )
           cout<<"rectangle"<<endl;
        else
            cout<<"quadrangle"<<endl;
    }
    return 0;
}
