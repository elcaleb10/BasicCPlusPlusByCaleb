#include <stdio.h>

int main()
{
    int N, K, X, TotalDigitoK=0;

    scanf("%d %d", &N, &K);

    for(int i=1; i<=N; i++)
    {
        scanf("%d", &X);
        if(X==K)
        {
            TotalDigitoK=TotalDigitoK+1;
        }
    }
    printf("%d", TotalDigitoK);

    return 0;
}
