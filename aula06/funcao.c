#include <stdio.h>


int quadrado(int);
float pot(float, int);

int inc(int *i) {
    (*i)++;
    i++;
    return 1;
}

void troca(int *x, int *y, float base) {
    int temp = *x;
    *x = *y;
    *y = temp;

    return;
}

int main() {
    int num, exp;
    float base;
    int x = 5;
    int y = 2;
    printf("x=%d, y=%d\n", x, y);
    troca(&x, &y, base);
    printf("x=%d, y=%d\n", x, y);

    // printf("x+1 = %d\n", inc(&x));
    // printf("x = %d\n", x);


    // scanf("%d", num);
    // scanf("%f", &base);
    // scanf("%d", &exp);

    // printf("O quadrado de %d é %d\n", num, quadrado(num));
    // printf("%.2f elevado a %d é igual a %.2f\n", base, exp, pot(base, exp));

    return 0;
}

float pot(float b, int e) {
    float res = b;
    for (int i=1; i<e; i++)
        res *= b;
    return res;
}

int quadrado(int x) {
    return x * x;
}