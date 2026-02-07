#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SALIR 0
#define NUEVO 100
#define SUMAR 1
#define DIVIDIR 2
#define MULTIPLICAR 3
#define RESTAR 4
#define RAIZ 5
#define ERR_DivByZero 100
#define ERR_RaizNegativa 101  // Nuevo código de error
#define ERR_OK 0

int sumar (float num1, float num2,float *resultado);
int dividir(float numerador,float denominador,float *resultado);
int multiplicar(float num1, float num2, float *resultado);
int restar(float num1, float num2, float *resultado);
int raiz_cuadrada(float numero, float *resultado);

int main()
{
    int menu = NUEVO;
    int cod_err = ERR_OK;
    float num1 = 0.0;
    float num2 = 0.0;
    float result = 0.0;

    do {
        printf("\n0-Salir\n1-Sumar\n2-Dividir\n3-Multiplicar\n4-Restar\n5-Raiz cuadrada\n");
        scanf("%i",&menu);

        if (menu == SUMAR)
        {
            printf("\nEscriba el primer numero a sumar:");
            scanf("%f",&num1);
            printf("\nEscriba el segundo numero a sumar:");
            scanf("%f",&num2);
            cod_err = sumar(num1, num2, &result);
            if(cod_err != ERR_OK)
            {
                printf("\nError en suma");
            }
            else
            {
                printf("\nSuma de %f + %f es: %f\n", num1, num2, result);
            }
        }

        if (menu == DIVIDIR)
        {
            printf("\nEscriba el numerador:");
            scanf("%f",&num1);
            printf("\nEscriba el denominador:");
            scanf("%f",&num2);
            cod_err = dividir(num1, num2, &result);
            if(cod_err != ERR_OK)
            {
                if(cod_err == ERR_DivByZero)
                {
                    printf("\n===Error en division por cero===\n");
                }
            }
            else
            {
                printf("\nLa Division de %f / %f es: %f\n", num1, num2, result);
            }
        }

        if (menu == MULTIPLICAR)
        {
            printf("\nEscriba el primer numero a multiplicar:");
            scanf("%f",&num1);
            printf("\nEscriba el segundo numero a multiplicar:");
            scanf("%f",&num2);
            cod_err = multiplicar(num1, num2, &result);
            if(cod_err != ERR_OK)
            {
                printf("\nError en multiplicacion");
            }
            else
            {
                printf("\nMultiplicacion de %f * %f es: %f\n", num1, num2, result);
            }
        }

        if (menu == RESTAR)
        {
            printf("\nEscriba el minuendo (numero al que restar):");
            scanf("%f",&num1);
            printf("\nEscriba el sustraendo (numero a restar):");
            scanf("%f",&num2);
            cod_err = restar(num1, num2, &result);
            if(cod_err != ERR_OK)
            {
                printf("\nError en resta");
            }
            else
            {
                printf("\nResta de %f - %f es: %f\n", num1, num2, result);
            }
        }

        if (menu == RAIZ)
        {
            printf("\nEscriba el numero para calcular la raiz cuadrada:");
            scanf("%f",&num1);
            cod_err = raiz_cuadrada(num1, &result);
            if(cod_err != ERR_OK)
            {
                if(cod_err == ERR_RaizNegativa)
                {
                    printf("\n===Error: No se puede calcular raiz de numero negativo===\n");
                }
                else
                {
                    printf("\nError en calculo de raiz cuadrada");
                }
            }
            else
            {
                printf("\nRaiz cuadrada de %f es: %f\n", num1, result);
            }
        }
    }
    while(menu != SALIR);

    return 0;
}

int sumar (float n1, float n2, float *resultado)
{
    *resultado = n1 + n2;
    return ERR_OK;
}

int dividir(float numerador, float denominador, float *resultado)
{
    if(denominador == 0)
    {
        return ERR_DivByZero;
    }
    else
    {
        *resultado = numerador / denominador;
        return ERR_OK;
    }
}

int multiplicar(float num1, float num2, float *resultado)
{
    *resultado = num1 * num2;
    return ERR_OK;
}

int restar(float num1, float num2, float *resultado)
{
    *resultado = num1 - num2;
    return ERR_OK;
}

int raiz_cuadrada(float numero, float *resultado)
{
    if(numero < 0)
    {
        return ERR_RaizNegativa;
    }
    else
    {
        *resultado = sqrt(numero);
        return ERR_OK;
    }
}
