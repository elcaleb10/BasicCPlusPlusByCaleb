#include <stdio.h>
#include <string.h>


char arr[110];

int main()
{
    int n;
    scanf("%d\n", &n);
    for(int i=0; i<n; i++)
    {
        fgets(arr, 110, stdin);
        printf("%s", arr);
    }


    return 0;
}

/*int main()
{
    fgets(arr, 110, stdin);
    //printf("%s", arr);//
    int len = strlen(arr);
    printf("%d", len);


    return 0;
}*/

/*int main()
{
    char s1[] = "hola";
    char s2[] = "mundo";

    if(strcmp(s1, s2)==0)
    {
        printf("Son iguales\n");
    }
    else{
        printf("son diferentes");
    }


    return 0;
}*/
/*int main()
{
    scanf("%s", s);
    int n = strlen(s);

    for(int i=0; i<n; i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n");

    return 0;
}*/
