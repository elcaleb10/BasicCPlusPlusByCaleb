#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (c >= a && c <= b)
    {
        printf("INTERVALO");
    }
    else if (c < a)
    {
        printf("IZQUIERDA");
    }
    else {
        printf("DERECHA");
    }

    return 0;
}

