#include <stdio.h> 
int main()
{
    int x = 2, y = 3;
    int z = ++x - y++ == 4; 
    printf("z = %d", z);
    return 0;
}
