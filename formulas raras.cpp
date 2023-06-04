#include <stdio.h>
#include <math.h>

int main ()
{
    double x, y, z, r;
    scanf("%lf %lf %lf", &x, &y, &z);

    r = (x + x * (y + pow(z,2))) / ((x + 3.1416) * (y + 3.1416));
    printf("%lf", r);
    return 0;
}
