#include <stdio.h>
/* imprime la tabla Celsius-Fahrenheit
    para fahr = 0, 20, ..., 300; versión de punto flotante */
int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;          /* límite inferior de la tabla temperaturas */
    upper = 300;        /* límite superior */
    step = 20;          /* tamaño del incremento */

    celsius = lower;
    printf("°Celsius\t - \t°Fahr\n");   /* imprime un encabezado sobre la tabla */
    while (celsius <= upper) {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%3.0f°C\t\t%5.1f°F\n", celsius, fahr);
        celsius += step;
    }
}