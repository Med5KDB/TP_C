#include <stdio.h>

#define SIZE 10

void drawLines();
void drawBJPs();
void drawBoarder1();
void drawBoarder2();
void drawBoarder3();
void drawLine(int n);
void drawBJP(int n);

int main()
{
    drawBoarder1();
    drawLines();
    drawBoarder2();
    drawBJPs();
    drawBoarder3();
    printf("\n");

    return 0;
}

void drawLines()
{
    for (int i = 1; i <= SIZE; i++)
    {
        drawLine(i);
    }
}

void drawBJPs()
{
    for (int i = SIZE; i >= 2; i -= 2)
    {
        drawBJP(i);
    }
}

void drawBoarder1()
{
    for (int i = 1; i <= SIZE + 1; i++)
    {
        printf(" ");
    }

    drawBoarder3();
    printf("\n");
}

void drawBoarder2()
{
    drawBoarder3();

    for (int i = 1; i <= SIZE; i++)
    {
        printf("/");
    }
    printf("\n");
}

void drawBoarder3()
{
    printf("+");

    for (int i = 1; i <= 3 * SIZE; i++)
    {
        printf("-");
    }

    printf("+");
}

void drawLine(int n)
{
    for (int i = 0; i <= SIZE - n; i++)
    {
        printf(" ");
    }

    printf("/");

    for (int i = 1; i <= 3 * (SIZE - n); i++)
    {
        printf(" ");
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            printf("___/");
        else
            printf("__/");
    }

    for (int i = 1; i <= n - 1; i++)
    {
        printf("/");
    }
    printf("\n");
}

void drawBJP(int n)
{
    printf("|");

    for (int i = 1; i <= (3 * SIZE - 22) / 2; i++)
    {
        printf(" ");
    }

    printf("How to Code in C      ");

    for (int i = 1; i <= (3 * SIZE - 22) / 2; i++)
    {
        printf(" ");
    }

    if (SIZE % 2 == 1)
    {
        printf(" ");
    }

    printf("|");

    for (int i = 1; i <= n; i++)
    {
        printf("/");
    }

    printf("\n");
}
