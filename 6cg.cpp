#include<iostream>
using namespace std;
int main()
{
    long long int t,s,n,i;
    cin>>n;
    i=1;
    while(1)
    {
        if(i%2==0 && i%n==0)
        {
            cout<<i<<endl;
            break;
        }
        i++;

    }


    return 0;

}

