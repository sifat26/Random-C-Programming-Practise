#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int G,N,i,j;
    while(1)
    {
        cin>>N;
        if(N==0)
            break;
        G=0;
        for(i=1; i<N; i++)
            for(j=i+1; j<=N; j++)
            {
                G+=__gcd(i, j);
            }
         cout <<G<< endl;
    }
    return 0;

}

