#include <stdio.h>

int q2() {
    /*
    Faça um algoritmo que leia um número positivo e imprima seus divisores.
    Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
    */
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    for (int i=1; i<=num/2; i++)
        if (num % i == 0)
            printf("[%d] ", i);
        else
            printf("%d ", i);
    printf("[%d]\n", num);
    // putchar('\n');

    return 1;
}

int q4() {
    /*
    Escreva um programa que leia certa quantidade de números, imprima o maior
    deles e quantas vezes o maior número foi lido. A quantidade de números a serem
    lidos deve ser fornecida pelo usuário.
    */
    int qtd_num;
    int numero, maior, qtd_maior;

    printf("Digite a quantidade de números: ");
    scanf("%d", &qtd_num);

    for (int i=0; i<qtd_num; i++) {
        printf(">> ");
        scanf("%d", &numero);
        if (numero > maior || i == 0) {
            maior = numero;
            qtd_maior = 0;
        }
        if (numero == maior)
            qtd_maior++;
    }
    printf("Maior número: %d - repete-se %d vezes\n", maior, qtd_maior);

    return 1;
}


int main() {
    int opcao;
    while (1) {
        printf("=================\n0 - Sair\n");
        printf("2 - Questão 2\n");
        printf("4 - Questão 4\n\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 2:
                q2();
                break;
            case 4:
                q4();
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
