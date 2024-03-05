#include<stdio.h>
int main()
{
	int n,k,total;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		while(n<k)
			n=n+n%k;
		total=n;
		printf("%d",total);
	}

}
