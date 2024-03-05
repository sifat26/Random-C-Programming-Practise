#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s1="";
    string s=" `1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";

        getline(cin, s1);
    for (i=0;i<s1.size();i++)
    {
        int f=s.find(s1[i]);
        cout<<s[f-1];
    }
    cout<<endl;

    return 0;
}

