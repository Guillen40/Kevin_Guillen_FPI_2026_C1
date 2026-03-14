#include <stdio.h>
#include <string.h>

int cuentap(char *cad);

int main(void)
{
    char fra[50];

    printf("\nIngrese la linea de texto: ");
    fgets(fra, sizeof(fra), stdin);
    fra[strcspn(fra, "\n")] = '\0';

    strcat(fra, " ");

    printf("\nLa linea tiene %d palabras\n", cuentap(fra));

    return 0;
}

int cuentap(char *cad)
{
    int palabras = 0;
    char *pos = strstr(cad, " ");

    while (pos != NULL)
    {
        palabras++;
        pos = strstr(pos + 1, " ");
    }
    return palabras;
}
