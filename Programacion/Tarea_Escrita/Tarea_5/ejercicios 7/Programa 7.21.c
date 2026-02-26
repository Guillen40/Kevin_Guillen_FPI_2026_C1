#include <stdio.h>
#include <string.h>

void intercambia(char FRA[][30], int n);

int main(void)
{
    int i, n;
    char FRA[20][30];

    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    while (getchar() != '\n');

    for (i = 0; i < n; i++)
    {
        printf("Ingrese la linea de texto numero %d: ", i+1);
        fgets(FRA[i], 30, stdin);
        FRA[i][strcspn(FRA[i], "\n")] = '\0';
    }

    intercambia(FRA, n);

    printf("\nArreglo intercambiado\n");
    for (i = 0; i < n; i++)
        printf("Linea %d: %s\n", i+1, FRA[i]);

    return 0;
}

void intercambia(char FRA[][30], int n)
{
    int i, j = n - 1;
    char temp[30];

    for (i = 0; i < n/2; i++)
    {
        strcpy(temp, FRA[i]);
        strcpy(FRA[i], FRA[j]);
        strcpy(FRA[j], temp);
        j--;
    }
}
