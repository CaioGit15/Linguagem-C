#include <stdio.h>
//Precisei de ajuda nesse código!
int main(void) {
int ano;
printf("Vamos ver se o ano é bissexto!");
printf("\nInsira ano:");
scanf("%d", &ano);
if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
    printf("O ano %d é bissexto!", ano);
} else {
    printf("O ano %d não é bissexto!");
}
    return 0;
}
