#include <stdio.h>

int main()
{


    return 0;
}


/*int arr[110];

int main()
{

    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxi= -1e9;
    for(int ini=0; ini<n; ini++)
    {
        for(int fin=ini; fin<n; fin++)
        {
            int suma=0;
            for(int i=ini; i<=fin; i++)
            {
                suma+= arr[i];
            }
            if(suma>maxi)
            {
                maxi=suma;
            }
        }
    }
    printf("%d\n", maxi);

    return 0;
}*/



/*int cubeta[110];

int main()
{

    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        cubeta[x] ++;
    }
    for(int i=0; i<10; i++)
    {
        if(cubeta[i]>0)
        {
            printf("i:%d %d\n", i, cubeta[i]);
        }
    }

    return 0;
}*/
