#include <stdio.h>
#include <stdlib.h>

int main ()
{
  div_t divresult;
  divresult = div (38,5);
  printf ("38 div 5 > %d, remainder %d.\n", divresult.quot, divresult.rem);
  return 0;
}
