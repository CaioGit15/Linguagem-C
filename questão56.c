#include <stdio.h>
int main(void){
int num;
int num_secreto = 6;
    printf("Vamos adivinhar números!\n");
    printf("Vou pensar em um número entre 1 e 10, você terá de adivinhar qual é!\n");
    printf("Insira número: ");
    scanf("%d", &num);
if((num < 0) || (num > 10)){
    printf("Número inválido!");
} else if(num == num_secreto){
    printf("Acertou!");
} else if(num < num_secreto){
    printf("O número secreto é maior.");
} else {
    printf("O número secreto é menor.");
}
    return 0;
}
