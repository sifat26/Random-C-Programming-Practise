#include<stdio.h>
#include <math.h>
const double PI = acos(-1.0);
int main()
{
    double a, b, c,V,Rr,S,Sr,R,s;
    while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
    {
        s = (a + b + c) / 2.0;
        V = sqrt(s * (s - a) * (s - b) * (s - c));
        Rr = V / s;
        R = PI * Rr * Rr;
        Sr = (a * b * c) / (4 * Rr * s);
        S = PI * Sr * Sr;
        S -= V;
        V -= R;
        printf("%.4lf %.4lf %.4lf\n", S, V, R);
    }
    return 0;
}
