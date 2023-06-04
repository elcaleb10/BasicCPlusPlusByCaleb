#include <stdio.h>
#include <string.h>

char s[110];

int main()
{
    scanf("%s", s);

    int n= strlen(s);

    bool esPalindramo = true;

    for(int i=0; i<n; i++)
    {
        if(s[i]!=s[n-1-i])
        {
            esPalindramo = false;
            break;
        }
    }

    if(esPalindramo==true)
    {
        printf("Si es");
    }
    else
    {
        printf("No es");
    }

    return 0;
}
