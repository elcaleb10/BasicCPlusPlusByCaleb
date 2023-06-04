#include <stdio.h>

int main()
{
    int n, x;
    double suma, promedio;
    suma=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        suma=suma + x;
    }
    promedio=suma / n;

    printf("%0.2f", promedio);
    return 0;
}
