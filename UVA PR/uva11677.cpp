#include<iostream>
using namespace std;
int main()
{
    int m1,m2,h1,h2,t1,t2,m;

    while(1)
    {
        cin>>h1>>m1>>h2>>m2;
        if(h1==0 && h2==0 && m1==0 &&m2==0)
            break;
            t2=h2*60+m2;
            t1=h1*60+m1;
            if(t2>t1)
                cout<<t2-t1<<endl;
            else
                cout<<(t2+24*60)-t1<<endl;




    }
    //cout<<t<<endl;

    }


