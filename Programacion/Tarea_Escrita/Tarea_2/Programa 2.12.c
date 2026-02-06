#include <stdio.h>
#include <math.h>

int main()
{
    int ID, memoria, prioridad;
    float firma_digital, verificacion;

    printf("Monitor del Kernel del Sistema Operativo\n");
    printf("Ingrese ID del proceso, Memoria solicitada y Prioridad: ");
    scanf("%d %d %d", &ID, &memoria, &prioridad);

    if (memoria != 0)

        {
        firma_digital = pow((float)ID / memoria, prioridad);
        verificacion = pow(ID, prioridad);

        if (firma_digital == verificacion)
            {
            printf("\n[OK] Firma validada. El proceso %d tiene acceso a la CPU.\n", ID);
        }
        else {
            printf("\n[ERROR] Firma invalida. Proceso %d bloqueado por seguridad.\n", ID);
        }

    }
    else {
        printf("\n[CRITICAL] Error de segmentacion: La memoria solicitada es 0.\n");
    }
}

