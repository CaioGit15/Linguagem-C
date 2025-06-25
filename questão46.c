#include <stdio.h>
int main(void) {
int num = 1;     
int divi;         
int soma;        
printf("Números perfeitos entre 1 e 100:\n");
while (num <= 100) {
    divi = 1;
    soma = 0;
    while (divi <= num) {
        if (num % divi == 0) {
            soma += divi;
        }
        divi++;
        }
        if (soma == 2 * num) {
            printf("%d\n", num);
        }
        num++;
    }
    return 0;
}
