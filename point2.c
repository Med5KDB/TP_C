#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            (i == j) ? printf("%d", i) : printf(" . ");
        }
        printf("\n");
    }
    return 0;
}