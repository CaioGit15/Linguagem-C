#include <stdio.h>
int main(){
    int n1, n2, n3, n4;
    char op;
    printf("Insira o primero número:\n");
    scanf("%d", &n1);
    printf("Insira o segundo número:\n");
    scanf("%d", &n2);
    printf("Antes da inversão, os valores são:\n");
    printf("a = %d\n", n1);
    printf("b = %d\n", n2);
    printf("Após a inversão, os valores são:\n");
    printf("a = %d\n", n2);
    printf("b = %d\n", n1);
    return 0;
}
