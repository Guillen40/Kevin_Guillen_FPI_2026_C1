#include <stdio.h>
#include <string.h>

int longitud(char *cad);

int main(void)
{
    int i, n, max_long = -1, pos_max;
    char FRA[20][50];

    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    while (getchar() != '\n');

    for (i = 0; i < n; i++)
    {
        printf("Ingrese la linea %d de texto (max 50 caracteres): ", i+1);
        fgets(FRA[i], 50, stdin);
        FRA[i][strcspn(FRA[i], "\n")] = '\0';
    }

    for (i = 0; i < n; i++)
    {
        if (longitud(FRA[i]) > max_long)
        {
            max_long = longitud(FRA[i]);
            pos_max = i;
        }
    }

    printf("\nLa cadena con mayor longitud es: %s", FRA[pos_max]);
    printf("\nLongitud: %d\n", max_long);

    return 0;
}

int longitud(char *cad)
{
    int c = 0;
    while (cad[c] != '\0')
        c++;
    return c;
}
