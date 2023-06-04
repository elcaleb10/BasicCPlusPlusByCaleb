#include <stdio.h>

int main()
{

    double N, R, Area;

    scanf("%lf", &N);

    for(int i=1; i<=N; i++)
    {
        scanf("%lf", &R);
        Area=3.1416*(R*R);
        printf("%lf ", Area);
    }

    return 0;
}
