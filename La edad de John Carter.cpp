#include <stdio.h>

int main()
{
    long long V, D, sum = 0;
    scanf("%lld", &V);

    if(V >= 2 && V <= 250000)
    {
        for(int i=1; i<=V; i++)
        {
            scanf("%lld", &D);
            if(D >= 1 && D <= 250000)
            {
                sum += D;
            }
        }
        int A = sum / 365;
        printf("%d\n", A);
    }

    return 0;
}
