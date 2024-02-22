#include <stdio.h>

int countDuplicates(int tab[], int length)
{
    int count = 0;
    if (length == 0 || length == 1)
    {
        return 0;
    }

    for (int i = 0; i < length; i++)
    {
        // The j is used to get the element following the targeted one
        for (int j = i + 1; j < length; j++)
        {
            if (tab[i] == tab[j])
            {
                count++;
                // Once one duplicate is detected, no need to try to find the others for the same element
                break;
            }
        }
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 4, 2, 4, 7, 1, 1, 9, 2, 3, 4, 1};
    int duplicates = countDuplicates(a, 12);
    printf("Number of duplicates: %d\n", duplicates);
    return 0;
}
