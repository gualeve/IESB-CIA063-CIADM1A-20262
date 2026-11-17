#include<stdio.h>
#include<stdlib.h>
#define TITULO 20
#define AUTOR 10

/*
Escreva um programa em C que:
- Defina uma struct de registro de livro com os seguintes campos: 
    título, autor, ano, preço;
- Crie um vetor dinamicamente com uma quantidade de livros informada pelo usuário;
- Cadastre os livros.
- Grave os dados em um arquivo
- Imprima a relação dos livros.
*/

typedef struct {
    char titulo[TITULO];
    char autor[AUTOR];
    int ano;
    float preco;
} livro_type;


livro_type entrada1() {
    livro_type livro;

    getchar();
    printf("Título: ");
    fgets(livro.titulo, TITULO, stdin);
    printf("Autor: ");
    fgets(livro.autor, AUTOR, stdin);
    printf("Ano: ");
    scanf("%d", &livro.ano);
    printf("Preço: ");
    scanf("%f", &livro.preco);
    return livro;
}
void entrada2(livro_type *livro) {

    getchar();
    printf("Título: ");
    fgets(livro->titulo, TITULO, stdin);
    printf("Autor: ");
    fgets(livro->autor, AUTOR, stdin);
    printf("Ano: ");
    scanf("%d", &livro->ano);
    printf("Preço: ");
    scanf("%f", &livro->preco);
    return;
}

void imprimir(livro_type livros[], int qtd) {
    for (int i=0; i<qtd; i++) {
        printf("%20s %10s %4d R$%7.2f\n", livros[i].titulo, livros[i].autor, livros[i].ano, livros[i].preco);
    }
}

int main() {
    int qtd;
    livro_type *livros;
    FILE *fd;  // descritor de arquivo
    livro_type entrada[3] = {
        {
            "Título do livro 1",
            "Autor do 1",
            2026,
            85.7
        },
        {
            "Título 2",
            "Autor 2",
            2020,
            100.0
        },
        {
            "Título 3",
            "Autor 3",
            2000,
            50.0
        }
    };

    printf("Informe a quantidade de livros: ");
    scanf("%d", &qtd);
    livros = (livro_type *)malloc(sizeof(livro_type) * qtd);
    for (int i=0; i<qtd; i++) {
        // livros[i] = entrada1();
        // entrada2(&livros[i]);
        livros[i] = entrada[i%3];
    }
    fd = fopen("livros.bin", "wb");
    // fwrite(livros, sizeof(livro_type), qtd, fd);
    for (int i=0; i<qtd; i++) {
        fwrite(&livros[i], sizeof(livro_type), 1, fd);
    }
    imprimir(livros, qtd);
    fclose(fd);
    free(livros);
    return 0;
}