#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
    int numeros_usuario[3];
    int numeros_aleatorios[3];
    int aciertos = 0;

    srand(time(NULL));
    printf("Loteria\n");
    printf("Ingresa 3 numeros entre 10 y 40:\n");
    printf("solo si acertas los 3 numeros recibiras 1 millon de pesos :) \n");

    for (int i = 0; i < 3; i++)

    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros_usuario[i]);

        while (numeros_usuario[i] < 10 || numeros_usuario[i] > 40)
            {
            printf("Por favor, ingresa un numero entre 10 y 40: ");
            scanf("%d", &numeros_usuario[i]);
            }
    }
    printf("=== NUMEROS GENERAROS ALEATORIAMENTE ===\n");
    for (int i = 0; i < 3; i++)
    {
        numeros_aleatorios[i] = 10 + rand() % 31;
        printf("Numero aleatorio %d: %d\n", i + 1, numeros_aleatorios[i]);
    }

    printf("=== RESULTADOS ===\n");
    printf("Tus numeros: %d, %d, %d\n",
           numeros_usuario[0], numeros_usuario[1], numeros_usuario[2]);

    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 3; j++)
        {
            if (numeros_usuario[i] == numeros_aleatorios[j])
            {
                aciertos++;
                printf("Acertaste el numero %d!\n", numeros_usuario[i]);
                break;
            }
        }
    }

    printf("=== PREMIO ===\n");
    switch (aciertos)

    {
        case 0:
            printf("Lo siento, no acertaste ningun numero :( \n");
            break;
        case 1:
            printf("Acertaste solo 1 numero. no hay premio.\n");
            break;
        case 2:
            printf("Acertaste 2 numeros. suerte para la proxima\n");
            break;
        case 3:
            printf("Acertaste los 3 numeros. recicibira su premio pronto! \n");
            break;
    }

    return 0;
}
