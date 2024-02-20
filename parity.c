#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    printf("Donner un entier > 0: \n");
    scanf("%d", &n);
    if(!(n%2)) {
        printf("%d est pair", n);
    }else {
        printf("%d est impair", n);
    }
    return 0;
}