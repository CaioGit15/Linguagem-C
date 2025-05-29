Questão 7

# Linguagem-C


#include <stdio.h>
int main(void) {
int n1, n2, n3;
printf("Vamos ver qual dos 3 números é o maior!");
printf("\nEscreva o primeiro número:");
scanf("%d", &n1);
printf("Escreva o segundo número:");
scanf("%d", &n2);
printf("Escreva o terceiro número:");
scanf("%d", &n3);
if((n1 > n2) && (n1 > n3)){
printf("%d é o maior!", n1);
}
if ((n2 > n1) && (n2 > n3)){
    printf("%d é o maior!", n2);
}
if ((n3 > n1) && (n3 > n2)){
    printf("%d é o maior!", n3);
}
    return 0;
}
