#include <stdio.h>

void collapsePairs(int tab[], int length)
{
    for (int i = 0; i < length - 1; i = i + 2)
    {
        int somme = tab[i] + tab[i + 1];
        printf("La somme de %d et %d est %d", i, i + 1, somme);
        printf("\n");
        if (somme % 2 == 0)
        {
            tab[i] = somme;
            tab[i + 1] = 0;
        }
        else
        {
            tab[i + 1] = somme;
            tab[i] = 0;
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ieme élément du tableau est %d", i, tab[i]);
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {7, 2, 8, 9, 4, 22, 7, 1, 9, 10};
    collapsePairs(a, 10);
    return 0;
}
