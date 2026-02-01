#include <stdio.h>

int main()
{
    float velocidad;
    printf("Sistema de Monitoreo de Red\n");
    printf("Ingrese la velocidad de descarga detectada (en Mbps): ");
    scanf("%f", &velocidad);

    if (velocidad >= 20.0)
    {
        printf("\nEstado: Conexion de Alta Velocidad.\n");
    }
    else
    {
        printf("\nEstado: conexion estandar.\n");
        printf("Se recomienda limitar el uso de dispositivos simultaneos.\n");
    }

    return 0;
}
