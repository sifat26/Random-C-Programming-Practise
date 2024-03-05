#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n*4;i=i+4)
    {
        for(j=i;j<i+4;j++)
        {
            if(j%4==0)
                cout<<"PUM";
            else
                cout<<j<<" ";
        }
        cout<<endl;
    }
}
