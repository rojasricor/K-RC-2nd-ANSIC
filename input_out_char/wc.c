#include <stdio.h>

#define IN 1    /* en una palabra */
#define OUT 0   /* fuera de una palabra */

/* cuenta líneas, palabras, y caracteres de la entrada */
int main()
{
    int c, nl, nw, nc, state;

    printf("\nIngrese una cadena de texto y se contará las líneas, palabras y caracteres de la entrada:");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n\n");
    
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("\n\n");
    printf("Programa finalizado...");
    printf("\n\n");
    printf("Líneas\t\tPalabras\tCaracteres\n");
    printf("%3d\t\t%4d\t\t%5d\n", nl, nw, nc);
}