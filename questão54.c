#include <stdio.h>
int main(void){
    float nota = 0, soma = 0, media;
    int qtd = 0;
    printf("Calculadora de média aritiméticas de notas.\n");
   printf("Insira nota:\n");
   scanf("%f", &nota);
    while(nota >= 0){
    soma += nota;
    qtd++;
    printf("Nota computada.\n");
    printf("Insira nota:\n");
    scanf("%f", &nota);
    } 
    if(qtd > 0){
        media = soma / qtd;
        printf("A média das notas é %1.2f", media);
    } else {
        printf("Nenhuma nota válida foi inserida.");
    }
    return 0;
}
