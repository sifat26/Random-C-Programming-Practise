//Lab-03: Write a program that reads two numbers and displays maximum.
//Code solution:
#include<stdio.h>
int main(){

    int a,b;
    scanf("Enter Two Number : %d %d",&a,&b);
    int max=a>b?a:b;
    printf("Max = %d\n",max);
    return 0;
}
