#include <stdio.h>

void main(void)
{
    float SAL;
    int NIV;
    printf("Ingrese el nivel academico del profesor:");
    scanf("%d", &NIV);
    printf("Ingrese el salario:");
    scanf("%f", &SAL);
    switch(NIV)
    {
        case 1: SAL = SAL * 1.035; break;
        case 2: SAL = SAL * 1.041; break;
        case 3: SAL = SAL * 1.048; break;
        case 4: SAL = SAL * 1.053; break;
    }
    printf("\nNuevo salario: %8.2f", SAL);
}
