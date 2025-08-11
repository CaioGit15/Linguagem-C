#include <stdio.h>
int main(){
    float num[4];
    int i = 0;
    float soma;
    while(i < 4){
    printf("Digite um número: ");
    scanf("%f", &num[i]);
    i++;
    }
    soma = num[0] + num[1] + num[2] + num[3];
    printf("A soma dos números é %.2f", soma);
    return 0;
}
