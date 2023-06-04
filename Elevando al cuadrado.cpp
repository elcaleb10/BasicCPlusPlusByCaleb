#include <stdio.h>

int main()
{
   int n, c=0;
   scanf("%d", &n);
   while(n<30000)
   {
       n*=n;
       c++;
   }

   printf("%d %d\n", n, c);

    return 0;
}

