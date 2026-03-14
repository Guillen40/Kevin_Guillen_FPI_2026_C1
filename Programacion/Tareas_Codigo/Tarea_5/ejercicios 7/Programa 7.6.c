#include <stdio.h>
#include <string.h>

int main(void)
{
    char *cad0 = "Hola Mexico";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";

    strcpy(cad1, cad0);
    printf("\nPrueba de strcpy: cad1 = %s\n", cad1);

    strcpy(cad1, cad3);
    printf("Prueba de strcpy: cad1 = %s\n", cad1);

    strcpy(cad1, "XX");
    printf("Prueba de strcpy: cad1 = %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    printf("Prueba de strncpy: cad2 (primeros 4 de cad0) = %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("Prueba de strncpy: cad2 (primeros 3 de cad3) = %s\n", cad2);

    strcat(cad0, cad3);
    char cad0_mod[100] = "Hola Mexico";
    strcat(cad0_mod, cad3);
    printf("Prueba de strcat: cad0_mod + cad3 = %s\n", cad0_mod);

    strcat(cad1, " YY");
    printf("Prueba de strcat: cad1 + \" YY\" = %s\n", cad1);

    strcpy(cad2, "Hola ");
    strncat(cad2, cad0_mod, 4);
    printf("Prueba de strncat: cad2 + 4 caracteres de cad0_mod = %s\n", cad2);

    char *resultado = strstr(cad0_mod, "Mexico");
    if (resultado != NULL)
        printf("strstr: \"Mexico\" encontrado en cad0_mod: %s\n", resultado);
    else
        printf("strstr: \"Mexico\" no encontrado\n");

    resultado = strstr(cad0_mod, "Guatemala");
    if (resultado != NULL)
        printf("strstr: \"Guatemala\" encontrado en cad0_mod: %s\n", resultado);
    else
        printf("strstr: \"Guatemala\" no encontrado\n");

    return 0;
}
