#include <stdio.h>
int main()
{
    int n, x, mayor;
    mayor=-1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x>=mayor)
        {
            mayor=x;
        }

    }
        printf("%d", mayor);

    return 0;
}

