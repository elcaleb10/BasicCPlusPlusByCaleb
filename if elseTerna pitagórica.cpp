#include <stdio.h>
#include <cmath>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (pow(a, 2) + pow(b, 2) == pow(c, 2))
    {
        printf("SI\n");
    }
    else if(a=sqrt(pow(b,2+pow(b,2))));
    {
        printf("SI\n");
    }
    else if(b=sqrt(pow(a,2-pow(c,2))));
    {
       printf("SI\n");
    }
    else if(c=sqrt(pow(a,2-pow(b,2))));
    {
        printf("SI\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}

