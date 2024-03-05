
//Lab-06: Write a program that reads any positive integer and displays  sum of its digit (Using loop).
//Code solution:

#include<stdio.h>
int main()
{
    long int n,rem=0,sum=0;

    printf("Enter N : ");
    scanf("%ld",&n);

    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("Summation of the digits is : %ld\n",sum);
    return 0;
}
