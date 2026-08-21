/* 4 - Faça um programa que leia três caracteres do tipo char e depois os imprima um
 em cada linha. Use um único comando printf() para a impressão.*
 * */

#include <stdio.h>

int q4() {
    char a, b, c;

    puts("Digite um caracter: ");
    scanf("%c", &a);
    puts("Digite um caracter: ");
    getchar();
    scanf("%c", &b);
    puts("Digite um caracter: ");
    getchar();
    scanf("%c", &c);
    printf("a=%c b=%c c=%c\n", a, b, c);
    return 1;
}

int q6() {
    int x;
    int u, d, c, y;

    puts("Digite um número inteiro de 3 dígitos:");
    scanf("%d", &x);
    u = x / 100;
    c = x % 10;
    d = x % 100 - c;
    c *= 100;
    y = c + d + u;
    printf("O número %03d invertido é igual a %03d\n", x, y);

}

int main() {
    // q4();
    q6();


    return 0;
}

