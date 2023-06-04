#include <stdio.h>

int main()
{
    int n, t, x, contador=0;
    scanf("%d %d", &n, &t);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x==t)
        {
            contador++;
        }
    }
    printf("%d", contador);

    return 0;
}
