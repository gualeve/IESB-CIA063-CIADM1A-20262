#include <stdio.h>

int main() {
    int i = 0;
    int soma = 0;
    for (i = 0; i<10; i++) {
        soma += i;
        printf("%d\n", soma);
    }
    printf("\n");

    i = 0;
    while (i<10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");


    // ( inicialização; condição; atualização)
    // for (int i = 0, j = 5; i < j ; i++, j--) {
    //     printf("(%d, %d)\n", i, j);
    // }
    // printf("==> %d\n", i);

    // while (i < 5) {
    //     printf("%d\n", ++i);
    // }


    return 0;
}