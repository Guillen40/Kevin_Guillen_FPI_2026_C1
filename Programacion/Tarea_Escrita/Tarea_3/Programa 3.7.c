#include <stdio.h>

int main()
{
    int i, num_puntuaciones;
    float puntuacion, suma_puntuaciones = 0.0;
    do
    {
        printf("Ingrese el numero de puntuaciones (1-11): ");
        scanf("%d", &num_puntuaciones);
    } while (num_puntuaciones < 1 || num_puntuaciones > 11);
    for (i = 1; i <= num_puntuaciones; i++)
    {
        printf("Ingrese la puntuacion %d: ", i);
        scanf("%f", &puntuacion);
        suma_puntuaciones += puntuacion;
    }
    printf("Promedio de puntuaciones: %.2f\n", suma_puntuaciones / num_puntuaciones);
}
