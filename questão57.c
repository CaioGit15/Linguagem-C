#include <stdio.h>
int main(){
    int senha = 123456;
    int tentativa;
    printf("Senha: ");
    scanf("%d", &tentativa);
    while((tentativa < senha) || (tentativa > senha)){
        printf("Tente novamente.\n");
        printf("Senha: ");
        scanf("%d", &tentativa);
    }
    printf("Acertou!");
    return 0;
}
