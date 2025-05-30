#include <stdio.h>
int main(void) {
    int l1, l2, l3;
    printf("Vamos descobrir tipos de triângulos!");
    printf("\nInsira a medida do primeiro lado do triângulo:");
    scanf("%d", &l1);
    printf("\nInsira a medida do segundo lado do triângulo:");
    scanf("%d", &l2);
    printf("\nInsira a medida do terceiro lado do triângulo:");
    scanf("%d", &l3);
    
    if((l1 == l2) && (l2 == l3)){
        printf("O triângulo é EQUILÁTERO!");
    } else if ((l1 == l2) || (l1 == l3) || (l2 == l3)){
        printf("O triângulo é ISÓCELES!");
    } else {
        printf("O triângulo é ESCALENO!");
    }
    return 0;
}
