#include <stdio.h>
#include <string.h>

int cuenta(char *cadena);

int main(void)
{
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);
    cad[strcspn(cad, "\n")] = '\0';

    printf("\nLongitud de la cadena: %d\n", cuenta(cad));

    return 0;
}

int cuenta(char *cadena)
{
    int c = 0;
    while (cadena[c] != '\0')
        c++;
    return c;
}
