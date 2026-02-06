#include <stdio.h>

int main() {
    int numero;

    printf("Ingresa un numero (ej: el día de hoy): ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        {
        printf("El numero %d es par.\n", numero);
        printf("Hoy le toca lavar los platos a: Juan\n");
    }
    else {
        printf("El numero %d es impar.\n", numero);
        printf("Hoy le toca lavar los platos a: Maria\n");
    }

}

