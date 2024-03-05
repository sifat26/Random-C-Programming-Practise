#include<stdio.h>
#include <string.h>
int main(){
  char str[100]="this is clanguage with c and cpp";
  char *sub;
  sub=strstr(str,"cpp");
  printf("Substring is: %s",sub);
 return 0;
}

