#include <stdio.h>

/* cuenta los caracteres de la entrada; 2nd version */
int main()
{
    int c;
    double nc;

    printf("\nIngrese en la entrada cualquier texto y se contará los caracteres ingresados:");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");

    for (nc = 0; (c = getchar()) != EOF; ++nc)
        if (c == '\n')
            putchar(c);
            
    if (c == EOF)
        printf("\nEntrada finalizada por el usuario...\n");
    
    printf("Programa finalizado.");
    printf("\n\n");
    printf("Número de caracteres: %.0f\n", nc);

    return 0;
}