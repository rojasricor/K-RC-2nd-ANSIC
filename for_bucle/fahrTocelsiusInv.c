#include <stdio.h>

/* imprime la tabla Fahrenheit-Celsius */
int main()
{
    int fahr;

    printf("°Fahr\t\t°Celsius\n");
    for (fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d°F\t\t%5.1f°C\n", fahr, (5.0 / 9.0) * (fahr - 32));
}