#include <stdio.h>

void print_triangle()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// 2e question

void print_number()
{
    int i = 1, j = 1;
    do
    {
        do
        {
            printf("%d", i);
            j++;
        } while (j < i);
        printf("\n");
        i++;
        j = 0;
    } while (i < 6);
}

// 3e question

void printNumberWithPoint()
{
    int i = 1;
    while (i < 6)
    {
        int j = 4;
        while (j >= 0)
        {
            (j >= i) ? printf(".") : printf("%d", i);
            j--;
        }
        printf("\n");
        i++;
    }
}

// 4e question

void printNumberWithShift()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 5; j > 0; j--)
        {
            (i == j) ? printf("%d", i) : printf(".");
        }
        printf("\n");
    }
}

// 5e question

void displayCodeSnippetOutput()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// 6e question

void loop_mystery_exam5(int x, int y)
{
    int z = y;
    while (x % z == 0)
    {   
        printf("What is this? \n");
        printf("(%d %d)", x, z);
        x = x - z;
        z++;
    }
    {
        printf("What the heck this one? \n");
        printf("(%d %d) %d \n)", x, z, y);
    }
}

int main(int argc, char const *argv[])
{
    printf("Première question \n");
    print_triangle();
    printf("Deuxième question \n");
    print_number();
    printf("Troisième question \n");
    printNumberWithPoint();
    printf("Quatrième question \n");
    printNumberWithShift();
    printf("Cinquième question \n");
    printf("Que produit le bout de code???\n");
    displayCodeSnippetOutput();
    printf("Sixième question \n");
    // Appels des fonctions pour tester les output
    loop_mystery_exam5(12, 4);
    // loop_mystery_exam5(14, 2);
    // loop_mystery_exam5(27, 3);
    return 0;
}
