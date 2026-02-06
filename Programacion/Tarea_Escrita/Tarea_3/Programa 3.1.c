#include <stdio.h>

int main(void)
{
    float salario, total = 0.0;
    int contador = 1;

    printf("Ingrese los salarios de 15 profesores:\n");

    while (contador <= 15)

    {
        printf("Salario del profesor %d: ", contador);
        scanf("%f", &salario);
        total += salario;
        contador++;
    }

    printf("La nomina total es: $%.2f\n", total);
    return 0;
}
