#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double d = B * B - 4 * A * C;
    if (d > 0)
    {
        double x1 = (-B - sqrt(d)) / (2 * A);
        double x2 = (-B + sqrt(d)) / (2 * A);
        printf("%.4f\n", x1);
        printf("%.4f\n", x2);
    }
    else if (d == 0)
    {
        double x = -B / (2 * A);
        printf("%.4f\n", x);
    }
     else {
        printf("NA\n");
    }

    return 0;
}
