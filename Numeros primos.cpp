#include <stdio.h>
#include <iostream>

int main()
{
    int numero, x, i = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for(int x = 1; x<=numero; x++)
    {
        if (numero % x == 0)
            {
                i++;
            }
    }

    if (i == 2)
    {
        printf("Numero primo");
    }
    else
    {
        printf("No es un numero primo");
    }


    return 0;
}
