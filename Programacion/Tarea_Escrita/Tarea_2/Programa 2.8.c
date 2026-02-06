#include <stdio.h>

int main()
{
    int juego;
    int nivel;
    float win_rate;

    printf("Reclutamiento de Ligas Pro\n");
    printf("1. League of Legends \n2. Valorant \n3. Counter-Strike\n");
    printf("Selecciona tu juego (1-3): ");
    scanf("%d", &juego);

    printf("Ingresa tu nivel actual: ");
    scanf("%d", &nivel);
    printf("Ingresa tu porcentaje de victorias (Win Rate): ");
    scanf("%f", &win_rate);

    switch(juego)
    {
        case 1:
            if (nivel >= 100 && win_rate >= 60.0)
                {
                printf("Bienvenido a la Liga de Leyendas Pro!\n");
            } else
            {
                printf("No cumples los requisitos para LoL.\n");
            }
            break;

        case 2:
            if (nivel >= 50 && win_rate >= 70.0)

            {
                printf("Bienvenido al Circuito Pro de Valorant!\n");
            } else
            {
                printf("No cumples los requisitos para Valorant.\n");
            }
            break;

        case 3:
            if (nivel >= 20 && win_rate >= 80.0)
                {
                printf("Bienvenido a la Elite de Counter-Strike!\n");
            } else
            {
                printf("No cumples los requisitos para CS.\n");
            }
            break;

        default:
            printf("Juego no registrado en la base de datos.\n");
            break;
    }

}

