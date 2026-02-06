#include <stdio.h>

int main() {
    int pasajeros_nuevos;
    int grupos_contados = 0;
    int capacidad_maxima = 2500;
    int total_general = 0;

    printf("SISTEMA DE CONTROL DE PASAJEROS\n");
    printf("Limite de red/transporte: %d\n\n", capacidad_maxima);

    while (total_general < capacidad_maxima)

    {
        printf("Ingrese cantidad de personas del grupo %d: ", grupos_contados + 1);
        scanf("%d", &pasajeros_nuevos);

        if ((total_general + pasajeros_nuevos) <= capacidad_maxima)
        {
            total_general += pasajeros_nuevos;
            grupos_contados++;
            printf(">> Registrados Total en sistema: %d\n", total_general);
        } else
        {
            printf(">> Alerta: Supera el limite. Cupos disponibles: %d\n",
                    (capacidad_maxima - total_general));
            if (pasajeros_nuevos == 0) break;
        }
    }

    printf("REGISTRO FINALIZADO\n");
    printf("Total de personas: %d\n", total_general);
    printf("Total de grupos procesados: %d\n", grupos_contados);
}
