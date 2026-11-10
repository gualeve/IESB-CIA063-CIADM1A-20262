#include<stdio.h>
#include<stdlib.h>
#define TAM 20

typedef struct {
    int x;
    int y;
} ponto_type;

int main() {
    FILE *fp;
    int vetor[5] = {1, 2, 3, 4, 5};
    int x = 0;
    char nome[TAM] = "Adalberto";
    fp = fopen("arquivo", "wb");
    fwrite(nome, sizeof(char), TAM, fp);
    fwrite(&x, sizeof(int), 1, fp);
    fwrite(vetor, sizeof(int), 5, fp);
    printf("%ld\n", ftell(fp));
    fseek(fp, TAM+sizeof(int), SEEK_SET);
    printf("%ld\n", ftell(fp));
    fclose(fp);






    // FILE *fp;
    // ponto_type ponto;

    // fp = fopen("dados.bin", "wb");
    // scanf("%d", &ponto.x);
    // scanf("%d", &ponto.y);
    // fwrite(&ponto, sizeof(ponto_type), 1, fp);

    // fclose(fp);
    return 0;
}