#include <stdio.h>

int main(void)
{
    char *cad0 = "Buenos dias";
    char cad1[20] = "Hola";
    char cad2[] = "Mexico";
    char cad3[] = {'B','i','e','n','v','e','n','i','d','o','\0'};
    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena cad0 es: ");
    puts(cad0);

    printf("\nLa cadena cad1 es: ");
    printf("%s\n", cad1);

    printf("\nLa cadena cad2 es: ");
    puts(cad2);

    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una linea de texto (fgets): ");
    fgets(cad4, sizeof(cad4), stdin);
    int i = 0;
    while (cad4[i] != '\0' && cad4[i] != '\n')
        i++;
    if (cad4[i] == '\n')
        cad4[i] = '\0';
    printf("La cadena cad4 es: ");
    puts(cad4);

    printf("\nIngrese una palabra (scanf): ");
    scanf("%19s", cad5);
    printf("La cadena cad5 es: %s\n", cad5);
    while (getchar() != '\n');

    printf("\nIngrese una linea de texto (getchar): ");
    int j = 0;
    char p;
    while ((p = getchar()) != '\n' && j < 19)
        cad6[j++] = p;
    cad6[j] = '\0';
    printf("La cadena cad6 es: ");
    puts(cad6);

    return 0;
}
