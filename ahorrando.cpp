#include <stdio.h>
int main()
{
    int p, x;
    int contador = 0;
    scanf("%d", &p);
    for(int i=1; i<=7; i++)
    {
        scanf("%d", &x);
        if(x>p)
        {
            contador++;
        }
    }
    printf("%d", contador);


    return 0;
}
