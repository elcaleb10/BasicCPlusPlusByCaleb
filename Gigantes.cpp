#include <stdio.h>
#include <string.h>

char s[110];

int main()
{
    scanf("%s", s);

    int n = strlen(s);
    int sumaDig=0;

    for(int i=0; i<n; i++)
    {
        sumaDig+=(s[i]-'0');
    }

    printf("%d\n", sumaDig);
    if(sumaDig%3==0)
    {
        printf("Si es\n");
    }
    else{
        printf("no es\n");
    }


    return 0;
}
