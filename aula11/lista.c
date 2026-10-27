#include<stdio.h>
#define TAM 5

typedef struct {
    int hora;
    int min;
    int seg;
} horario_type;

void preencher(horario_type horarios[]) {
    for (int i=0; i<TAM; i++) {
        printf("Digite um horário (HH:MM:SS) ");
        scanf("%d:%d:%d", &horarios[i].hora, &horarios[i].min, &horarios[i].seg);
    }
    return;
}

int converte(horario_type horario) {
    return horario.hora * 3600 + horario.min * 60 + horario.seg;
}

horario_type calcular(horario_type horarios[]) {
    horario_type maior = horarios[0];
    for (int i=1; i<TAM; i++) {
        if (converte(maior) < converte(horarios[i]))
            maior = horarios[i];
    }
    return maior;
}

int converte2(horario_type *horario) {
    return horario->hora * 3600 + horario->min * 60 + horario->seg;
}

horario_type calcular2(horario_type horarios[]) {
    horario_type maior = horarios[0];
    for (int i=1; i<TAM; i++) {
        if (converte2(&maior) < converte2(&horarios[i]))
            maior = horarios[i];
    }
    return maior;
}

int main() {
    // Crie uma estrutura representando uma hora. Essa estrutura deve conter os
    // campos hora, minuto e segundo. Agora, escreva um programa que leia um vetor de
    // cinco posições dessa estrutura e imprima a maior hora.
    horario_type horarios[TAM];
    horario_type maior;

    preencher(horarios);
    maior = calcular(horarios);
    printf("O maior horário é: %02d:%02d:%02d\n", maior.hora, maior.min, maior.seg);

    return 0;
}