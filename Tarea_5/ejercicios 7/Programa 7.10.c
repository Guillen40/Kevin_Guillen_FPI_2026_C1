#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;
    char resp[10];

    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    fgets(resp, sizeof(resp), stdin);
    c = resp[0];

    while (c == 'S' || c == 's')
    {
        printf("Ingrese la cadena de caracteres: ");
        fgets(cad, sizeof(cad), stdin);
        cad[strcspn(cad, "\n")] = '\0';

        i++;
        sum += atof(cad);

        printf("Desea ingresar otra cadena de caracteres (S/N)? ");
        fgets(resp, sizeof(resp), stdin);
        c = resp[0];
    }

    if (i > 0)
    {
        printf("\nSuma: %.2f\n", sum);
        printf("Promedio: %.2f\n", sum / i);
    }
    else
        printf("No se ingresaron datos.\n");

    return 0;
}
