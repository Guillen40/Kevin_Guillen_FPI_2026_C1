#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    fgets(cad, sizeof(cad), stdin);
    cad[strcspn(cad, "\n")] = '\0';

    printf("Ingrese la posicion en la cadena que desea verificar: ");
    scanf("%d", &n);
    while (getchar() != '\n');

    if (n >= 1 && n <= strlen(cad))
    {
        if (islower(cad[n-1]))
            printf("\n'%c' es una letra minuscula\n", cad[n-1]);
        else
            printf("\n'%c' no es una letra minuscula\n", cad[n-1]);
    }
    else
        printf("La posicion ingresada esta fuera del rango (1-%ld)\n", strlen(cad));

}
