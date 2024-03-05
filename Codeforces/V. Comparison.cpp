#include<bits/stdc++.h>
using namespace std;
int main()
{

    string n;
    cin>>n;
    if(n[0]==n[4])
    {
        if(n[2]='=')
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
    }
    else if(n[0]>n[4])
    {
        if(n[2]='>')
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
    }
    else if(n[0]<n[4])
    {
        if(n[2]='<')
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
    }


    return 0;



}
