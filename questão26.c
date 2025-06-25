#include <stdio.h>
#include <math.h>
int main(){
    int n1, n2, soma, prod, quadra, raiz, seno, mod;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    soma = n1 + n2;
    printf("A soma dos números %d e %d é %d.\n", n1, n2, soma);
    
    prod = n1 * (n2 * n2);
    printf("O produto de %d por %d ^2 é %d.\n", n1, n2, prod);
    
    quadra = n1 * n1;
    printf("%d ^2 é %d.\n", n1, quadra);
    
    raiz = sqrt((n1 * n1) + (n2 * n2));
    printf("A raiz quadrada dos quadrados de %d e %d é %d.\n", n1, n2, raiz);
    
    seno = sin(n1 - n2);
    printf("O seno da diferença do %d pelo %d é %d.\n", n1, n2, seno);
    
    if(n1 > 0){
    mod = n1; 
    printf("O módulo de %d é %d.\n", n1, mod);
    } else {
        mod = n1 * -1;
        printf("O módulo de %d é %d.\n", n1, mod);
    }
    return 0;
}
