#include <stdio.h>

void count_factors(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    printf("Le nombre de facteurs est: %d\n", count);
}

int main(int argc, char const *argv[])
{
    count_factors(20);
    return 0;
}
