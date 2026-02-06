#include <stdio.h>

void main(void)

{
    int numero;

    {
        printf("Ingrese un entero positivo para iniciar la serie: ");
        scanf("%d", &numero);
        if (numero <= 0)
            printf("Error: Debe ser un entero positivo.\n");
    }   while (numero <= 0);

    printf("Sucesion de ULAM:\n");
    printf("%d", numero);

    while (numero != 1)
    {
        if (numero % 2 == 0)
        {
            numero = numero / 2;
        } else
            {
                numero = (numero * 3) + 1;
            }
        printf(" -> %d", numero);
    }
    printf("\n\nFin de la sucesión.\n");
}
