#include <stdio.h>
int main(void) {
    float n1, n2, resultado;
    char op;
    printf("Calculadora simples de 2 números.");
    printf("\nInsira o primeiro número: ");
    scanf("%f", &n1);
    printf("Insira o segundo número:");
    scanf("%f", &n2);
    printf("Qual operação deseja fazer com %f e %f?", n1, n2);
    printf("\nPara somar, digite(+)");
    printf("\nPara subtrair, digite(-)");
    printf("\nPara multiplcar, digite(*)");
    printf("\nPara dividir, digite(/)");
  printf("\n___________________________________________\n");
    scanf(" %c", &op);
    if(op == '+'){
        resultado = n1 + n2;
        printf("%1.1f + %1.1f = %1.1f.", n1, n2, resultado);
    } else if(op == '-'){
        resultado = n1 - n2;
        printf("%1.1f - %1.1f = %1.1f.", n1, n2, resultado);
    } else if(op == '*'){
        resultado = n1 * n2;
        printf("%1.1f * %1.1f = %1.1f.", n1, n2, resultado);
    } else if(op == '/'){
    resultado = n1 / n2;
    printf("%1.1f / %1.1f = %1.1f.", n1, n2, resultado);
    } else {
        printf("Opção inválida.");
    }
    
    
    return 0;
}
