#include <stdio.h>

int main()

{
    int estado;

    printf("Estado de suscripción (1:Activa, 0:Pausa, -1:Cancelada): ");
    scanf("%d", &estado);

    if (estado == 1) {
        printf("Todo listo! Tienes acceso a todo el contenido.\n");
    }
    else
        {
        if (estado == 0) {
            printf("Tu cuenta esta en pausa. Actualiza tu metodo de pago.\n");
        }
        else
            {
            printf("Tu cuenta esta cancelada.:(\n");
        }
    }

    return 0;
}
