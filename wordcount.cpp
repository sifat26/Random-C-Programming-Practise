#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char st[250];
    int c=0,i;
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]==' ')
            c++;
            if(st[i]==' ' && st[i+1]== ' ')
                c--;
    }
    cout<<c+1<<endl;
    return 0;
}
