#include <stdio.h>

int main(void)

{
    int departamento, antiguedad;
    float salario, nuevo_salario;

    printf("Ingrese el departamento (1: Ventas, 2: Producción, 3: Administracion): ");
    scanf("%d", &departamento);
    printf("Ingrese la antiguedad en años: ");
    scanf("%d", &antiguedad);
    printf("Ingrese el salario actual: ");
    scanf("%f", &salario);

    switch (departamento)
    {
        case 1:
            if (antiguedad >= 10)
                nuevo_salario = salario * 1.20;
            else
                nuevo_salario = salario * 1.10;
            break;
        case 2:
            if (antiguedad >= 10)
                nuevo_salario = salario * 1.15;
            else
                nuevo_salario = salario * 1.08;
            break;
        case 3:
            nuevo_salario = salario * 1.05;
            break;
        default:
            nuevo_salario = -1;
            break;
    }

    if (nuevo_salario != -1)
        printf("\nNuevo salario: $%.2f\n", nuevo_salario);
    else
        printf("\nDepartamento incorrecto.\n");
}

