#include <stdio.h>
// Nesse código estudei comandos por fora!
int main() {
char nome[100], endereco[100], telefone[30];
int idade;
printf("Digite seu nome:");
fgets(nome, sizeof(nome), stdin);
printf("Digite seu endereço:");
fgets(endereco, sizeof(endereco), stdin);
printf("Digite seu telefone:");
fgets(telefone, sizeof(telefone), stdin);
printf("Digite sua idade:");
scanf("%d", &idade);
printf("O seu nome é %s, o seu endereço é %s, seu telefone é %s, e sua idade é %d", nome, endereco, telefone, idade);
    return 0;
   
}
