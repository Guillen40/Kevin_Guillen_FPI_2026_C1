#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char cad0[20], *cad1;
    int i;
    double d;
    long l;

    printf("\nIngrese una cadena de caracteres (para atoi): ");
    fgets(cad0, sizeof(cad0), stdin);
    cad0[strcspn(cad0, "\n")] = '\0';
    i = atoi(cad0);
    printf("atoi: %s -> %d (mas 3 = %d)\n", cad0, i, i + 3);

    printf("\nIngrese una cadena de caracteres (para atof): ");
    fgets(cad0, sizeof(cad0), stdin);
    cad0[strcspn(cad0, "\n")] = '\0';
    d = atof(cad0);
    printf("atof: %s -> %.2f (mas 1.5 = %.2f)\n", cad0, d, d + 1.5);

    printf("\nIngrese una cadena de caracteres (para strtod): ");
    fgets(cad0, sizeof(cad0), stdin);
    cad0[strcspn(cad0, "\n")] = '\0';
    d = strtod(cad0, &cad1);
    printf("strtod: %s -> %.2f, resto: \"%s\"\n", cad0, d, cad1);

    printf("\nIngrese una cadena de caracteres (para atol): ");
    fgets(cad0, sizeof(cad0), stdin);
    cad0[strcspn(cad0, "\n")] = '\0';
    l = atol(cad0);
    printf("atol: %s -> %ld (mas 10 = %ld)\n", cad0, l, l + 10);

    printf("\nIngrese una cadena de caracteres (para strtol): ");
    fgets(cad0, sizeof(cad0), stdin);
    cad0[strcspn(cad0, "\n")] = '\0';
    l = strtol(cad0, &cad1, 0);
    printf("strtol: %s -> %ld, resto: \"%s\"\n", cad0, l, cad1);

    return 0;
}
