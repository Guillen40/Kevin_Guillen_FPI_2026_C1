#include <stdio.h>
#include <ctype.h>
#include <string.h>

void interpreta(char *cadena);

int main(void)
{
    char cad[50];

    printf("\nIngrese la cadena de caracteres (ej. 3p6c4a5q): ");
    fgets(cad, sizeof(cad), stdin);
    cad[strcspn(cad, "\n")] = '\0';

    interpreta(cad);
    printf("\n");

    return 0;
}

void interpreta(char *cadena)
{
    int i = 0, j, k;
    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i]))
        {
            k = cadena[i-1] - '0';
            for (j = 0; j < k; j++)
                putchar(cadena[i]);
        }
        i++;
    }
}
