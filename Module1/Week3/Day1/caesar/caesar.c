#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int counter = 0;
    if (argc == 2)
    {
        for (size_t i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]))
            {
                counter++;
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key");
    }
}
