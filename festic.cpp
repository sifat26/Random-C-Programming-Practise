#include<iostream>
using namespace std;
int main()
{
    int n,y,a,i,s=0,c=0,t;
    cin>>n;

       for(i=1;i<=n;i++)
       {
            cin>>y>>a;
            t=y-a;
            if(i==1)
                 s=s+t;

          if(t==s)
            c++;

       }
       if(c==n)
        cout<<"idades corretas"<<endl;
       else
        cout<<"mentiu a idade"<<endl;


}
