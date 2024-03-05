
//Lab-11: Write a function that gets two integers and return sum
//Code solution:
#include<stdio.h>
int sum(int a,int b)
{
    int p;
    p=a+b;
    return p;
}
int main()
{
   int x,y,s;
   printf("Enter two numbers : ");
   scanf("%d%d",&x,&y);
   s=sum(x,y);
   printf("Sum of two numbers: %d\n",s);
   return 0;
}
