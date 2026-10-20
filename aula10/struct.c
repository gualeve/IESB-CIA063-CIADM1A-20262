#include<stdio.h>
#include<string.h>
#define TAM 50

typedef struct {
    char rua[50];
    int numero;
    char cep[10];
} endereco_type;

typedef struct {
    char nome[TAM];
    int idade;
} pessoa_type;

typedef struct {
    pessoa_type pessoa;
    endereco_type endereco;
} cadastro_type;

int main() {
    cadastro_type contatos[50] = {
        {
            {"Júlia", 20}, 
            {"", x, ""}
        }, 
        {
            {}, 
            {}
        }, {{}, {}}};

    pessoa_type p1 = {"Júlia", 20};

    

    strcpy(contatos[0].pessoa.nome, "João da Silva");
    contatos[0].pessoa.idade = 30;
    scanf("%d", &contatos[1].pessoa.idade);

    return 0;
}