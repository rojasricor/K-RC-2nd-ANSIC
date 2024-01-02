#include <stdio.h>

int power(int m, int n);

/* prueba la función power */
int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

/* power: eleva la base a la n-ésima potencia; n >= 0 */
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p *= base;
    return p;
}