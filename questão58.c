#include <stdio.h>
int main() {
    int num, i, fat = 1;
    printf("Calculadora de fatoriais.\n");
    printf("Digite o número: ");
    scanf("%d", &num);
    while (num < 0) {
        printf("Número inválido!\n");
        printf("Digite o número: ");
        scanf("%d", &num);
    }
    i = 1;
    while (i <= num) {
        fat *= i;
        i++;
    }
    printf("O fatorial do número %d é %d", num, fat);
    return 0;
}
