#include <stdio.h>
#include <iostream>

int main()
{
    int i, numero, factorial = 1;

    printf("ingrese un numero: ");
    scanf("%d", &numero);

    for(int i = 1; i<=numero; i++)
    {
        factorial = factorial * i;
    }
    printf("el factirial de %d es: %d",numero, factorial);

    return 0;
}
