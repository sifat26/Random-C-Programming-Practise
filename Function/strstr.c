#include<stdio.h>
#include <string.h>
int main(){
  char str[100]="this is Tanvir Ahmmed";
  char *sub;
  sub=strstr(str,"Ahmmed");
  printf("\nSubstring is: %s",sub);
 return 0;
}
