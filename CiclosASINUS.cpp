#include <stdio.h>

int main()
{
    int n, x;
    int suma=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        suma=suma+x;
    }
    printf("%d", suma);

    return 0;
}
