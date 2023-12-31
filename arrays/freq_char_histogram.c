#include <stdio.h>

#define WS ' ' /* first char of printable ASCII */
#define LASTC '~' /* last char of printable ASCII */

#define ARRAY_SIZE 94 /* tamaño del array para
    guardar las palabras */

void clearArray(int arr[ARRAY_SIZE])
{
    for (int i = 0; i < ARRAY_SIZE; ++i)
        arr[i] = 0;
}

int main()
{
    int c, i, j;
    int nchar[ARRAY_SIZE];

    clearArray(nchar);

    printf("\nIngrese una cadena de texto y se imprimirá un\n");
    printf("histograma de frecuencias con las que aparecen\n");
    printf("diferentes caracteres en la entrada:");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    while ((c = getchar()) != EOF) {
        if (c >= WS && c <= LASTC) {
            ++nchar[c - WS];
        }

        if (c == '\n') {
            for (i = 0; i < ARRAY_SIZE; ++i) {
                if (nchar[i] > 0) {
                    if (i == WS - WS) { /* WS - WS = 0,
                        first char of our array */
                        printf("\" \"");
                    } else {
                        printf("\"%c\"", i + WS);
                    }
                    
                    printf(": ");
                    for (j = 0; j < nchar[i]; ++j)
                        printf("▌");
                    printf("(%d) veces.\n\n", nchar[i]);
                } else {
                    // No hay nada que hacer aquí, ya que no hay longitud para imprimir.
                }
            }

            clearArray(nchar); // poner valores del array en 0
            putchar('\n');
        }
    }

    if (c == EOF) {
        printf("\nEntrada finalizada por el usuario.\n");
    }

    printf("Programa finalizado.\n\n");
}