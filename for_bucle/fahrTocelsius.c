#include <stdio.h>

/* imprime la tabla Fahrenheit-Celsius en orden inverso
    para fahr = 300, 280, ..., 0 */
int main()
{
    int fahr;

    printf("°Fahr\t\t°Celsius\n");
    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d°F\t\t%5.1f°C\n", fahr, (5.0 / 9.0) * (fahr - 32));
    return 0;
}