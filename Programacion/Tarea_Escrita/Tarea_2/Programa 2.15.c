#include <stdio.h>

    int main(void)
    {
    int membresia, edad, meses;
    float costo;

    printf("Ingrese tipo de membresia (1: Basica, 2: Premium, 3: Elite): ");
    scanf("%d", &membresia);
    printf("Ingrese edad: ");
    scanf("%d", &edad);
    printf("Ingrese numero de meses: ");
    scanf("%d", &meses);

    switch (membresia)
    {
        case 1:
            costo = meses * 300;
            break;
        case 2:
            costo = meses * 500;
            break;
        case 3:
            costo = meses * 800;
            break;
        default:
            costo = -1;
            break;
    }

    if (costo != -1) {
        if (edad >= 60)
            costo *= 0.75;
        else if (edad <= 18)
            costo *= 0.85;
        printf("\nMembresia: %d\t Meses: %d\t costo total: $%.2f\n", membresia, meses, costo);
    } else {
        printf("\ntipo de membresia incorrecto.\n");
    }

    return 0;
}
