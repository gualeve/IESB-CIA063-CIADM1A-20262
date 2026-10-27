#include<stdio.h>

enum moedas {USD, EUR, BRL};
typedef struct {
    enum moedas moeda;
    float valor;
} cotacao_type;

float converte(cotacao_type moedas[], float valor, enum moedas moeda) {
    return valor / moedas[moeda].valor;
}

int main() {
    float valor;
    cotacao_type moedas[2] = {
        {
            USD, 5.02
        },
        {
            EUR, 5.64
        },
    };

    printf("Valor em R$: ");
    scanf("%f", &valor);
    printf("R$%.2f equivale a EUR%.2f\n", valor, converte(moedas, valor, EUR));

    return 0;
}