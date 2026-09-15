#include <stdio.h>

int fatorial(int n) {
    int res = 1;
    for (int i = 1; i<=n; i++)
        res *= i;

    return res;
}

int fat_rec(int n) {
    int res
    if (n == 1)
        res = 1;
    else
        res = n * fat_rec(n-1);
    return res;    
}

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);
    printf("A fatorial de %d é %d\n", num, fat_rec(num));


    return 0;
}