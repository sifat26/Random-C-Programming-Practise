#include<stdio.h>
int main()
{
   int t,i,j;
   while(scanf("%d",&t)!=EOF)
   {
   if(t%6==0)
   printf("Y\n");
   else
   printf("N\n");
   }
   return 0;
}
