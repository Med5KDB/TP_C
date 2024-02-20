#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            (j == i || j== 6-i) ? printf("%d", i) : printf(".");
        }
        printf("\n");
    }
    return 0;
}