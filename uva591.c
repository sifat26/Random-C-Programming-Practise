#include<stdio.h>
int main()
{
    int n,h[100],k=0,i,sum,d,s;
    while(scanf("%d",&n)!=EOF)
    {
        k++;

       if(n==0)
        break;
        sum=0;
       for(i=0;i<n;i++)
       {
           scanf("%d",&h[i]);

       }
        for(i=0;i<n;i++)
       {

           sum=sum+h[i];
       }

       d=sum/n;
       s=0;
       for(i=0;i<n;i++)
       {
           if(h[i]>d)
           {
               s=s+(h[i]-d);
           }
       }
       printf("Set #%d\n",k);
       printf("The minimum number of moves is %d.\n",s);
       printf("\n");



    }
    return 0;


}

