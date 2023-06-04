#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int log2N = 0;
    while (N > 1)
    {
        N /= 2;
        log2N++;
    }
    printf("%d\n", log2N);
    return 0;
}
