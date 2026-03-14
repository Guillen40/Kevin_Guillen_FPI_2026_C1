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
    if (cadena[0] == '\0')
        return 0;
    else
        return 1 + cuenta(&cadena[1]);
}
