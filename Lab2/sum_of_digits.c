#include <stdio.h>

void compute_sum_of_digits()
{
    int n;
    printf("Ce programme permet de calculer la sommme des chiffres d'un entier entré par un utilisateur  \n");
    printf("Veuillez saisir un entier");

    scanf("%i", &n);
    if (n == 0)
    {
        printf("Veuillez saisit en entier non nul");
    }
}

int main(int argc, char const *argv[])
{
    compute_sum_of_digits();
    return 0;
}
