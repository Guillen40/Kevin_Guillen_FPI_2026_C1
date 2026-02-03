#include <stdio.h>

int main()
{
    int tipo_vehiculo;
    float monto, total;

    printf("Estacion de Energia Inteligente \n");
    printf("1. Motocicleta\n 2. Carro Familiar\n 3. Camion de Carga\n 4. Vehiculo Electrico\n");
    printf("Seleccione su tipo de vehículo (1-4): ");
    scanf("%d", &tipo_vehiculo);

    printf("Monto a cargar: ");
    scanf("%f", &monto);

    switch(tipo_vehiculo)

    {
        case 1:
            total = monto * 0.90;
            printf("Aplicado descuento de Motocicleta.\n");
            break;
        case 2:
            total = monto * 0.70;
            printf("Aplicado descuento de Familiar.\n");
            break;
        case 3:
            total = monto * 1.05;
            printf("Aplicado cargo por dimensiones de Camión.\n");
            break;
        case 4:
            total = monto * 0.80;
            printf("Descuento Eléctrico aplicado.\n");
            break;
        default:
            total = monto;
            printf("Opción no valida. Se cobrara precio estandar.\n");
            break;
    }

    printf("El total a pagar es: $%.2f\n", total);

    return 0;
}
