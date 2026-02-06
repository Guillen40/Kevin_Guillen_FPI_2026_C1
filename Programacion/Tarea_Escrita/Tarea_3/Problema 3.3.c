#include <stdio.h>

void main(void)
{
    int i, cantidadDatos, numero;
    int sumaPares = 0;
    int sumaImpares = 0;
    int conteoImpares = 0;

    printf("Cuantos numeros desea ingresar?: ");
    scanf("%d", &cantidadDatos);

    for (i = 1; i <= cantidadDatos; i++)
    {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &numero);

        if (numero != 0)
        {
            if (numero % 2 == 0)
            {
                sumaPares += numero;
            } else
            {
                sumaImpares += numero;
                conteoImpares++;
            }
        }
    }

    printf("Resultados\n");
    printf("Suma de numeros pares: %d\n", sumaPares);

    if (conteoImpares > 0)
    {
        float promedio = (float)sumaImpares / conteoImpares;
        printf("Promedio de numeros impares: %.2f\n", promedio);
    } else
    {
        printf("No se ingresaron numeros impares.\n");
    }
}
