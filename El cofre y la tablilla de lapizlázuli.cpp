#include <stdio.h>

int main()
{
    int A, B, C, X, Y, Z;
    scanf("%d %d %d %d %d %d", &A, &B, &C, &X, &Y, &Z);

    if ((A <= X && B <= Y && C <= Z) || (A <= Y && B <= X && C <= Z) || (A <= X && B <= Z && C <= Y) || (A <= Z && B <= X && C <= Y) || (A <= Y && B <= Z && C <= X) || (A <= Z && B <= Y && C <= X))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}

