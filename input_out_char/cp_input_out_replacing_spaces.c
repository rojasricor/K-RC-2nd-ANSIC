#include <stdio.h>

/* copia la entrada a la salida
    para tabs = +1(' ') = 1(' ')
    (reemplazar cada cadena de uno o más ' ', por un solo ' ') */
int main()
{
    int c, pc;

    printf("\nIngrese una cadena de texto y se imprimira reemplazando varios blancos por un solo blanco:");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    while ((c = getchar()) != EOF) {
        if (c == ' ' && pc == ' ')
            putchar('\b');
        if (c == '\n')
            printf("\n\n");
        else
            putchar(c);
        pc = c;
    }

    if (c == EOF)
        printf("\nEntrada finalizada por el usuario...\n");
    
    printf("Programa finalizado.\n");
}