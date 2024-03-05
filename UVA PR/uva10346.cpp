#include<iostream>
using namespace std;
int main()
{
	int n,k,s,i,t,r;
	while(scanf("%d%d",&n,&k)==2)
	{
		s=0;
		i=n;
		while(i>0)
		{

			i=(i/k);
			r=i%k;
			s=s+i;
			i=i+r;

		}
		t=s+n;
		cout<<t<<endl;



	}
}
