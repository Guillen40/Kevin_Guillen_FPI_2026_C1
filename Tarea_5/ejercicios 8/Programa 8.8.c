#include <stdio.h>
#include <string.h>

typedef struct
{
    char cal[20];
    int num;
    char col[20];
    char cp[6];
    char ciu[20];
} domicilio;

typedef struct
{
    char nom[20];
    int edad;
    char sexo;
    int con;
    domicilio dom;
    char tel[12];
} paciente;

void Lectura(paciente A[], int T);
void F1(paciente A[], int T);
void F2(paciente A[], int T);
void F3(paciente A[], int T);

int main(void)
{
    paciente HOSPITAL[100];
    int TAM;

    do
    {
        printf("Ingrese el numero de pacientes: ");
        scanf("%d", &TAM);
        while (getchar() != '\n');
    } while (TAM > 100 || TAM < 1);

    Lectura(HOSPITAL, TAM);
    F1(HOSPITAL, TAM);
    F2(HOSPITAL, TAM);
    F3(HOSPITAL, TAM);

    return 0;
}

void Lectura(paciente A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\n\t\tPaciente %d", I + 1);
        printf("\nNombre: ");
        fgets(A[I].nom, sizeof(A[I].nom), stdin);
        A[I].nom[strcspn(A[I].nom, "\n")] = '\0';

        printf("Edad: ");
        scanf("%d", &A[I].edad);
        while (getchar() != '\n');

        printf("Sexo (F-M): ");
        scanf("%c", &A[I].sexo);
        while (getchar() != '\n');

        printf("Condición (1..5): ");
        scanf("%d", &A[I].con);
        while (getchar() != '\n');

        printf("\tCalle: ");
        fgets(A[I].dom.cal, sizeof(A[I].dom.cal), stdin);
        A[I].dom.cal[strcspn(A[I].dom.cal, "\n")] = '\0';

        printf("\tNumero: ");
        scanf("%d", &A[I].dom.num);
        while (getchar() != '\n');

        printf("\tColonia: ");
        fgets(A[I].dom.col, sizeof(A[I].dom.col), stdin);
        A[I].dom.col[strcspn(A[I].dom.col, "\n")] = '\0';

        printf("\tCodigo Postal: ");
        fgets(A[I].dom.cp, sizeof(A[I].dom.cp), stdin);
        A[I].dom.cp[strcspn(A[I].dom.cp, "\n")] = '\0';

        printf("\tCiudad: ");
        fgets(A[I].dom.ciu, sizeof(A[I].dom.ciu), stdin);
        A[I].dom.ciu[strcspn(A[I].dom.ciu, "\n")] = '\0';

        printf("Telefono: ");
        fgets(A[I].tel, sizeof(A[I].tel), stdin);
        A[I].tel[strcspn(A[I].tel, "\n")] = '\0';
    }
}

void F1(paciente A[], int T)
{
    int I, fem = 0, mas = 0;
    for (I = 0; I < T; I++)
    {
        if (A[I].sexo == 'F' || A[I].sexo == 'f')
            fem++;
        else if (A[I].sexo == 'M' || A[I].sexo == 'm')
            mas++;
    }
    int total = fem + mas;
    if (total > 0)
    {
        printf("\nPorcentaje de Hombres: %.2f%%", (float)mas / total * 100);
        printf("\nPorcentaje de Mujeres: %.2f%%\n", (float)fem / total * 100);
    } else
  {
        printf("\nNo hay pacientes registrados\n");
  }
}

void F2(paciente A[], int T)
{
    int I, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    for (I = 0; I < T; I++)

    {
        switch (A[I].con)
        {
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            case 4: c4++; break;
            case 5: c5++; break;
        }
    }
    printf("\nNumero pacientes en condicion 1: %d", c1);
    printf("\nNumero pacientes en condicion 2: %d", c2);
    printf("\nNumero pacientes en condicion 3: %d", c3);
    printf("\nNumero pacientes en condicion 4: %d", c4);
    printf("\nNumero pacientes en condicion 5: %d\n", c5);
}

void F3(paciente A[], int T)
{
    int I;
    printf("\nPacientes ingresados en estado de gravedad (condicion 5):\n");
    for (I = 0; I < T; I++)
        {
        if (A[I].con == 5)
            printf("Nombre: %s\tTelefono: %s\n", A[I].nom, A[I].tel);
    }
}
