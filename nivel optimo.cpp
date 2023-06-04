#include <iostream>
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("Nivel Optimo");
        return 0;
    }

    int dif = abs(a - b);
    int nivel;

    if (a < b)
    {
        nivel = 1;
    }
    else
    {
        nivel = 2;
    }

    printf("%d %d", nivel, dif);

    return 0;
}

