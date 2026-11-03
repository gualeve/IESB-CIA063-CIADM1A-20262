#include<stdio.h>
#include<stdlib.h>

int *gerar_vetor(int n) {
    int *vetor;
    // int **matriz_2d;
    // int ***matriz_3d;

    vetor = (int *)malloc(sizeof(int) * n);
    // matriz_2d = (int **)malloc(sizeof(int *) * n);
    // matriz_3d = (int ***)malloc(sizeof(int **) * n);
    vetor[0] = 0;
    vetor[1] = 1;
    for (int i=2; i<n; i++)
        vetor[i] = vetor[i-1] + vetor[i-2];
    return vetor;
}

int main() {
    // Escreva uma função que receba um valor N como parâmetro e retorne um
    // ponteiro para um vetor de N posições criado dinamicamente, cujos dois primeiros
    // valores serão 0 e 1, e os valores subsequentes serão a soma dos dois valores
    // anteriores, ou seja, v[x] = v[x-1] + v[x-2].
    // 0 1 1 2 3 5 8 13...
    int n = 0;
    int *v;

    printf("Digite um valor inteiro maior que 0: ");
    while (n <= 1)
        scanf("%d", &n);
    v = gerar_vetor(n);

    for (int i=0; i<n; i++)
        printf("%d ", v[i]);
    printf("\n");
    free(v);
    v = NULL;

    return 0;
}