#include <stdio.h>
#include <math.h>

void main(void)
{
    float RES;
    int T, P, N;
    printf("Ingrese los valores de T, P y N:");
    scanf("%d %d %d", &T, &P, &N);
    if (P != 0)
    {
    RES = pow(T / P, N);
        if (RES == pow(T, N) / pow(P, N))
            printf("\nSe comprueba la igualdad");
        else
            printf("\nNo se comprueba la igualdad");
    }
    else
    printf("\nP tiene que ser diferente de cero");
}
