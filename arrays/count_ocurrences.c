#include <stdio.h>

/* cuenta dígitos, espacios blancos, y otros */
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

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
}