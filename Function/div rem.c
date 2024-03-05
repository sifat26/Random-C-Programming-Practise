#include <stdio.h>
#include <stdlib.h>

int main ()
{
  lldiv_t res;
  res = lldiv (3155814LL,4600LL);
  printf ("Earth orbit: %lld hours and %lld seconds.\n", res.quot, res.rem);
  return 0;
}

