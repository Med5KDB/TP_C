// Ecrire une fonction qui crée un tableau et qui parcourt le tableau et affiche :
// • La somme des éléments de la séquence croissante la plus longue.
// • La séquence croissante la plus longue de ce tableau.
// Contraintes : Ne pas utiliser de deuxième tableau.

#include <stdio.h>

void displaySequence()
{
    int array[] = {};
    int length;
    printf("Veuillez entrer la taille (le nombre d'éléments) du tableau\n");
    scanf("%d", &length);
    printf("Veuillez remplir le tableau en fournissant ses éléments \n");
    for (int i = 0; i < length - 1; i++)
    {
        int value;
        printf("Fournir le %d ième élément du tableau", i);
        scanf("%d", &value);
        array[i] = value;
    }
    // Display array values
    for (int i = 0; i < length; i++)
    {
        printf("%d ième élément du tableau est %d", i + 1, array[i]);
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    displaySequence();
    return 0;
}
