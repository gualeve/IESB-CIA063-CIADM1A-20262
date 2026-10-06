#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define TAM 10
#define ALUNOS 10
#define PROVAS 3

// Faça um programa que leia um vetor de 10 posições. Verifique se existem
// valores iguais e os escreva na tela.
void q2_01_4() {
    int vetor[TAM] = {3, 4, 7, 2, 9, 4, 4, 8, 3, 10};
    int repetidos[TAM/2] = {-1, -1, -1, -1, -1};
    int ind = 0;
    int achou;
    for (int i=0; i<TAM-1; i++) {
        achou = 0;
        for (int j=i+1; j<TAM; j++)
            if (vetor[i] == vetor[j]) {
                for (int k=0; k<ind; k++)
                    if (vetor[i] == repetidos[k]) {
                        achou = 1;
                        break;
                    }
                if (! achou) {
                    repetidos[ind++] = vetor[i];
                    printf("%d\n", vetor[i]);
                }
                break;
            }
    }
    for (int i=0; i<TAM/2; i++)
        printf("%d ", repetidos[i]);
    printf("\n");

    return;
}

void inicializa(int notas[ALUNOS][PROVAS]) {
    srand(time(NULL));
    for (int i=0; i<ALUNOS; i++)
        for (int j=0; j<PROVAS; j++)
            notas[i][j] = rand() % 11;
}

void imprime(int notas[ALUNOS][PROVAS]) {
    for (int i=0; i<ALUNOS; i++) {
        for (int j=0; j<PROVAS; j++)
            printf("%2d ", notas[i][j]);
        printf("\n");
    }
}

void calcula(int notas[ALUNOS][PROVAS], int piores[PROVAS]) {
    for (int i=0; i<ALUNOS; i++)
        if (notas[i][0] <= notas[i][1] && notas[i][0] <= notas[i][2])
            piores[0]++;
        else
            if (notas[i][1] <= notas[i][2])
                piores[1]++;
            else
                piores[2]++;
}

// Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas.
// Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na
// prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja
// pior nota foi na prova 3
void q2_02_3() {
    int notas[ALUNOS][PROVAS];
    int piores[PROVAS] = {0, 0, 0};

    inicializa(notas);
    imprime(notas);
    calcula(notas, piores);
    printf("\n%2d %2d %2d\n", piores[0], piores[1], piores[2]);
    return;
}

int main() {
    // q2_01_4();
    q2_02_3();
    return 0;
}