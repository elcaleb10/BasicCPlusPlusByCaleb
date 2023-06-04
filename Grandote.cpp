#include  <stdio.h>
#include  <math.h>

int main ()
{
	int n, resultado=0;
	scanf ("%d",&n);
	for (int i=0; i<=n; i++)
    {
		resultado += pow (2,i);
	}
	printf ("%d", resultado);
	//Grandote
	return 0;
}
