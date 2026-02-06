#include <stdio.h>
#include <math.h>

int main()
{
    int divisor = 1, signo = 0, terminos = 1;
    double aproximacion = 4.0 / divisor;
    while (fabs(3.1415 - aproximacion) > 0.0005)
    {
        divisor += 2;
        if (signo)
        {
            aproximacion += 4.0 / divisor;
            signo = 0;
        } else
          {
            aproximacion -= 4.0 / divisor;
            signo = 1;
          }
        terminos++;
    }
    printf("Numero de terminos requeridos: %d\n", terminos);
    printf("Aproximacion a pi: %.6f\n", aproximacion);
}
