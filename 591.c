#include<stdio.h>
int main()
{
    int n,h[100],k,i,sum,d,s;
    while(scanf("%d",&n)!=EOF)
    {
       sum=0;
       if(n==0)
        break;

       for(i=0;i<n;i++)
       {
           scanf("%d",h[i]);
           sum=sum+h[i];
       }
       printf("%d\n",s);
       /*d=sum/n;
       s=0;
       for(i=0;i<n;i++)
       {
           if(h[i]>d)
           {
               s=s+(h[i]-d);
           }
       }
       printf("%d\n",s);*/


    }
    return 0;


}
