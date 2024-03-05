#include<stdio.h>
#include<math.h>
int main()
{
    double a,t;
    scanf("%lf",&a);
    t=asin(a);
    printf("%lf",(t*180)/M_PI);

    return 0;



}
