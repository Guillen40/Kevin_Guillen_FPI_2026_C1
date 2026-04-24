#include <stdio.h>
#include <string.h>

int main(void)
{
    char cad0[20] = "Hola Mexico";
    char cad1[20] = "Hola Guatemala";
    char cad2[20] = "Hola Venezuela";
    char cad3[20] = "Hola Mexico";
    char *c;
    char c3;
    int i;

    i = strcmp(cad0, cad1);
    printf("\nComparacion cad0 y cad1: %d\n", i);

    i = strcmp(cad0, cad2);
    printf("Comparacion cad0 y cad2: %d\n", i);

    i = strcmp(cad0, cad3);
    printf("Comparacion cad0 y cad3: %d\n", i);

    i = strlen(cad0);
    printf("Longitud de cad0: %d\n", i);

    i = strlen(cad1);
    printf("Longitud de cad1: %d\n", i);

    c = strchr(cad1, 'G');
    if (c != NULL)
    {
        c3 = *c;
        printf("Caracter encontrado en cad1: %c\n", c3);
    }
    else
        printf("'G' no encontrado en cad1\n");

    c = strchr(cad2, 'V');
    if (c != NULL)
    {
        c3 = *c;
        printf("Caracter encontrado en cad2: %c\n", c3);
    }
    else
        printf("'V' no encontrado en cad2\n");

    return 0;
}
