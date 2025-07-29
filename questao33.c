#include <stdio.h>
#include <string.h>
int main(){
char palavra[100];
int qtd;
printf("Contador de letras\n");
printf("Digite a palavra: ");
scanf("%s", palavra);

qtd = strlen(palavra);

printf("A quantidade de letras em %s são %d.", palavra, qtd);
    return 0;
}
