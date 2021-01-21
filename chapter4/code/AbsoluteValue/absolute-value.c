#include <stdio.h>
double absolute(double x);
int main()
{
    double u, v;
    printf("Please input a value:");
    scanf("%lf", &u);
    v = absolute(u);
    printf("The absolute value is %f.", v);
    return 0;
}

double absolute(double x)
{
    if (x >= 0)
        return x;
    else 
        return -x;
}