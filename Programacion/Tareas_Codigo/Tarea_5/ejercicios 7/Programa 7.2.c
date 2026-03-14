#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char p1;
    char buffer[10];
    printf("\nIngrese un caracter para analizar si es un digito: ");
    p1 = getchar();
    while (getchar() != '\n');

    if (isdigit(p1))
        printf("%c es un digito\n", p1);
    else
        printf("%c no es un digito\n", p1);

    printf("\nIngrese un caracter para examinar si es una letra: ");
    p1 = getchar();
    while (getchar() != '\n');

    if (isalpha(p1))
        printf("%c es una letra\n", p1);
    else
        printf("%c no es una letra\n", p1);

    printf("\nIngrese un caracter para examinar si es letra minuscula: ");
    p1 = getchar();
    while (getchar() != '\n');

    if (isalpha(p1))
    {
        if (islower(p1))
            printf("%c es una letra minuscula\n", p1);
        else
            printf("%c es una letra mayuscula\n", p1);
    }
    else
        printf("%c no es una letra\n", p1);

    printf("\nIngrese una letra mayuscula para convertirla a minuscula: ");
    p1 = getchar();
    while (getchar() != '\n');

    if (isalpha(p1))
    {
        if (isupper(p1))
            printf("%c convertida a minuscula: %c\n", p1, tolower(p1));
        else
            printf("%c ya es minuscula\n", p1);
    }
    else
        printf("%c no es una letra\n", p1);

    return 0;
}
