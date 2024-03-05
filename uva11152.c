#include<stdio.h>
#include<math.h>
int main()
{
   double a,b,c,x,y,r,s,violate,rose,R,sun;
   while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
   {
   s = (a+b+c)/2.0;
   y=sqrt(s*(s-a)*(s-b)*(s-c));
   r=y/s;
   rose=M_PI*r*r;
   violate=y-rose;
   R=(a*b*c)/(4*y);
   sun=(M_PI*R*R)-y;

   printf("%.4lf %.4lf %.4lf\n",sun,violate,rose);
}
   return 0;

}
