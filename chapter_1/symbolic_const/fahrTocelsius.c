#include <stdio.h>

#define LOWER 0         /* límite inferior de la tabla */
#define UPPER 300       /* límite superior */
#define STEP  20        /* tamaño del incremento */

/* imprime la tabla Fahrenheit-Celsius
    usando constantes simbólicas en lugar de variables */
int main()
{
    int fahr;

    printf("°Fahr\t\t°Celsius\n");
    for (fahr = 0; fahr <= UPPER; fahr += STEP)
        printf("%3d°F\t\t%5.1f°C\n", fahr, (5.0 / 9.0) * (fahr - 32));
    return 0;
}