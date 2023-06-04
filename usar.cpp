#include <stdio.h>
#include <math.h>

int main()
{
    float v, r, h, PI;
    const float PI = 3.14159265;

    scanf("0.2%f", r);
    scanf("0.2$f", h);
    v=((1/3)*PI*(r*r)*h);
    prinf("VOLUMEN=%0.2lf", v);

    return 0;
}
