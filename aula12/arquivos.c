#include<stdio.h>
#include<stdlib.h>
#define TAM 20
int main() {
    FILE *arq;
    char c;
    int pos;
    char nome[TAM];

    if ((arq = fopen("arquivo.txt", "r")) == NULL) {
        printf("ERRO\n");
        exit(1);
    } else {
        printf("Arquivo aberto corretamente\n");
    }
    // c = fputc('B', arq);
    // while (1) {
    //     pos = ftell(arq);
    //     c = fgetc(arq);
    //     if (feof(arq))
    //         break;
    //     printf("Caracter lido: [%c], [%d]\n", c, pos);
    // }
    // fputs("Adalberto Gualeve\n", arq);
    // fputs("Bianca\n", arq);

    fgets(nome, TAM, arq);
    printf("Nome: [%s]\n", nome);
    fgets(nome, TAM, arq);
    printf("Nome: [%s]\n", nome);
    
    fclose(arq);

    return 0;
}