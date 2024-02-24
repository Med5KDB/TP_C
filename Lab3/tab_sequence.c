// Ecrire une fonction qui crée un tableau et qui parcourt le tableau et affiche :
// • La somme des éléments de la séquence croissante la plus longue.
// • La séquence croissante la plus longue de ce tableau.
// Contraintes : Ne pas utiliser de deuxième tableau.

#include <stdio.h>

void displaySequence()
{
    int tab[] = {};
    int length;
    int longSequenceElementsSum = 0;
    int currentSequenceElementsSum = 0;
    int longestSequenceStart = 0;
    int longestSequenceEnd = 0;
    int currentSequenceStart = 0;

    printf("Veuillez entrer la taille (le nombre d'éléments) du tableau\n");
    scanf("%d", &length);
    printf("Veuillez remplir le tableau en fournissant ses éléments \n");
    for (int i = 0; i < length; i++)
    {
        int value;
        printf("Fournir le %d ième élément du tableau", i);
        scanf("%d", &value);
        tab[i] = value;
    }
    // Display array values
    for (int i = 0; i < length; i++)
    {
        printf("%d ième élément du tableau est:  %d", i + 1, tab[i]);
        printf("\n");
    }
    for (int i = 0; i < length - 1; i++)
    {
        if (tab[i] < tab[i + 1])
        {
            currentSequenceElementsSum += tab[i] + tab[i + 1];
            if (currentSequenceElementsSum > longSequenceElementsSum)
            {
                longSequenceElementsSum = currentSequenceElementsSum;
                longestSequenceStart = currentSequenceStart;
                longestSequenceEnd = i + 1;
            }
        }
        else
        {
            currentSequenceStart = i + 1;
            currentSequenceElementsSum = 0;
        }
    }
    printf("La somme des éléments de la séquence croissante la plus longue est:  %d\n", longSequenceElementsSum);
    printf("La séquence croissante la plus longue de ce tableau est :\n");
    for (int i = longestSequenceStart; i <= longestSequenceEnd; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    displaySequence();
    return 0;
}
