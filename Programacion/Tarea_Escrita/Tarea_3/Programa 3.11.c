#include <stdio.h>

int main()
{
    int bajo = 0, medio_bajo = 0, medio = 0, alto = 0, excelente = 0;
    float nota;

    printf("Ingrese notas (rango 0-10, -1 para terminar):\n");
    printf("Nota: ");
    scanf("%f", &nota);

    while (nota != -1)
    {
        if (nota < 0 || nota > 10)
        {
            printf("Nota invalida (debe estar entre 0 y 10)\n");
        } else if (nota < 4)
        {
            bajo++;
        } else if (nota < 6)
        {
            medio_bajo++;
        } else if (nota < 8)
        {
            medio++;
        } else if (nota < 9)
        {
            alto++;
        } else
        {
            excelente++;
        }

        printf("Nota: ");
        scanf("%f", &nota);
    }

    printf("Distribucion de notas:\n");
    printf("0.00 - 3.99:  %d\n", bajo);
    printf("4.00 - 5.99:  %d\n", medio_bajo);
    printf("6.00 - 7.99:  %d\n", medio);
    printf("8.00 - 8.99:  %d\n", alto);
    printf("9.00 - 10.00: %d\n", excelente);
}
