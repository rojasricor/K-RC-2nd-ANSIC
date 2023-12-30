#include <stdio.h>

/* copia la entrada a la salida; 1st version */
int main()
{
    int c;

    printf("\nIngrese una cadena de texto y se imprimira lo mismo");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    
    /* EOF: valor distintivo cuando no hay
        más caracteres a la entrada.
        EOF = end of file (fin de archivo) */
    c = getchar();
    while (c != EOF) {
        if (c == '\n')
            printf("\n\n");
        else
            putchar(c);
        
        c = getchar();
    }

    if (c == EOF)
        printf("\nEntrada finalizada por el usuario...\n");
    
    printf("Programa finalizado.\n");
}