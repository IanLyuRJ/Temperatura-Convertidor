#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "spanish");

    int opcion;

    while (1) {
        float temperatura_far, temperatura_celsi;

        printf("\x1B[31m*******************************************\x1B[0m\n");
        printf("\x1B[31m*         Convertidor de Temperaturas       *\x1B[0m\n");
        printf("\x1B[31m*******************************************\x1B[0m\n\n");

        printf("\x1B[36m1. Convertir de Fahrenheit a Celsius\x1B[0m\n");
        printf("\x1B[36m2. Convertir de Celsius a Fahrenheit\x1B[0m\n");
        printf("\x1B[36m0. Salir\x1B[0m\n\n");
        printf("\x1B[36mElija una opción (0, 1 o 2): \x1B[0m");
        scanf("%d", &opcion);

        if (opcion == 0) {
            break; 
        } else if (opcion == 1) {
            printf("\n\x1B[36mIngrese la temperatura en Fahrenheit: \x1B[0m");
            scanf("%f", &temperatura_far);
            temperatura_celsi = (temperatura_far - 32.0) * 5.0 / 9.0;
            printf("\n\x1B[32m%.2f grados Fahrenheit son %.2f grados Celsius.\x1B[0m\n", temperatura_far, temperatura_celsi);
        } else if (opcion == 2) {
            printf("\n\x1B[36mIngrese la temperatura en Celsius: \x1B[0m");
            scanf("%f", &temperatura_celsi);
            temperatura_far = (temperatura_celsi * 9.0 / 5.0) + 32.0;
            printf("\n\x1B[32m%.2f grados Celsius son %.2f grados Fahrenheit.\x1B[0m\n", temperatura_celsi, temperatura_far);
        } else {
            printf("\n\x1B[31mOpción no válida.\x1B[0m\n");
        }

    
        printf("\n\x1B[36mDesea volver al inicio (1) o salir (0): \x1B[0m");
        scanf("%d", &opcion);

        if (opcion != 1) {
            break; 
        }
    }

    printf("\n\x1B[31m************************************\x1B[0m\n");
    printf("\x1B[31m*  Gracias por usar el Convertidor  *\x1B[0m\n");
    printf("\x1B[31m************************************\x1B[0m\n\n");

    return 0;
}
