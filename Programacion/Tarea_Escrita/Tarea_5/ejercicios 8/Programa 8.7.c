#include <stdio.h>
#include <string.h>

typedef struct
{
    char mat[20];
    int pro;
} matpro;

typedef struct
{
    int matri;
    char nom[20];
    matpro cal[5];
} alumno;

void Lectura(alumno A[], int T);
void F1(alumno A[], int T);
void F2(alumno A[], int T);
void F3(alumno A[], int T);

int main(void)
{
    alumno ALU[50];
    int TAM;

    do
    {
        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);
        while (getchar() != '\n');
    } while (TAM > 50 || TAM < 1);

    Lectura(ALU, TAM);
    F1(ALU, TAM);
    F2(ALU, TAM);
    F3(ALU, TAM);

    return 0;
}

void Lectura(alumno A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese los datos del alumno %d", I + 1);
        printf("\nIngrese la matricula del alumno: ");
        scanf("%d", &A[I].matri);
        while (getchar() != '\n');

        printf("Ingrese el nombre del alumno: ");
        fgets(A[I].nom, sizeof(A[I].nom), stdin);
        A[I].nom[strcspn(A[I].nom, "\n")] = '\0';

        for (J = 0; J < 5; J++)
        {
            printf("\tMateria %d: ", J + 1);
            fgets(A[I].cal[J].mat, sizeof(A[I].cal[J].mat), stdin);
            A[I].cal[J].mat[strcspn(A[I].cal[J].mat, "\n")] = '\0';

            printf("\tPromedio %d: ", J + 1);
            scanf("%d", &A[I].cal[J].pro);
            while (getchar() != '\n');
        }
    }
}

void F1(alumno A[], int T)
{
    int I, J;
    float suma, promedio;
    for (I = 0; I < T; I++)
    {
        printf("\nMatricula del alumno: %d", A[I].matri);
        suma = 0.0;
        for (J = 0; J < 5; J++)
            suma += A[I].cal[J].pro;
        promedio = suma / 5;
        printf("\tPromedio: %.2f\n", promedio);
    }
}

void F2(alumno A[], int T)
{
    int I;
    printf("\nAlumnos con calificacion mayor a 9 en la tercera materia\n");
    for (I = 0; I < T; I++)
        {
        if (A[I].cal[2].pro > 9)
            printf("Matricula del alumno: %d\n", A[I].matri);
    }
}

void F3(alumno A[], int T)
{
    int I;
    float suma = 0.0;
    for (I = 0; I < T; I++)
        suma += A[I].cal[3].pro;
    printf("\n\nPromedio de la cuarta materia: %.2f\n", suma / T);
}
