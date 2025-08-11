#include <stdio.h>
int main(){
    int num[5];
    int i = 0;
    while(i < 5){
    printf("Digite um número: ");
    scanf("%d", &num[i]);
    i++;
    }
    printf("%d.\n", num[4]);
    printf("%d.\n", num[3]);
    printf("%d.\n", num[2]);
    printf("%d.\n", num[1]);
    printf("%d.\n", num[0]);
    return 0;
}
