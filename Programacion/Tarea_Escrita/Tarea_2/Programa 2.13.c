#include <stdio.h>
#include <math.h>

int main()
{
    float carga, velocidad;

    printf("Sistema de Control QoS (Calidad de Servicio)\n");
    printf("Ingrese el valor de carga de la red: ");
    scanf("%f", &carga);

    if (carga > 0 && carga <= 15)
        {
        velocidad = pow(carga, 2) + 10;
    }
    else if (carga > 15 && carga <= 30)
        {
        velocidad = (pow(carga, 3) / 2) + 5;
    }
    else if (carga > 30 && carga <= 60)
        {
        velocidad = carga + 15;
    }
    else
        {
        velocidad = 0;
    }
    printf("\nResultado: La velocidad asignada es %.2f Mbps\n", velocidad);

    return 0;
}
