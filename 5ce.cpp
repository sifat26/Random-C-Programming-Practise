#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    int m=0,i,j;
    char s[100];
    cin>>s;
    j=strlen(s);
    for(i=0;i<j;i++)
     if(s[i]=='+')
     m++;
    else if(s[i]=='-')
        m--;
    cout<<m<<endl;

}

