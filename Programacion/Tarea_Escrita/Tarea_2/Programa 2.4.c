#include <stdio.h>

int main()
{
    int edad, pase;

    printf("Control de acceso \n");
    printf("que edad tienes?: ");
    scanf("%d", &edad);

    if (edad >= 18) 
    {

        printf("tienes pase VIP? (1 para SI, 0 para NO): ");
        scanf("%d", &pase);

        if (pase == 1)
            {
            printf("Bienvenido! Pasa a la zona lounge con barra libre.\n");
        }
        else
            {
            printf("Pasa a la zona general. ¡Diviertete!\n");
        }

    }
    else
        {

        printf("Lo siento, acceso denegado.\n");
    }
}

