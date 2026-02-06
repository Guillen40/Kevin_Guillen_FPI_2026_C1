#include <stdio.h>

int main()
{
    int N, i;
    long long producto = 1;
    printf("Ingresa un numero entero positivo N: ");
    scanf("%d", &N);

    if (N < 1)
    {
        printf("N debe ser positivo.\n");
    } else
    {
        for (i = 1; i <= N; i++)
        {
            producto *= i;
        }
        printf("La factorial de 1 a %d es: %lld\n", N, producto);
    }
}
