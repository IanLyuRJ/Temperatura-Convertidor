#include <stdio.h>
#include <wchar.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "spanish");
	
	float temperatura_far, temperatura_celsi; 
	
    printf("\x1B[31mConvertidor de temperaturas\x1B[0m\n");
	
 
    printf("Ingrese la temperatura en Fahrenheit: ");
    scanf("%f", &temperatura_far);
    
 printf("%.2f grados Fahrenheit son %.2f grados Celsius.\n", temperatura_far, temperatura_celsi);
    
     printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &temperatura_celsi);
    
    
    temperatura_celsi = (temperatura_far - 32) * 5 / 9;

    
   

    return 0;
	

	}
