#include <stdio.h>

int main()
{
    int N, x;
    scanf("%d", &N);
    if(N<=10 && N>=0)
    {
        for(int i=1; i<4; i++)
            {
                scanf("%d", &x);
                if(x<=10 && x>=0)
                {
                    if(N>x)
                    {
                        printf("Soy Mejor");
                    }
                    else if(N<x)
                    {
                        printf("Shh");
                    }
                    else if(N==x)
                    {
                        printf("Te gano en la siguiente");
                    }
                }
                else
                {
                    return 0;
                }
            }
    }

    return 0;
}
