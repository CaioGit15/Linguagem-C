#include <stdio.h>
int main(void) {
int n1, n2, n3, maior, menor, medio;
printf("Ordenador de números.");
printf("\nInsira o primeiro número:");
scanf("%d", &n1);
printf("Insira o segundo número:");
scanf("%d", &n2);
printf("Insira o último número:");
scanf("%d", &n3);

if(n1 >= n2 && n1 >= n3){
    maior = n1;
} if(n2 >= n3){
    medio = n2;
    menor = n3;
} else{
    medio = n3;
    menor = n2;
} 
 if(n2 >= n1 && n2 >= n3){
    maior = n2;
} if(n1 >= n3){
    medio = n1;
    menor = n3;
} else {
    medio = n3;
    menor = n1;
} if(n3 >= n1 && n3 >= n2) {
    maior = n3;
} if(n1 > n2){
    medio = n1;
    menor = n2;
} else {
    medio = n2;
    menor = n1;
}

printf("A ordem dos números do menor para o maior é:");
printf("\n%d é o maior!", maior);
printf("\n%d é o médio!", medio);
printf("\n%d é o menor!", menor);
    return 0;
}
