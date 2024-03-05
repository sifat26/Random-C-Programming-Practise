
//Lab-14:Write a program that read a string from a file and display in output string.
//Code solution:
#include <stdio.h>
int main()
{
    char text[100];
    FILE *fn;
    fn=fopen("sifat2.txt","r");
    fgets(text,100,fn);
    printf("%s\n", text);
    fclose(fn);
    return 0;
}

