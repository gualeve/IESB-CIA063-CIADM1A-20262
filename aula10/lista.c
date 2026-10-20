#include<stdio.h>
#include<string.h>
#define TAM 50

void limpar(char string[]) {
    if (string[strlen(string)-1] == '\n')
        string[strlen(string)-1] = '\0';
    return;
}

int mostra_iniciais(char nome[]) {
    int i=0;

    while (nome[i] == ' ')
        i++;
    putchar(nome[i]);
    i++;
    while (nome[i] != '\0') {
        if (nome[i-1] == ' ' && nome[i] != ' ') {
            putchar(nome[i]);
        }
        i++;
    }
    putchar('\n');
    return 1;
}

int main() {
    char nome[TAM];

    printf("Digite um nome: ");
    fgets(nome, TAM, stdin);
    limpar(nome);
    printf("%s\n", nome);
    mostra_iniciais(nome);

    return 0;
}