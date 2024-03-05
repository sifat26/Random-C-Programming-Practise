
//Lab-08: Write a program that reads two numbers and displays bitwise OR.
//Code solution:
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    c=a|b;
    printf("%d | %d =%d\n",a,b,c);
    getch();
}
