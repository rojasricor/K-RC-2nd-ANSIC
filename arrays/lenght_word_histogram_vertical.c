#include <stdio.h>

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

    nw = nl = wordLimitExceeded = 0;
    clearArray(nwlenght);

    while ((c = getchar()) != EOF) {
        // manejar desbordamiento del array
        if (nw < ARRAY_SIZE) {
            if (c == ' ' || c == '\t' || c == '\n') {
                ++nw;
                ++nl;
            } else {
                ++nwlenght[nw];
            }
        } else {
            wordLimitExceeded = 1;
        }

        if (c == '\n' || wordLimitExceeded == 1) {
            putchar('\n');
            // for (i = 0; i < nw; ++i) {
            //     if (nwlenght[i] > 0) {
            //         printf("%d: ", i + 1);
            //         for (j = 0; j < nwlenght[i]; ++j)
            //             printf("█");
            //         printf("(%d) letras.\n\n", nwlenght[i]);
            //     } else {
            //         // No hay nada que hacer aquí, ya que no hay longitud para imprimir.
            //     }
            // }
            for (i = 0; i < ARRAY_SIZE; ++i) {
                if (nwlenght[i] != 0) {
                    for (j = 0; j < nwlenght[i]; ++j) {
                        printf("[*]\n");
                    }
                }
            }

            nw = 0;
            clearArray(nwlenght);
            putchar('\n');
        }

        if (wordLimitExceeded == 1) {
            printf("Error! limite de palabras alcanzado.\n");
            break;
        }
    }

    if (c == EOF) {
        printf("\nEntrada finalizada por el usuario.\n");
    }

    printf("Programa finalizado...\nPalabras escritas: %d\n\n", nl);
}