#include <stdio.h>
int main() {
int tf, tc;
printf("Conversor de temperatura Fahrenheit para Celsius!");
printf("\n Insira a temperatura:");
scanf("%d", &tf);{
tc = (tf - 32) * 5 / 9;
printf("A temperatura %d em Fahrenheit é %d em Celsius!", tf,tc);
}
    return 0;
}
