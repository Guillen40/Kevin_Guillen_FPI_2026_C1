#include <stdio.h>
#include <math.h>

int main()
{
    int contador, total_numeros, valor, suma_pares = 0, suma_impares = 0, conteo_impares = 0;
    printf("Ingrese la cantidad de numeros a procesar: ");
    scanf("%d", &total_numeros);
    if (total_numeros > 0)
    {
        for (contador = 1; contador <= total_numeros; contador++)
        {
            printf("Ingrese el numero %d: ", contador);
            scanf("%d", &valor);
            if (valor != 0)
            {
                if (pow(-1, valor) > 0)
                {
                    suma_pares += valor;
                } else
                 {
                    suma_impares += valor;
                    conteo_impares++;
                 }
            }
        }
        printf("Suma de pares: %d\n", suma_pares);
        if (conteo_impares > 0)
        {
            printf("Promedio de impares: %.2f\n", (float)suma_impares / conteo_impares);
        } else
           {
            printf("No hay numeros impares\n");
           }
    } else
     {
        printf("\nCantidad inválida\n");
     }
}
