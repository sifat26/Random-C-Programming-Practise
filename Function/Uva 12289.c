#include<iostream>
using namespace std;
int main()
{
    int t,c,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.length()==5)
            cout<<"3"<<endl;
        else
        {
            c=0;
            if(s[0]==o')
                c++;
            else if(s[1]=='n')
                c++;
            else if(s[2]=='e')
                c++;
            if(c>=2)
                cout<<"1",,endl;
            else
                cout<<"2"<<endl;
        }
    }
    return 0;
}
