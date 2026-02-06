#include <stdio.h>

int main() {
    float presupuesto;

    printf("Taquilla Virtual\n");
    printf("Cuanto dinero tienes para tu boleto?: ");
    scanf("%f", &presupuesto);

    if (presupuesto >= 200.0)
    {
        printf("Felicidades! Tienes pase para ZONA PLATINUM.\n");
        printf("Beneficio: Meet & Greet con el artista.\n");
    }
    else if (presupuesto >= 100.0)
    {
        printf("Tienes pase para ZONA GOLD.\n");
        printf("Beneficio: Kit de bienvenida y bebidas gratis.\n");
    }
    else if (presupuesto >= 50.0)
    {
        printf("Tienes pase para ZONA FAN.\n");
        printf("Beneficio: Asiento numerado en filas centrales.\n");
    }
    else
        {
        printf("Tienes pase para ZONA GENERAL.\n");
        printf("Beneficio: Acceso al recinto (de pie).\n");
    }

    printf("Disfruta del evento!\n");
}

