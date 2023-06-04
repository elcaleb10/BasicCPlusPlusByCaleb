#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int divisor=1; n/divisor!=0; divisor*= 2) // iterar mientras la divisi�n entera sea diferente de cero
    {
        sum += (n / divisor); // agregar la parte entera de la divisi�n a la suma
    }

    printf("%d\n", sum);
    return 0;
}




