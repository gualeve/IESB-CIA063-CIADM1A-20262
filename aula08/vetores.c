#include<stdio.h>
#define QTD 6


void preenche(int v[]) {
    for (int i=0; i<QTD; i++)
        scanf("%d", &v[i]);
}

int main() {
    int vetor[QTD];

    preenche(vetor);

    for (int i=QTD-1; i>=0; i--)
        printf("%d\n", vetor[i]);


    // float notas[QTD];
    // float media = 0;
    // float provas[3] = {5.5, 6, 8};
    // for (int i=0; i<QTD; i++)
    //     scanf("%f", &notas[i]);
    // for (int i=0; i<QTD; i++)
    //     media += notas[i];
    // media /= QTD;

    // printf("Média: %f\n", media);
    // for (int i=0; i<QTD; i++)
    //     if (notas[i] >= media)
    //         printf("%f\n", notas[i]);


    return 0;
}