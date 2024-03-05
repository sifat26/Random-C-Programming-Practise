#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    gets(str);
    strlwr(str);
    printf("%s",str);
}
