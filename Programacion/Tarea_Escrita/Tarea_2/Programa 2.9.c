#include <stdio.h>
#include <math.h>

int main()
{
    int tipo_item;
    float fuerza, base;

    printf("Ingrese el tipo de Power-Up recogido (1-4): ");
    scanf("%d", &tipo_item);

    printf("Ingrese su fuerza base: ");
    scanf("%f", &base);

    if (tipo_item == 1)
        {
        fuerza = base / 4;
    }
    else if (tipo_item == 2)
    {
        fuerza = pow(base, 2);
    }
    else if (tipo_item == 3)
    {
        fuerza = base * 5;
    }
    else {
        fuerza = 0;
    }
    printf("Tu fuerza final es: %.2f\n", fuerza);
}

