//Lab-10: Write a program that converts a line to uppercase.
//Code solution:
#include<stdio.h>
int main()
{
    int i=0,j,k,p;
    char a[1000];
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        i++;
    }
    printf("%s\n",a);
    return 0;
}
