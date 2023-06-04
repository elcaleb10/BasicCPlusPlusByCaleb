#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n>=0 && n<7)
    {
        printf("Acido");
    }
    else if (n>7 && n<=14)
    {
        printf("Base");
    }
    else if(n<=-1 || n>14)
    {
        printf("Are you kidding me?");
    }
    else
    {
        printf("Neutro");
    }
    return 0;
}
