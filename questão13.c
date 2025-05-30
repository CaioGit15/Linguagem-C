#include <stdio.h>
int main(void) {
int nota1, nota2, peso1, peso2, ponderada;
printf("Vamos calcular médias ponderadas de duas notas!");
printf("\nInsira a primeira nota:");
scanf("%d", &nota1);
printf("Insira o peso da primeira nota:");
scanf("%d", &peso1);
printf("Insira a segunda nota:");
scanf("%d", &nota2);
printf("Insira o peso da segunda nota:");
scanf("%d", &peso2);

ponderada = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);

printf("A média ponderada é %d!", ponderada);
    return 0;
}
