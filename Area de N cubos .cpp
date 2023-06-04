#include <stdio.h>

int main()
{

    int N, L, volumen;

    scanf("%d", &N);

    for(int i=1; i<=N; i++)
    {
        scanf("%d", &L);
        volumen=(L*L*L);
        printf("%d ", volumen);
    }

    return 0;
}
