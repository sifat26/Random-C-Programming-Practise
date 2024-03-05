#include<stdio.h>

int main()

{

    int a,b;

    while(scanf("%d%d",&a,&b)!=EOF)

    {

        int i=0,x=0,y=0,max=0;

        x=(a>b)?a:b;

        y=(a<b)?a:b;

        for(i=y; i<=x; i++)

        {

            int n=i;

            int c=0;

            while(n!=1)

            {

                c++;

                if(n%2!=0)

                    n=3*n+1;

                else

                    n=n/2;

            }

            if(c>max)

                max=c;



        }

        printf("%d %d %d\n",a,b,max+1);



    }

    return 0;

}
