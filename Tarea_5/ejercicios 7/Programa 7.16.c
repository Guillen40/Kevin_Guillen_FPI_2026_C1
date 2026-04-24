#include <stdio.h>
#include <string.h>

int main(void)
{
    char cad1[50], cad2[50];
    char *pos;
    int cont = 0;

    printf("\nIngrese la primera cadena de caracteres: ");
    fgets(cad1, sizeof(cad1), stdin);
    cad1[strcspn(cad1, "\n")] = '\0';

    printf("Ingrese la cadena a buscar: ");
    fgets(cad2, sizeof(cad2), stdin);
    cad2[strcspn(cad2, "\n")] = '\0';

    pos = strstr(cad1, cad2);
    while (pos != NULL)
    {
        cont++;
        pos = strstr(pos + 1, cad2);
    }

    printf("\nLa segunda cadena aparece %d veces\n", cont);

    return 0;
}
