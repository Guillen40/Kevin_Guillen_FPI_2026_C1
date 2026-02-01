#include <stdio.h>

int main()
{
    float subtotal, total_a_pagar;

    printf("Ingrese el subtotal de la compra: ");
    scanf("%f", &subtotal);

    total_a_pagar = subtotal;

    if (subtotal < 1500)

        {
        total_a_pagar = subtotal * 1.11;

        printf("\n--- impuesto por compra menor ---\n");
    }

    printf("El total a pagar es: $%.2f\n", total_a_pagar);

    return 0;
}
