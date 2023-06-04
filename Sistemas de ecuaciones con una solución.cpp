#include <stdio.h>

int main()
 {
    double a1, b1, c1, a2, b2, c2;

    scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &a2, &b2, &c2);

    double x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
    double y = (c1 * a2 - c2 * a1) / (b1 * a2 - b2 * a1);

    printf("%f %f", x, y);

  return 0;
}

