#include <stdio.h>

int main()
{
    int n, x, y;
    int suma=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d", &x, &y);
        suma=suma+x*y;
    }
    printf("%d", suma);

    return 0;
}
