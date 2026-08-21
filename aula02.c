#include <stdio.h>
#define PI 3.1415
int main() {
    int d, m, a;
    // char a, b, c;
    
    printf("Digite\ruma\rdata \rno \rformato \r\"dd/mm/aaaa\"\n");

    scanf("%d/%d/%d", &d, &m, &a);

    printf("%02d/%02d/%02d\n", d, m, a);


    // printf("Digite um caracter:\n");
    // scanf("%c", &a);
    //
    // getchar();
    // getchar();
    //
    // printf("Digite um caracter:\n");
    // scanf("%c", &b);
    //
    // printf("Digite um inteiro:\n");
    // scanf("%d", &x);
    //
    // getchar();
    // c = getchar();
    //
    // printf("a=[%c] b=[%c] x=[%d] c=[%c]\n", a, b, x, c);
    
    return 0;
}
