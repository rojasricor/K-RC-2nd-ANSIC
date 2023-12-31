#include <stdio.h>

#define YES 1 /* Estado en verdadero */
#define NO 0 /* Estado en falso */

#define ARRAY_SIZE 100 /* tamaño del array para
    guardar las palabras */

void clearArray(int nwlenght[ARRAY_SIZE])
{
    for (int i = 0; i < ARRAY_SIZE; ++i)
        nwlenght[i] = 0;
}

/* imprime histograma de forma horizontal de
    la longitud de las palabras */
int main()
{
    int c, nw, i, j, nl, wordLimitExceeded;
    int nwlenght[ARRAY_SIZE];

    nw = nl = 0;
    wordLimitExceeded = NO;
    clearArray(nwlenght); // inicializar valores del array

    printf("\nIngrese una cadena de texto y se imprimirá un histograma\n");
    printf("en forma horizontal con la longitud de las palabras:");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    while ((c = getchar()) != EOF) {
        // manejar desbordamiento del array
        if (nw < ARRAY_SIZE) {
            if (c == ' ' || c == '\t' || c == '\n') {
                if (nwlenght[nw] > 0) {
                    ++nw;
                    ++nl;
                }
            } else {
                ++nwlenght[nw];
            }
        } else {
            wordLimitExceeded = YES;
        }

        if (c == '\n' || wordLimitExceeded == YES) {
            if (nw != 0) {
                printf("\n");
            }

            for (i = 0; i < nw; ++i) {
                if (nwlenght[i] > 0) {
                    printf("%d: ", i + 1);
                    for (j = 0; j < nwlenght[i]; ++j)
                        printf("▌");
                    printf("(%d) letras.\n\n", nwlenght[i]);
                } else {
                    // No hay nada que hacer aquí, ya que no hay longitud para imprimir.
                }
            }

            nw = 0;
            clearArray(nwlenght); // poner valores del array en 0
            putchar('\n');
        }

        if (wordLimitExceeded == YES) {
            printf("Error! limite de palabras alcanzado.\n");
            break;
        }
    }

    if (c == EOF) {
        printf("\nEntrada finalizada por el usuario.\n");
    }

    printf("Programa finalizado...\nPalabras escritas: %d\n\n", nl);
}