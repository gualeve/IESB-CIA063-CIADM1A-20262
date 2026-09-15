#include <stdio.h>

int calcula_segundos(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

void input_hora(int *h, int *m, int *s) {
    printf("Digite uma hora hh:mm:ss ");
    scanf("%d:%d:%d", h, m, s);
    return;
}

int diferenca(int h1, int m1, int s1, int h2, int m2, int s2) {
    int dif = calcula_segundos(h2, m2, s2) - calcula_segundos(h1, m1, s1);
    if (dif < 0)
        return -1;
    return dif;

}

int q3() {
    /*
    Escreva uma função que receba seis números inteiros como parâmetro,
    representando dois horários formados por horas, minutos e segundos. Chamando a
    função da questão anterior, calcule e retorne a diferença dos dois horários em
    segundos ou -1 se o segundo horário for menor que o primeiro.
    */
    int h1, m1, s1;
    int h2, m2, s2;
    int dif;
    input_hora(&h1, &m1, &s1);
    input_hora(&h2, &m2, &s2);
    dif = diferenca(h1, m1, s1, h2, m2, s2);
    if (dif != -1)
        printf("A diferença de horários é de %d segundos\n", dif);
    else
        printf("Horário 2 menor que horário 1\n");
    return 1;
}

int q2() {
    /*
    Elabore uma função que receba três números inteiros como parâmetro,
    representando horas, minutos e segundos. A função deve retornar esse horário
    convertido em segundos.
    */
    int hora, min, seg;

    input_hora(&hora, &min, &seg);
    printf("Total de segundos: %d\n", calcula_segundos(hora, min, seg));
    return 1;
}

int menu(int qtd) {
    int opcao;
    printf("\n\nQuestões\n===========\n");
    for (int i=1; i<=qtd; i++)
        printf("%d - Questão %d\n", i, i);
    printf("0 - Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    return opcao;
}

int main() {
    int opcao;
    while (1) {
        opcao = menu(5);
        switch (opcao) {
            case 2:
                q2();
                break;
            case 3:
                q3();
                break;
            case 0:
                break;
        }
        if (opcao == 0)
            break;
    }
    printf("FIM\n");

    return 0;
}
