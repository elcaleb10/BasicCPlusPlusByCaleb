#include <stdio.h>

int main()
{
    int w, h, x, y, r, s;
    scanf("%d %d %d %d %d %d", &w, &h, &x, &y, &r, &s);

    // Enrollar movimiento horizontal
    x = (x + r) % w;
    if (x < 0)
    {
        x += w;
    }

    // Enrollar movimiento vertical
    y = (y + s) % h;
    if (y < 0)
    {
        y += h;
    }

    printf("%d %d\n", x, y);
    return 0;
}

