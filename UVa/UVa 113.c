#include<stdio.h>
#include <math.h>
int main()
{
  double n,p,s,c;
  while( scanf("%lf%lf",&n,&p)!=EOF)
   {
   s=1/n;
  c=pow(p,s);
  printf("%.0lf\n",c);
   }
  return 0;
}
