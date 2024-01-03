#include <stdio.h>

#define MAXLINE 1000    /* tamaño máximo de la línea de entrada */

int getln(char line[], int maxline);
void copy(char to[], char from[]);

/* imprime la línea de entrada más larga */
int main()
{
    int len;                /* longitud actual de la línea */
    int max;                /* máxima longitud vista hasta el momento */
    char line[MAXLINE];     /* línea de entrada actual */
    char longest[MAXLINE];  /* la línea mas larga se guarda aquí */

    printf("\nIngrese una cadena de texto y se imprimirá la\n");
    printf("línea de entrada más larga:");
    printf("\n\n");
    printf("<ctrl D> para terminar.");
    printf("\n\n");

    max = 0;
    while ((len = getln(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)    /* hubo una línea */
        printf("%s", longest);

    printf("\nPrograma finalizado.\n\n");
    return 0;
}

/* getln: lee una nueva linea en s, retorna su longitud */
int getln(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copia 'from' en 'to'; supone que to es suficientemente grande */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}