#include <stdio.h>

int main()
{
    int voto, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, cand5 = 0, invalidos = 0, total_votos;
    float pct1, pct2, pct3, pct4, pct5, pct_inv;
    printf("Ingrese el voto inicial: ");
    scanf("%d", &voto);
    while (voto != 0)
    {
        switch (voto)
        {
            case 1: cand1++; break;
            case 2: cand2++; break;
            case 3: cand3++; break;
            case 4: cand4++; break;
            case 5: cand5++; break;
            default: invalidos++; break;
        }
        printf("Ingrese el siguiente voto (0 para terminar): ");
        scanf("%d", &voto);
    }
    total_votos = cand1 + cand2 + cand3 + cand4 + cand5 + invalidos;
    if (total_votos > 0) {
        pct1 = (float)cand1 / total_votos * 100;
        pct2 = (float)cand2 / total_votos * 100;
        pct3 = (float)cand3 / total_votos * 100;
        pct4 = (float)cand4 / total_votos * 100;
        pct5 = (float)cand5 / total_votos * 100;
        pct_inv = (float)invalidos / total_votos * 100;
        printf("\nTotal votos: %d\n", total_votos);
        printf("Opcion 1: %d votos -- %.2f%%\n", cand1, pct1);
        printf("Opcion 2: %d votos -- %.2f%%\n", cand2, pct2);
        printf("Opcion 3: %d votos -- %.2f%%\n", cand3, pct3);
        printf("Opcion 4: %d votos -- %.2f%%\n", cand4, pct4);
        printf("Opcion 5: %d votos -- %.2f%%\n", cand5, pct5);
        printf("Invalidos: %d votos -- %.2f%%\n", invalidos, pct_inv);
    } else {
        printf("No se registraron votos.\n");
    }
}
