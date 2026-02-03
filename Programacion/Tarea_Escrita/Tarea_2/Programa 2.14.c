#include <stdio.h>

int main(void) {
    int destino, peso;
    float costo;

    printf("Ingrese el destino (1: Local, 2: Nacional, 3: Internacional): ");
    scanf("%d", &destino);
    printf("Ingrese el peso en gramos: ");
    scanf("%d", &peso);

    switch (destino)
    {
        case 1:
            costo = peso * 0.05;
            break;
        case 2:
            costo = peso * 0.12;
            break;
        case 3:
            costo = peso * 0.25;
            break;
        default:
            costo = -1;
            break;
    }
       if (costo != -1)
        printf("\nCosto de envio: $%.2f\n", costo);
    else
        printf("\nDestino incorrecto.\n");

    return 0;
}

