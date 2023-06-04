#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z;
    scanf("%lf", &x);
    y = (x + 5) / (2 * (x + 1));
    z = (pow(y,2) + x * (x - 2 * y)) / (x*y);

    printf("%f", z);

    return 0;
}
