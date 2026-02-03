#include <stdio.h>

int main()
{
    int distancia, tiempo;
    float costo, total;

    printf("Agencia de Viajes Galactica\n");
    printf("Ingrese la distancia del viaje (en miles de km): ");
    scanf("%d", &distancia);

    printf("Ingrese los dias de estancia en la estacion: ");
    scanf("%d", &tiempo);

    costo = distancia * 0.19;

    if (distancia * 2 > 500 && tiempo > 10)
        {
        printf("\nAplicando descuento de Viajero Frecuente (20%%)!\n");
        total = costo * 0.80;
    }
    else
        {
        total = costo;
    }

    printf("El costo total del viaje es: $%.2f creditos\n", total);

    return 0;
}
