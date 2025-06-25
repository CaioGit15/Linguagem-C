#include <stdio.h>
int main(void){
    int num;
    printf("Insira um número positivo:");
    scanf("%d", &num);
    while(num < 0){
    printf("Número inválido!\n");
    printf("Insira um número positivo: ");
    scanf("%d", &num);
}
printf("Contágem regressiva:\n");
while(num > 0){
    printf("%d\n", num);
    num--;
}

    return 0;
}
