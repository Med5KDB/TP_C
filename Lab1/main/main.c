#include <stdio.h>

void print_i(int);
void print_f(float);
void print_c(char);
void read_i(int* x);
void read_f(float* x);

int main(int argc, char const * argv[]) {
    int a, b;
    printf("Saisir un entier: ");
    read_i(&a);

    printf("Saisir un entier: ");
    read_i(&b);
    print_i(b);

    printf("La somme de %d et %d vaut: ", a, b);
    print_i(a+b);
    return 0;
}
