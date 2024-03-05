#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,c=0,k,l;
    getline(cin,s);
    l=s.length();
    for(i=0;i<l;i++)
    {

    if((s[i]>=65 && s[i]<=90)&&(s[i]>=97 && s[i]<=122))
    c++;
    }
    if(c!=26)
    cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;

    return 0;
}
