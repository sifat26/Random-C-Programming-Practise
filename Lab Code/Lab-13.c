
//Lab-13: Write a program that writes 1 to 10 in a file.
//Code solution:
#include<stdio.h>
int main()
{
    int i;
    FILE *fp;
    fp=fopen("sifat.txt","w");
    for(i=1; i<=10; i++)
        fprintf(fp,"%d ",i);
    return 0;
}
