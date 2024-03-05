#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main ()
{
  double p, result;
  p = 45.0;
  result = tan ( p * PI / 180.0 );
  printf ("The tangent of %f degrees is %f.\n", p, result );
  return 0;
}
