#include <stdio.h>

int main()
{
    int N, x, y;
    int suma=0;
    scanf("%d", &N);
    int i=1;
    while(i<=N)
    {
        scanf("%d %d", &x, &y);
        suma=x+y;
        printf("%d\n", suma);
        i++;
    }

    return 0;
}

