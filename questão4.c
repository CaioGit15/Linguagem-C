#include <stdio.h>
int main(void) {
int n1, n2, n3, n4, n5, n6, total;

printf("Digite o primeiro número:");
scanf("%d", &n1);
printf("Digite o segundo número:");
scanf("%d", &n2);
printf("Digite o terceiro número:");
scanf("%d", &n3);
printf("Digite o quarto número:");
scanf("%d", &n4);
printf("Digite o quinto número:");
scanf("%d", &n5);
printf("Digite o sexto número:");
scanf("%d", &n6);

total = (n1 + n2 + n3 + n4 + n5 + n6) /6;
printf("A média dos 6 números é %d", total);
    return 0;
   
}
