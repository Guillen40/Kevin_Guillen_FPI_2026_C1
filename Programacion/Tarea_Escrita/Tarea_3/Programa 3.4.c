#include <stdio.h>

void main(void)
{
    float calificacion;
    int rango_0_3 = 0, rango_4_5 = 0, rango_6_7 = 0, rango_8_8 = 0, rango_9_10 = 0;

    printf("Ingrese la calificacion del alumno (-1 para terminar): ");
    scanf("%f", &calificacion);

    while (calificacion != -1)

    {

        if (calificacion < 4)
              {
                rango_0_3++;
              } else if (calificacion < 6)
        {
            rango_4_5++;
        } else if (calificacion < 8)
           {
              rango_6_7++;
           } else if (calificacion < 9)

    {
    rango_8_8++;
    } else

        {
            rango_9_10++;
        }

        printf("Ingrese la siguiente calificación (-1 para terminar): ");
        scanf("%f", &calificacion);
    }

    printf("Conteo por Rangos\n");
    printf("0   a 3.99: %d\n", rango_0_3);
    printf("4   a 5.99: %d\n", rango_4_5);
    printf("6   a 7.99: %d\n", rango_6_7);
    printf("8   a 8.99: %d\n", rango_8_8);
    printf("9   a 10  : %d\n", rango_9_10);
}
