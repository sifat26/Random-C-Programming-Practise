#include<iostream>
using namespace std;
int main()
{
    long long int t;
    while(1)
    {
        cin>>t;
        if(t==0)
            break;
        else if(t>100)
        printf("f91(%lld) = %lld\n",t,t-10);
        else
          printf("f91(%lld) = 91\n",t);

    }
    return 0;
}
