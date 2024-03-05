#include<stdio.h>
#include<math.h>
int main()
{
   char ch[100],s[100],st[100];
   printf("enter two strings:");
   gets(ch);gets(s);
   int l=strcmp(ch,s);
   if(l==0)
   printf("string are similar\n");
   else
   printf("string are not similar\n");
  strcat(ch,s);
   printf("string catanation resust is:%s\n",ch);

   return 0;
}

