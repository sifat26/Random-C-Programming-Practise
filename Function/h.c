#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]= "To be or not to be";
  char str2[40];
  char str3[40];
  strncpy ( str2, str1, 5 );
  puts (str1);
  puts (str2);

  return 0;
}

