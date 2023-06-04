#include <stdio.h>

int main()
{
  int N, x, y;
  int suma=0;
  scanf("%d ", &N);
  for(int i=1; i<=N; i++)
    {
      scanf("%d %d", &x, &y);
      suma=x+y;
      printf("%d \n", suma);
    }


  return 0;
}
