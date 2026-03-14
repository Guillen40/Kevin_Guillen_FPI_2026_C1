#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char noba[10];
    char nucu[10];
} banco;

typedef union
{
    banco che;
    banco nomi;
    char venta;
} fpago;

typedef struct
{
    char cnu[20];
    char col[20];
    char cp[6];
    char ciu[15];
} domicilio;

typedef struct
{
    int num;
    char nom[20];
    float ven[12];
    domicilio domi;
    float sal;
    fpago pago;
    int cla;
} vendedor;

void Lectura(vendedor A[], int T);
void F1(vendedor A[], int T);
void F2(vendedor A[], int T);
void F3(vendedor A[], int T);
void F4(vendedor A[], int T);

int main(void) {
    vendedor VENDEDORES[100];
    int TAM;

    do
    {
        printf("Ingrese el numero de vendedores: ");
        scanf("%d", &TAM);
        while (getchar() != '\n');
    } while (TAM > 100 || TAM < 1);

    Lectura(VENDEDORES, TAM);
    F1(VENDEDORES, TAM);
    F2(VENDEDORES, TAM);
    F3(VENDEDORES, TAM);
    F4(VENDEDORES, TAM);

    printf("\n\tFIN DEL PROGRAMA\n");
    return 0;
}

void Lectura(vendedor A[], int T) {
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("\n\tIngrese datos del vendedor %d", I + 1);
        printf("\nNumero de vendedor: ");
        scanf("%d", &A[I].num);
        while (getchar() != '\n');

        printf("Nombre del vendedor: ");
        fgets(A[I].nom, sizeof(A[I].nom), stdin);
        A[I].nom[strcspn(A[I].nom, "\n")] = '\0';

        printf("Ventas del ano: \n");
        for (J = 0; J < 12; J++)
        {
            printf("\tMes %d: ", J + 1);
            scanf("%f", &A[I].ven[J]);
            while (getchar() != '\n');
        }

        printf("Domicilio del vendedor: \n");
        printf("\tCalle y numero: ");
        fgets(A[I].domi.cnu, sizeof(A[I].domi.cnu), stdin);
        A[I].domi.cnu[strcspn(A[I].domi.cnu, "\n")] = '\0';

        printf("\tColonia: ");
        fgets(A[I].domi.col, sizeof(A[I].domi.col), stdin);
        A[I].domi.col[strcspn(A[I].domi.col, "\n")] = '\0';

        printf("\tCodigo Postal: ");
        fgets(A[I].domi.cp, sizeof(A[I].domi.cp), stdin);
        A[I].domi.cp[strcspn(A[I].domi.cp, "\n")] = '\0';

        printf("\tCiudad: ");
        fgets(A[I].domi.ciu, sizeof(A[I].domi.ciu), stdin);
        A[I].domi.ciu[strcspn(A[I].domi.ciu, "\n")] = '\0';

        printf("Salario del vendedor: ");
        scanf("%f", &A[I].sal);
        while (getchar() != '\n');

        printf("Forma de Pago (Banco-1 / Nomina-2 / Ventanilla-3): ");
        scanf("%d", &A[I].cla);
        while (getchar() != '\n');

        switch (A[I].cla)
        {
            case 1:
                printf("\tNombre del banco: ");
                fgets(A[I].pago.che.noba, sizeof(A[I].pago.che.noba), stdin);
                A[I].pago.che.noba[strcspn(A[I].pago.che.noba, "\n")] = '\0';

                printf("\tNumero de cuenta: ");
                fgets(A[I].pago.che.nucu, sizeof(A[I].pago.che.nucu), stdin);
                A[I].pago.che.nucu[strcspn(A[I].pago.che.nucu, "\n")] = '\0';
                break;

            case 2:
                printf("\tNombre del banco: ");
                fgets(A[I].pago.nomi.noba, sizeof(A[I].pago.nomi.noba), stdin);
                A[I].pago.nomi.noba[strcspn(A[I].pago.nomi.noba, "\n")] = '\0';

                printf("\tNumero de cuenta: ");
                fgets(A[I].pago.nomi.nucu, sizeof(A[I].pago.nomi.nucu), stdin);
                A[I].pago.nomi.nucu[strcspn(A[I].pago.nomi.nucu, "\n")] = '\0';
                break;

            case 3:
                A[I].pago.venta = 'S';
                break;
        }
    }
}

void F1(vendedor A[], int T)
{
    int I, J;
    float suma;
    printf("\n\t\tVentas Totales de los Vendedores\n");
    for (I = 0; I < T; I++)
    {
        printf("\nVendedor: %d", A[I].num);
        suma = 0.0;
        for (J = 0; J < 12; J++)
            suma += A[I].ven[J];
        printf("\nVentas totales: %.2f\n", suma);
    }
}

void F2(vendedor A[], int T)
{
    int I, J;
    float suma;
    printf("\n\t\tIncremento a Vendedores con Ventas > 1,500,000\n");
    for (I = 0; I < T; I++)
    {
        suma = 0.0;
        for (J = 0; J < 12; J++)
            suma += A[I].ven[J];
        if (suma > 1500000.00)
        {
            A[I].sal *= 1.05;
            printf("\nNumero de empleado: %d", A[I].num);
            printf("\nVentas: %.2f", suma);
            printf("\nNuevo salario: %.2f\n", A[I].sal);
        }
    }
}

void F3(vendedor A[], int T)
{
    int I, J;
    float suma;
    printf("\n\t\tVendedores con Ventas < 300,000\n");
    for (I = 0; I < T; I++)
    {
        suma = 0.0;
        for (J = 0; J < 12; J++)
            suma += A[I].ven[J];
        if (suma < 300000.00)
        {
            printf("\nNumero de empleado: %d", A[I].num);
            printf("\nNombre: %s", A[I].nom);
            printf("\nVentas: %.2f\n", suma);
        }
    }
}

void F4(vendedor A[], int T)
{
    int I;
    printf("\n\t\tVendedores con Cuenta en el Banco (cheques)\n");
    for (I = 0; I < T; I++)
    {
        if (A[I].cla == 1)
        {
            printf("\nNumero de vendedor: %d", A[I].num);
            printf("\nBanco: %s", A[I].pago.che.noba);
            printf("\nCuenta: %s\n", A[I].pago.che.nucu);
        }
    }
}
