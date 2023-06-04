#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numeros[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }
    // Ordenamiento burbuja
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(numeros[i] > numeros[j])
            {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }
    printf("POSITIVOS\n");
    for(int i=0; i<n; i++)
    {
        if(numeros[i] > 0)
        {
            printf("%d\n", numeros[i]);
        }
    }
    printf("NEGATIVOS\n");
    for(int i=n-1; i>=0; i--)
    {
        if(numeros[i] < 0)
        {
            printf("%d\n", numeros[i]);
        }
    }
    return 0;
}
