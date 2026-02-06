#include <stdio.h>

int main()
{
    int j, id_estudiante, id_mejor, id_peor;
    float acumulado, avg, calif, avg_mejor = 0.0, avg_peor = 11.0;
    printf("Ingrese el ID del primer estudiante: ");
    scanf("%d", &id_estudiante);
    while (id_estudiante)
    {
        acumulado = 0;
        for (j = 1; j <= 5; j++)
        {
            printf("Ingrese la calificacion %d: ", j);
            scanf("%f", &calif);
            acumulado += calif;
        }
        avg = acumulado / 5;
        printf("\nID: %d\tPromedio: %.2f\n", id_estudiante, avg);
        if (avg > avg_mejor)
        {
            avg_mejor = avg;
            id_mejor = id_estudiante;
        }
        if (avg < avg_peor)
        {
            avg_peor = avg;
            id_peor = id_estudiante;
        }
        printf("Ingrese el ID del siguiente estudiante (0 para terminar): ");
        scanf("%d", &id_estudiante);
    }
    printf("Mejor promedio: ID %d - %.2f\n", id_mejor, avg_mejor);
    printf("Peor promedio: ID %d - %.2f\n", id_peor, avg_peor);
}
