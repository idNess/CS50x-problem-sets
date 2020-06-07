#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        for (int x = 0; x <= i; x++)
        {
            printf("#");
        }
        printf("  ");
        for (int f = 0; f <= i; f++)
        {
            printf("#");
        }
        printf("\n");
    }
}