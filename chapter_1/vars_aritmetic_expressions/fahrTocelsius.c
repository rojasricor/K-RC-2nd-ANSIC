#include <stdio.h>

/* imprime la tabla Fahrenheit-Celsius
    para fahr = 0, 20, ..., 300; versión de punto flotante */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* límite inferior de la tabla temperaturas */
    upper = 300;        /* límite superior */
    step = 20;          /* tamaño del incremento */

    fahr = lower;
    printf("°Fahr\t - \t°Celsius\n");   /* imprime un encabezado sobre la tabla */
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f°F\t\t%5.1f°C\n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}