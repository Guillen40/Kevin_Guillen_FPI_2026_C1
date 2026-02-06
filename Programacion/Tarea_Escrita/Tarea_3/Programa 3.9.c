#include <stdio.h>

int main ()
{
    int valor = 2, alternador = 1;
    long suma_serie = 0;
    while (valor <= 2500)
    {
        suma_serie += valor;
        printf("\t%d", valor);
        if (alternador)
        {
            valor += 5;
            alternador = 0;
        } else
        {
            valor += 3;
            alternador = 1;
        }
    }
    printf("La suma de la serie es: %ld\n", suma_serie);
}
