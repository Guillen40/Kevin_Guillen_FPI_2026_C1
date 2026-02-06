#include <stdio.h>

int main()
{
    int contador = 0;
    float ingreso, total_ingresos = 0.0, promedio;
    printf("Ingrese el ingreso del empleado: ");
    scanf("%f", &ingreso);
    while (ingreso != 0)
    {
        total_ingresos += ingreso;
        contador++;
        printf("Ingrese el ingreso del empleado (0 para terminar): ");
        scanf("%f", &ingreso);
    }
    if (contador > 0)
    {
        promedio = total_ingresos / contador;
        printf("Total de ingresos: %.2f\nPromedio de ingresos: %.2f\n", total_ingresos, promedio);
    } else

    {
        printf("No se ingresaron datos validos.\n");
    }
}
