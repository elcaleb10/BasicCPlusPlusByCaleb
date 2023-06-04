#include <stdio.h>

int main()
{
    int n, u, d, sube=0, min=0;
    bool sigue=true;
    scanf("%d %d %d", &n, &u, &d);
    while(sube<n)
    {
        sube=sube+u;
        min+=1;
        if(sube>=n)
        {
            sigue=false;
        }
        else
        {
            sube=sube-d;
            min+=1;
        }
    }
    printf("%d\n", min);

    return 0;
}

