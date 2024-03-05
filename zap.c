#include<stdio.h>
int main()
{
   int a,b,s,d;
   while(scanf("%d%d",&a,&b)!=EOF)
   {
       if(a==-1 &&b==-1)
       break;
       s=0,d=0;
       if(b>a)
       {
           s=b-a;
           d=(a+100)-b;
           if(s<d)
            printf("%d\n",s);
           else
          printf("%d\n",d);
       }

       else if(a>b)

       {
           s=a-b;
           d=(b+100)-a;
           if(s<d)
            printf("%d\n",s);
           else
          printf("%d\n",d);
       }
       else
        printf("0\n");
   }
   return 0;
}
