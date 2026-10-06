#include<stdio.h>
#include<string.h>
#define TAM 5

int main() {
    char nome[TAM];

    fgets(nome, TAM, stdin);
    if (nome[strlen(nome)-1] == '\n') {
        printf("Substituindo o \\n\n");
        nome[strlen(nome)-1] = '\0';
    } else {
        printf("Não Substituindo o \\n\n");
    }
    printf("[%s]\n", nome);

    return 0;
}