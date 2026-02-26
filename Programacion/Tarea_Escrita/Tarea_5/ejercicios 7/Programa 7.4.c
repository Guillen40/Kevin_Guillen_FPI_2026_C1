#include <stdio.h>
#include <string.h>

int main(void)
{
    char *cad0;
    cad0 = "Argentina";
    puts(cad0);
    cad0 = "Brasil";
    puts(cad0);
    char *cad1;
    char cad1_arr[100];
    printf("Ingrese una cadena (fgets): ");
    fgets(cad1_arr, sizeof(cad1_arr), stdin);
    cad1_arr[strcspn(cad1_arr, "\n")] = '\0';
    puts(cad1_arr);

    char cad2[20] = "Mexico";
    puts(cad2);
    printf("Ingrese una nueva cadena para cad2: ");
    fgets(cad2, sizeof(cad2), stdin);
    cad2[strcspn(cad2, "\n")] = '\0';
    puts(cad2);

    return 0;
}
