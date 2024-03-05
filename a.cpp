#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,l,k,j=1;
    getline(cin,s);
    l=s.length();
    for(i=0;i<l;i++)
    {
       if(s[i]>=65 && s[i]<=90)
        j++;
    }
    cout<<j<<endl;

    return 0;
}
