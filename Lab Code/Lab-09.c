//Lab-09: Write a program that real a line of text and display its length.
//Code solution:
#include<stdio.h>
int main()
{
    char ch[1000];
    gets(ch);
    printf("%d\n",strlen(ch));
    return 0;
}
