#include <stdio.h>

/* copia la entrada a la salida
    para tabs = \t, retroceso = \b y diag. invertida = \\
    (Hacerlos visibles al imprimir) */
int main()
{
    int c;

    printf("\nIngrese una cadena de texto y se imprimira haciendo visible los siguientes caracteres:\n");
    printf("'\\t' (tab), '\\b' (retroceso), '\\\\' (diagonal invertida).");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == '\\')
            printf("\\\\");
        if (c != '\t' && c != '\b' && c != '\\' && c != '\n')
            putchar(c);
        if (c == '\n')
            printf("\n\n");
    }

    if (c == EOF)
        printf("\nEntrada finalizada por el usuario...\n");
    
    printf("Programa finalizado.\n");
}