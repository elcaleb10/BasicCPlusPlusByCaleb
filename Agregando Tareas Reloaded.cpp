#include <stdio.h>

int main()
{
    int N, P, x, contador=0;
    scanf("%d %d", &N, &P);
    for(int i=1; i<=N; i++)
    {
        scanf("%d", &x);
        if(x>P)
        {
            contador++;
        }
    }
    printf("%d", contador);

    return 0;
}
