#include <stdio.h>

int main()
{
    int flix, martontito;
    scanf("%d %d", &flix, &martontito);

    if (flix == martontito)
    {
        printf("EMPATE");
    }
    else if ((flix == 0 && martontito == 2) || (flix == 2 && martontito == 5) ||
            (flix == 5 && martontito == 0) || (flix == 4 && (martontito == 0 || martontito == 2)))
    {
        printf("FLIX");
    }
    else
    {
        printf("MARTONTITO");
    }

    return 0;
}

