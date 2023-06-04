#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n>=0 && n<=17)
    {
        printf("MENOR DE EDAD");
    }
    else if(n>=18)
    {
        printf("MAYOR DE EDAD");
    }


    return 0;
}
