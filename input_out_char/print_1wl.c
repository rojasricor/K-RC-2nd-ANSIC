#include <stdio.h>

/* imprime una palabra por cada línea
    (elimino ' ', '\t' y por definición lo imprimido
        es una sola palabra :) */
int main()
{
    int c;

    printf("\nIngrese una cadena de texto y se imprimira una sola palabra por la línea escrita");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n')
            putchar(c);

        if (c == '\n')
            printf("\n\n");
    }

    if (c == EOF)
        printf("\nEntrada finalizada por el usuario...\n");
    
    printf("Programa finalizado.\n");
}