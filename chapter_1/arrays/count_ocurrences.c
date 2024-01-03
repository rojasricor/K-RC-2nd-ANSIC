#include <stdio.h>

void cleararray(int arr[]);

/* cuenta dígitos, espacios blancos, y otros */
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    cleararray(ndigit); // inicializar valores del array

    printf("\nIngrese una cadena de texto y se contará los dígitos, espacios blancos y otros caracteres:");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    if (c == EOF)
        printf("\nEntrada finalizada por el usuario...\n");
    
    printf("\nPrograma finalizado...\nDígitos =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", espacios blancos = %d, otros = %d\n", nwhite, nother);
    
    return 0;
}

/* cleararray: poner valores del array en 0 */
void cleararray(int arr[])
{
    for (int i = 0; i < 10; ++i)
        arr[i] = 0;
}