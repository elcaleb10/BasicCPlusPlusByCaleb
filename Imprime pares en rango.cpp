#include <stdio.h>

int main()
{
   int M, N;
    scanf("%d %d", &M, &N);
    for(int i=M; i<=N; i++)
    {
        if(i%2==0)
           {
                printf("%d\n", i);
           }
    }


    return 0;
    }
