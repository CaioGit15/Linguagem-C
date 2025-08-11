#include <stdio.h>
int main(){
    int num[6] = {33, 70, 80, 55, 46, 12};
    int i = 0;
    int maior = num[0];
    int menor = num[0];
    while(i < 6){
        if(num[i] > maior){
            maior = num[i];
        }
        if(num[i] < menor){
            menor = num[i];
        }
        i++;
    }
    printf("O maior número é %d.", maior);
    printf("\nO menor número é %d.", menor);
    return 0;
}
