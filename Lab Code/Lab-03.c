//Lab-03: Write a program that reads two numbers and displays maximum.
//Code solution:
#include<stdio.h>
int main(){

    int a,b;
    scanf("%d %d",&a,&b);
    int max=a>b? a:b;
    printf("max = %d\n",max);
    return 0;
}
