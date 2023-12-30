#include <stdio.h>

/* cuenta los espacios en blanco, tabuladores y líneas de entrada */
int main()
{
    int c, ws, tabs, nl;

    printf("\nIngrese en la entrada cualquier texto y se contará los espacios en blanco, tabs y líneas de entrada:");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    
    ws = tabs = nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++ws;
        if (c == '\t')
            ++tabs;
        if (c == '\n') {
            putchar(c);
            ++nl;
        }
    }
    if (c == EOF)
        printf("\nEntrada finalizada por el usuario...\n");
    
    printf("Programa finalizado.");
    printf("\n\n");

    printf("Espacios en blanco: %d\n", ws);
    printf("Tabuladores: %d\n", tabs);
    printf("Nueva línea: %d\n", nl);
}