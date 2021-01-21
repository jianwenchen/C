#include <stdio.h>
#include <math.h>
double squareRoot(double x);
int main()
{
    double x;
    for (x = 1.0; x <= 10.0; x += 0.1)
        printf("%f\t%f\t%f\n", x, squareRoot(x), sqrt(x));
}

double squareRoot(double x)
{
    double r = x;
    const double eps = 0.000000001;
    while (fabs(r * r - x) >= eps)
    {
        r = 1.0 / 2 * (r + x / r);
    }
    return r;
}