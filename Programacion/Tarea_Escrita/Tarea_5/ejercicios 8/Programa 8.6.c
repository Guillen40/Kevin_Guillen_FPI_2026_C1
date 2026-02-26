#include <stdio.h>
#include <string.h>

typedef struct
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;

void Lectura(producto A[], int T);
void Ventas(producto A[], int T);
void Reabastecimiento(producto A[], int T);
void Nuevos_Productos(producto A[], int *T);
void Inventario(producto A[], int T);

int main(void)

{
    producto INV[100];
    int TAM, OPE;

    do
    {
        printf("Ingrese el numero de productos: ");
        scanf("%d", &TAM);
        while (getchar() != '\n');
    } while (TAM > 100 || TAM < 1);

    Lectura(INV, TAM);

    do
{
        printf("\nIngrese operacion a realizar:");
        printf("\n\t1 – Ventas");
        printf("\n\t2 – Reabastecimiento");
        printf("\n\t3 - Nuevos Productos");
        printf("\n\t4 – Inventario");
        printf("\n\t0 - Salir: ");
        scanf("%d", &OPE);
        while (getchar() != '\n');

        switch (OPE)
    {
            case 1: Ventas(INV, TAM); break;
            case 2: Reabastecimiento(INV, TAM); break;
            case 3: Nuevos_Productos(INV, &TAM); break;
            case 4: Inventario(INV, TAM); break;
    }
} while (OPE != 0);

    return 0;
}

void Lectura(producto A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese informacion del producto %d", I + 1);
        printf("\n\tClave: ");
        scanf("%d", &A[I].clave);
        while (getchar() != '\n');

        printf("\tNombre: ");
        fgets(A[I].nombre, sizeof(A[I].nombre), stdin);
        A[I].nombre[strcspn(A[I].nombre, "\n")] = '\0';

        printf("\tPrecio: ");
        scanf("%f", &A[I].precio);
        while (getchar() != '\n');

        printf("\tExistencia: ");
        scanf("%d", &A[I].existencia);
        while (getchar() != '\n');
    }
}

void Ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT = 0.0, PAR;

    printf("\nIngrese clave del producto (0 para salir): ");
    scanf("%d", &CLA);
    while (getchar() != '\n');

    while (CLA)
{
        printf("\tCantidad: ");
        scanf("%d", &CAN);
        while (getchar() != '\n');

        I = 0;
        while (I < T && A[I].clave < CLA)
            I++;

        if (I == T || A[I].clave > CLA)
        {
            printf("\nLa clave del producto es incorrecta\n");
        } else if (A[I].existencia >= CAN)
{
            A[I].existencia -= CAN;
            PAR = A[I].precio * CAN;
            TOT += PAR;
            printf("Venta registrada. Total parcial: %.2f\n", PAR);
} else {
            printf("\nNo existe en inventario la cantidad solicitada. Solo hay %d",
                   A[I].existencia);
            printf("\nLos lleva? (1-Si / 0-No): ");
            scanf("%d", &RES);
            while (getchar() != '\n');

            if (RES)
            {
                PAR = A[I].precio * A[I].existencia;
                A[I].existencia = 0;
                TOT += PAR;
                printf("Venta parcial registrada: %.2f\n", PAR);
            }
        }

        printf("\nIngrese la siguiente clave del producto (0 para salir): ");
        scanf("%d", &CLA);
        while (getchar() != '\n');
}

    printf("\nTotal de la venta: %.2f\n", TOT);
}

void Reabastecimiento(producto A[], int T)
{
    int CLA, CAN, I;

    printf("\nIngrese clave del producto (0 para salir): ");
    scanf("%d", &CLA);
    while (getchar() != '\n');

    while (CLA) {
        I = 0;
        while (I < T && A[I].clave < CLA)
            I++;

        if (I == T || A[I].clave > CLA)
           {
            printf("\nLa clave del producto ingresada es incorrecta\n");
        } else
    {
            printf("\tCantidad a agregar: ");
            scanf("%d", &CAN);
            while (getchar() != '\n');
            A[I].existencia += CAN;
            printf("Stock actualizado. Nueva existencia: %d\n", A[I].existencia);
    }

        printf("\nIngrese otra clave del producto (0 para salir): ");
        scanf("%d", &CLA);
        while (getchar() != '\n');
    }
}

void Nuevos_Productos(producto A[], int *T) {
    int CLA, I, J;

    printf("\nIngrese clave del producto (0 para salir): ");
    scanf("%d", &CLA);
    while (getchar() != '\n');

    while (*T < 100 && CLA)
{
        I = 0;
        while (I < *T && A[I].clave < CLA)
            I++;

        if (I == *T)

    {
            A[I].clave = CLA;
            printf("\tNombre: ");
            fgets(A[I].nombre, sizeof(A[I].nombre), stdin);
            A[I].nombre[strcspn(A[I].nombre, "\n")] = '\0';

            printf("\tPrecio: ");
            scanf("%f", &A[I].precio);
            while (getchar() != '\n');

            printf("\tCantidad: ");
            scanf("%d", &A[I].existencia);
            while (getchar() != '\n');

            (*T)++;
        } else if (A[I].clave == CLA) {
            printf("\nEl producto ya se encuentra en el inventario\n");
        } else
    {
            for (J = *T; J > I; J--)
                A[J] = A[J - 1];

            A[I].clave = CLA;
            printf("\tNombre: ");
            fgets(A[I].nombre, sizeof(A[I].nombre), stdin);
            A[I].nombre[strcspn(A[I].nombre, "\n")] = '\0';

            printf("\tPrecio: ");
            scanf("%f", &A[I].precio);
            while (getchar() != '\n');

            printf("\tCantidad: ");
            scanf("%d", &A[I].existencia);
            while (getchar() != '\n');

            (*T)++;
    }

        printf("\nIngrese otra clave de producto (0 para salir): ");
        scanf("%d", &CLA);
        while (getchar() != '\n');
}

    if (*T == 100)
        printf("\nYa no hay espacio para incorporar nuevos productos\n");
}

void Inventario(producto A[], int T) {
    int I;
    printf("\nINVENTARIO COMPLETO\n");
    for (I = 0; I < T; I++) {
        printf("\nClave: %d", A[I].clave);
        printf("\tNombre: %s", A[I].nombre);
        printf("\tPrecio: %.2f", A[I].precio);
        printf("\tExistencia: %d", A[I].existencia);
    }
    printf("\n");
}
