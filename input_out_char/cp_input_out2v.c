#include <stdio.h>

/* copia la entrada a la salida; 2nd version */
int main()
{
    int c;

    printf("\nIngrese una cadena de texto y se imprimira lo mismo");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    while ((c = getchar()) != EOF)
        if (c == '\n')
            printf("\n\n");
        else
            putchar(c);

    if (c == EOF)
        printf("\nEntrada finalizada por el usuario...\n");
    
    printf("Programa finalizado.\n");
}