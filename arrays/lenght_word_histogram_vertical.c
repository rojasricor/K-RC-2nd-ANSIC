#include <stdio.h>

#define YES 1 /* Estado en verdadero */
#define NO 0 /* Estado en falso */

#define ARRAY_SIZE 100 /* tamaño del array para
    guardar las palabras */

void clearArray(int arr[ARRAY_SIZE])
{
    for (int i = 0; i < ARRAY_SIZE; ++i)
        arr[i] = 0;
}

/* imprime histograma de forma horizontal de
    la longitud de las palabras */
int main()  
{
    int c, nw, i, j, nl, lwbig, wordLimitExceeded;
    int nwlenght[ARRAY_SIZE];

    wordLimitExceeded = NO;
    nl = nw = lwbig = 0;
    clearArray(nwlenght); // inicializar valores del array

    printf("\nIngrese una cadena de texto y se imprimirá un histograma\n");
    printf("en forma vertical con la longitud de las palabras:");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    while ((c = getchar()) != EOF) {
        // manejar desbordamiento del array
        if (nw < ARRAY_SIZE) {
            if (c == ' ' || c == '\t' || c == '\n') {
                if (lwbig < nwlenght[nw]) {
                    lwbig = nwlenght[nw];
                }

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
                printf("Número de palabras: %d", nw);
                printf("\n\n\n");
            }
            
            for (i = lwbig; i > 0; --i) {
                for (j = 0; j < nw; ++j) {
                    if (nwlenght[j] >= i)
                        printf("* ");
                    else
                        printf("  ");
                }

                putchar('\n');
            }

            nw = lwbig = 0;
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