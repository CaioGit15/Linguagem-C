#include <stdio.h>
int main(void) {
    float n1, n2, resultado;
printf("Calculadora de áreas.");
printf("\nInsira a lateral do terreno:");
scanf("%f", &n1);
printf("Insira a base do terreno:");    
scanf("%f", &n2);
resultado = n1 * n2;
printf("\nA área do terreno é: %1.1f", resultado);    
    return 0;
}
