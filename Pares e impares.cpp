#include <stdio.h>
int main()
{

    int N, X;
    int SumaP=0, SumaI=0;

    scanf("%d", &N);

    for( int i=1; i<=N; i++)
    {
        scanf("%d", &X);
        if(X%2==0)
        {
            SumaP=SumaP+1;
        }
        else
        {
            SumaI=SumaI+1;
        }
    }
    printf("%d %d", SumaP, SumaI);


    return 0;
}
