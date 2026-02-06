#include <stdio.h>

int main()
{
    int contador, anterior = 0, actual = 1, siguiente;
    printf("%d %d ", anterior, actual);
    for (contador = 3; contador <= 50; contador++)
    {
        siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
        printf("%d ", siguiente);
    }
    printf("\n");
}
