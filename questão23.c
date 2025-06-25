#include <stdio.h>
int main(){
    int num, dm, cm, mm;
    printf("Conversor de medidas.\n");
    printf("Insira a medida em metros: ");
    scanf("%d", &num);
    dm = num * 10;
    cm = num * 100;
    mm = num * 1000;
    
    printf("A medida de %dm é %d em decímetros.\n", num, dm);
    printf("A medida de %dm é %d em centímetros.\n", num, cm);
    printf("A medida de %dm é %d em milímetros.", num, mm);
    return 0;
}
