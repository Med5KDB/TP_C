#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 5; j > 0; j--)
            printf(" . ");
        printf("\n");
    }
    return 0;
}