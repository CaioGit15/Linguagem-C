#include <stdio.h>
int main() {
int limite, a = 0, b = 1, proximo;
printf("Fribonacci.\n");
printf("Digite o limite: ");
scanf("%d", &limite);
while (a <= limite) {
    printf("%d ", a);
    proximo = a + b;
    a = b;
    b = proximo;
    }
    return 0;
}
