#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n<0)
    {
        printf("Left");
    }
    else if(n>0)
    {
        printf("Right");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}
