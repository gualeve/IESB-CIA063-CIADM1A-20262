#include <stdio.h>

int main() {
    int hora;
    int x, z;

    // scanf("%d", &x);
    // z = (x > 0) ? x + 1 : x - 1;

    // // if (x > 0)
    // //     z = x + 1;
    // // else
    // //     z = x - 1;
    // printf("z = %d\n", z);


    scanf("%d", &hora);
    if (hora < 0 || hora >= 24)
        printf("Hora incorreta\n");
    else
        if (hora < 12)
            printf("Bom dia\n");
        else
            printf("Boa %s\n", ((hora < 16) ? "tarde" : "noite"));
            // if (hora < 16)
            //     printf("Boa tarde\n");
            // else
            //     printf("Boa noite\n");



    // int x = 3, a = 1, b = 1;
//     if (a == b && x < 0 || x < a) {
//         printf("a=%d\n", a);
//         printf("b=%d\n", b);
//     } else {
//         if (x == 3) {
//
//         }
//         printf("x=%d\n", x);
    // }
    // printf("\nresultado da condição extra %d\n", x = a - b );

    return 0;
}
