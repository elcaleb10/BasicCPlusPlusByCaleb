#include <stdio.h>

int main()
 {
    int S;
    scanf("%d", &S);

    // Calculamos el número de años, días, horas, minutos y segundos.
    int A = S / (365 * 24 * 60 * 60);
    S -= A * 365 * 24 * 60 * 60;
    int D = S / (24 * 60 * 60);
    S -= D * 24 * 60 * 60;
    int H = S / (60 * 60);
    S -= H * 60 * 60;
    int M = S / 60;
    S -= M * 60;
    int Q = S;

    printf("%d %d %d %d %d", A, D, H, M, Q);

  return 0;
}

