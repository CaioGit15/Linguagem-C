#include <stdio.h>
int main(void) {
int num;
printf("Vamos ver se o número é PAR ou ÍMPAR!");
printf("\nInsira o número:");
scanf("%d", &num);
if (num % 2 == 0){
    printf("O número é PAR!");
} else {
    printf("O número é ÍMPAR!");
}
    return 0;
   
}
