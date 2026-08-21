#include <stdio.h>

int main() {
    int x = 10;
    char c = 'A';
    int *p = &x;
    char *pc = &c;

    printf("x=%d\n", x);
    *p++
    printf("x=%d\n", x);


    printf("x * x = %d\n", *p * *p);
    return 0;
}
