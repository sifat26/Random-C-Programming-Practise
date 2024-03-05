#include<iostream>
using namespace std;
int main()
{
	long long n,sum,r,s,p,q;
	while(cin>>n)
	{

		if(n<0)
			break;
		sum=0;
		while(n>0)
		{
			r=n%3;
			sum=sum*10+r;
			n=n/3;
		}


		p=sum;
		s=0;
		while(p!=0)
        {
            q=p%10;
            s=s*10+q;
            p=p/10;
        }
        cout<<s<<endl;

		}
		return 0;

}
