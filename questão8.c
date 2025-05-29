#include <math.h>
#include <stdio.h>
int main() {
int num, raiz;
printf("Vamos achar raiz quadrada!");
printf("\nInsira número:");
scanf("%d", &num);
if (num < 0){
    printf("Não é possível achar a raiz de um número negativo.");
} else{
raiz = sqrt(num); 
printf("A raiz de %d é %d!", num, raiz);
}
    return 0;
}
