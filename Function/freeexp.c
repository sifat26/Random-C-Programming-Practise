
#include <stdio.h>
#include <math.h>

int main ()
{
  double param, result;
  int n;

  param = 8.0;
  result = frexp (param , &n);
  printf ("%f = %f * 2^%d\n", param, result, n);
  return 0;
}
