#include<iostream>
using namespace std;
int main()
{
    int t,c=0;
    float l,w,d,we;
    cin>>t;
    while(t--)
    {
        cin>>l>>w>>d>>we;
        if(l+w+d<=125 &&we<=7 || l<=56 && w<=45 && d<=25&& we<=7)
        {
            c++;
            cout<<"1"<<endl;
        }

        else
            cout<<"0"<<endl;
    }
    cout<<c<<endl;


}

