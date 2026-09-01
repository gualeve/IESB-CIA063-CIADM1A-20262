#include <stdio.h>

int q6() {
    // Faça um programa que mostre ao usuário um menu com quatro opções de
    // operações matemáticas (as operações básicas, por exemplo). O usuário escolhe
    // uma das opções, e o seu programa pede dois valores numéricos e realiza a
    // operação, mostrando o resultado.
    int x, y;
    float res;
    char operacao;
    
    getchar(); // limpa o buffer do teclado
    printf("Digite uma operação (+,-,*,/) ");
    operacao = getchar();
    // scanf("%c", &operacao);

    // not (x or y) = not x and not y --> DeMorgan
    if (((operacao != '+') && (operacao != '-') && (operacao != '*') && (operacao != '/')))
        printf("Operação inválida\n");
    else {
        printf("Digite dois números inteiros (x y): ");
        scanf("%d %d", &x, &y);

        switch (operacao) {
        case '+':
            res = x + y;
            break;
        case '-':
            res = x - y;
            break;
        case '*':
            res = x * y;
            break;
        case '/':
            res = (float)x / y;
        }
        printf("%d %c %d = %.2f\n", x, operacao, y, res);
    }
    return 1;
}

int q7() {
    // Faça um programa para verificar se determinado número inteiro lido é divisível
    // por 3 ou 5, mas não simultaneamente pelos dois.
    int num;

    printf("Digite um número inteiro (x): ");
    scanf("%d", &num);
    // x and not y or not x and y
    // x -> num % 3 == 0
    // y -> num % 5 == 0  
    if ((num % 3 == 0) && !(num % 5 == 0) || !(num % 3 == 0) && (num % 5 == 0))
        printf("%d é divisível exclusivamente por 3 ou por 5\n", num);
    else
        printf("%d não é divisível exclusivamente por 3 ou por 5\n", num);
    return 1;
}

int main() {
    int opcao;
    while (1) {
        printf("0 - Sair\n");
        printf("6 - Questão 6\n");
        printf("7 - Questão 7\n\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 6:
                q6();
                break;
            case 7:
                q7();
                break;
            case 0:
                break;
        }
        if (opcao == 0)
            break;
    }
    printf("FIM\n");
    return 0;
}
