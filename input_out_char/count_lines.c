#include <stdio.h>

/* cuenta las líneas de la entrada */
int main()
{
    int c, nl;

    printf("\nIngrese en la entrada cualquier texto y se contará las líneas de entrada:");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n') {
            ++nl;
            putchar(c);
        }

    if (c == EOF)
        printf("\nEntrada finalizada por el usuario...\n");
    
    printf("Programa finalizado.");
    printf("\n\n");
    printf("Líneas de entrada: %d\n", nl);
}