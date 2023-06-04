#include <stdio.h>

int main()
{
    int n, x, y;
    int suma=0;
    scanf("%d", &n);
    int i=1;
    while(i<=n)
    {
        scanf("%d %d", &x, &y);
        suma=suma+x*y;
        i++;
    }
    printf("%d", suma);

    return 0;
}

