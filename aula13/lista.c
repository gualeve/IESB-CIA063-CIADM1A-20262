#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 20

void limpa(char string[]) {
    if (string[strlen(string)-1] == '\n')
        string[strlen(string)-1] = '\0';
    return;
}

FILE *abrir_arquivo(char msg[], char modo[]) {
    char nome_arq[TAM];
    FILE *fd;
    printf("%s", msg);
    fgets(nome_arq, TAM, stdin);
    limpa(nome_arq);
    if ((fd = fopen(nome_arq, modo)) == NULL) {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }
    return fd;
}

int main() {
    FILE *fd1, *fd2, *fd3;
    char c;

    fd1 = abrir_arquivo("Digite o nome do primeiro arquivo de entrada: ", "r");
    fd2 = abrir_arquivo("Digite o nome do segundo arquivo de entrada: ", "r");
    fd3 = abrir_arquivo("Digite o nome do arquivo de saída: ", "w");
    while (1) {
        c = fgetc(fd1);
        if (c == EOF)
            break;
        fputc(c, fd3);
    }
    fputc('\n', fd3);
    while (1) {
        c = fgetc(fd2);
        if (c == EOF)
            break;
        fputc(c, fd3);
    }

    fclose(fd1);
    fclose(fd2);
    fclose(fd3);
    return 0;
}