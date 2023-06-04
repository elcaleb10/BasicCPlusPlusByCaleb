#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    scanf("%lf", x);
    y= (((x+pow(x,2)/(5*x))+3)*(((x+pow(x,2))/(5*x+3)))/((((x+pow(x,2))/(5*x+3)))+2*x));
    printf("%f", y);
    return 0;
}
