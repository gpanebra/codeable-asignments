#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
        if (h >= 1 && h <= 8)
        {
            for (size_t i = 0; i < h; i++)
            {
                for (size_t k = h - i - 1; k > 0; k--)
                {
                    printf(" ");
                }

                for (size_t j = 0; j <= i; j++)
                {
                    printf("#");
                }
                printf(" ");
                for (size_t j = 0; j <= i; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
    } while (true);
}