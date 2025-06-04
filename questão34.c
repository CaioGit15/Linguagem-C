#include <stdio.h>

int main() {
    char nome[100], endereco[100], telefone[30];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu endereço: ");
    scanf("%s", endereco);

    printf("Digite seu telefone: ");
    scanf("%s", telefone);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("O seu nome é %s, o seu endereço é %s, seu telefone é %s, e sua idade é %d\n",
           nome, endereco, telefone, idade);

    return 0;
}
