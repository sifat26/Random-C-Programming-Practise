
#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,l,k,j=1;
    getline(cin,s);

    for(i=0;i<l;i++)
    {
        if(s[i]==45)
        cout<<s[i];
     // if((s[i]>=65 && s[i]<=90)&&(s[i]>=97 && s[i]<=122))
        cout<<s[i]+2;

    }
    cout<<s<<endl;

    return 0;
}
