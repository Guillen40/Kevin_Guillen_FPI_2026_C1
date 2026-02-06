#include <stdio.h>

int main()
{
    int numero, i;
    long factorial = 1;
    printf("Ingrese un numero entero no negativo: ");
    scanf("%d", &numero);
    if (numero >= 0)
    {
        for (i = 1; i <= numero; i++)
        {
            factorial *= i;
        }
        printf("El factorial de %d es: %ld\n", numero, factorial);
    } else
    {
        printf("Error: no debe ser negativo negativo\n");
    }
    return 0;
}
