#include <cstdio>
#include <cmath>

int main()
{
  double A;
  scanf("%lf", &A);

  double volumen = (1.0/4.0) * (15 + 7 * sqrt(5)) * pow(A, 3);
  printf("%0.2lf\n", volumen);

  return 0;
}

