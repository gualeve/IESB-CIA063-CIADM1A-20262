#include <stdio.h>

int q1() {
    /* Declare uma variável inteira x e atribua a ela um valor qualquer.
    ●​ Declare um ponteiro para inteiro p.
    ●​ Faça p apontar para x.
    ●​ Imprima:
    ○​ o valor de x;
    ○​ o endereço de x;
    ○​ o valor armazenado em p;
    ○​ o valor apontado por p.*/
    int x;
    int *p;

    p = &x;
    printf("Digite um número:\n");
    scanf("%d", p);

    printf("o valor de x é %d\n", x);
    printf("o endereço de x é %p\n", &x);
    printf("o valor de p é %p\n", p);
    printf("o valor apontado por p é %d\n", *p);

    return 1;
}

int q2() {
    /*Escreva um programa em C que:
    ●​ Leia três valores pelo teclado (x, y, z) e
    ●​ Imprima o resultado da operação (x + y * z + 1). O resultado não deve ser
    gravado na memória, mas apenas impresso na tela.*/
    int x, y, z;
    int *px = &x, *py = &y, *pz = &z;
    printf("Digite 3 números\n");
    scanf("%d %d %d", &x, &y, pz);
    // printf("x + y * z + 1 = %d\n", x + y * z + 1);
    printf("x + y * z + 1 = %d\n", *px + y * *pz + 1);

    return 1;

}

int main () {
    int questao;

    printf("[1] Questão 1\n");
    printf("[2] Questão 2\n");
    printf("Digite uma questão: ");
    scanf("%d", &questao);
    switch (questao) {
        case 1:
            q1();
            break;
        case 2:
            q2();
            break;
        default:
            printf("Valor inválido\n");
    }
    printf("\nFIM\n");


    return 0;
}

