#include <stdio.h>

int main()
{
    int limite, k, m, suma_div, conteo = 0;
    printf("Ingrese el límite superior: ");
    scanf("%d", &limite);
    for (k = 1; k <= limite; k++)
    {
        suma_div = 0;
        for (m = 1; m <= (k / 2); m++)
         {
            if (k % m == 0)
            {
                suma_div += m;
            }
         }
        if (suma_div == k)
        {
            printf("%d es perfecto\n", k);
            conteo++;
        }
    }
    printf("Hay %d numeros perfectos entre 1 y %d\n", conteo, limite);
}
