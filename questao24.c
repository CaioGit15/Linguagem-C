#include <stdio.h>
int main(){
    int num, x2, x3, x4, x5, x6, x7, x8, x9, x10;
    printf("Tabuada\n");
    printf("Digite o número: ");
    scanf("%d", &num);
    
x2 = num * 2;
x3 = num * 3;
x4 = num * 4;
x5 = num * 5;
x6 = num * 6;
x7 = num * 7;
x8 = num * 8;
x9 = num * 9;
x10 = num * 10;
            
    printf("A tabuada ficou assim:\n");
    printf("1 X %d = %d\n", num, num);
    printf("2 X %d = %d\n", num, x2);
    printf("3 X %d = %d\n", num, x3);
    printf("4 X %d = %d\n", num, x4);
    printf("5 X %d = %d\n", num, x5);
    printf("6 X %d = %d\n", num, x6);
    printf("7 X %d = %d\n", num, x7);
    printf("8 X %d = %d\n", num, x8);
    printf("9 X %d = %d\n", num, x9);
    printf("10 X %d = %d\n", num, x10);

    return 0;
}
