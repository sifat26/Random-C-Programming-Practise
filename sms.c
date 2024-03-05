#include<stdio.h>
int main()
{
   char s;
   int i,j,k,c,t;

    scanf("%d%*c",&t);
    for(i=1;i<=t;i++)
    {
         c=0;
   while((s=getchar())!='\n')
   {
             if(s=='a')
                c=c+1;
            else if(s=='b')
                c=c+2;
                 else if(s=='c')
                c=c+3;
                 else if(s=='d')
                c=c+1;
                 else if(s=='e')
                c=c+2;
                 else if(s=='f')
                c=c+3;
                 else if(s=='g')
                c=c+1;
                 else if(s=='h')
                c=c+2;
                 else if(s=='i')
                c=c+3;
                 else if(s=='j')
                c=c+1;
                 else if(s=='k')
                c=c+2;
                 else if(s=='l')
                c=c+3;
                 else if(s=='m')
                c=c+1;
                 else if(s=='n')
                c=c+2;
                 else if(s=='o')
                c=c+3;
                 else if(s=='p')
                c=c+1;
                 else if(s=='q')
                c=c+2;
                 else if(s=='r')
                c=c+3;
                 else if(s=='s')
                c=c+4;
                 else if(s=='t')
                c=c+1;
                 else if(s=='u')
                c=c+2;
                 else if(s=='v')
                c=c+3;
                 else if(s=='w')
                c=c+1;
                 else if(s=='x')
                c=c+2;
                 else if(s=='y')
                c=c+3;
                 else if(s=='z')
                c=c+4;
                 else if(s==' ')
                c=c+1;


   }
   printf("Case #%d: %d\n",i,c);
    }
   return 0;
}

